//
// Created by vu tran on 13/05/2022.
//

#include "ReadAndWirteCustomer.h"
#include<fstream>
vector<Customer> ReadAndWirteCustomer::readAllcus(string path) {
    vector<Customer>list;
    ifstream filein(path,ios_base::in);
    if(filein.is_open()){
        cout<<"Mo file thanh cong"<<endl;
        while (1){
            string idCode;
            getline(filein,idCode,',');
            string namePerson;
            string dateOfBirth;
            string sex;
            string idPerson;
            string phoneNumber;
            string emailAddress;
            string typeCustomer;
            string address;
            getline(filein,namePerson,',');
            getline(filein,dateOfBirth,',');
            getline(filein,sex,',');
            getline(filein,idPerson,',');
            getline(filein,phoneNumber,',');
            getline(filein,emailAddress,',');
            getline(filein,typeCustomer,',');
            getline(filein,address);
            if(filein.eof()){
                break;
            }
            Customer c(idCode,namePerson,dateOfBirth,sex,idPerson,phoneNumber,emailAddress,typeCustomer,address);
            list.push_back(c);
        }
        filein.close();
    }else{
        cout<<"Mo file khong thanh cong"<<endl;
    }
    return list;
}

void ReadAndWirteCustomer::writeAllcus(string path, vector<Customer> c) {
    ofstream fileout(path,ios_base::out);
    if(fileout.is_open()){
        cout<<"Ghi file thanh cong"<<endl;
        for (Customer c :c){
            fileout<<c.getIdCode()<<","<<c.getNamePerson()<<","<<c.getDateOfBirth()<<","<<c.getSex()<<","<<c.getIdPerson()
            <<","<<c.getPhoneNumber()<<","<<c.getEmailAddress()<<","<<c.getTypeCustomer()<<","<<c.getAddress()<<endl;
        }
        fileout.close();
    }else{
        cout<<"Ghi file khong thanh cong"<<endl;
    }
}
