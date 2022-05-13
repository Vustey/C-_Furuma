//
// Created by vu tran on 13/05/2022.
//

#include "ReadAndWirteCustomer.h"
#include<fstream>
list<Customer> ReadAndWirteCustomer::readAllcus(string path) {
    list<Customer>list;
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
            string typerCustomer;
            string address;
            getline(filein,namePerson,',');
            getline(filein,dateOfBirth,',');
            getline(filein,sex,',');
            getline(filein,idPerson,',');
            getline(filein,phoneNumber,',');
            getline(filein,emailAddress,',');
            getline(filein,typerCustomer,',');
            getline(filein,address);
            if(filein.eof()){
                break;
            }
            filein.ignore();
            Customer c(idCode,namePerson,dateOfBirth,sex,idPerson,phoneNumber,emailAddress,typerCustomer,address);
            list.push_back(c);
        }
        filein.close();
    }else{
        cout<<"Mo file khong thanh cong"<<endl;
    }
    return list;
}

void ReadAndWirteCustomer::writeAllcus(string path, list<Customer> c) {
    ofstream fileout(path,ios_base::out);
    if(fileout.is_open()){
        cout<<"Ghi file thanh cong"<<endl;
        for (Customer c :c){
            fileout<<c.getIdCode()<<","<<c.getNamePerson()<<","<<c.getDateOfBirth()<<","<<c.getSex()<<","
            <<c.getPhoneNumber()<<","<<c.getEmailAddress()<<","<<c.getTypeCustomer()<<","<<c.getAddress()<<endl;
        }
        fileout.close();
    }else{
        cout<<"Ghi file khong thanh cong"<<endl;
    }
}
