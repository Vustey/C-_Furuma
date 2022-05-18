//
// Created by vu tran on 13/05/2022.
//
#include <fstream>
#include "ReadAndWirteEmployee.h"

list<Employee> ReadAndWirteEmployee::readAllemp(string path) {
    list<Employee>list;
    ifstream file_emp(path,ios_base::in);
    if(file_emp.is_open()){
        cout<<"Mo file thanh cong"<<endl;
        while (1){
            string idCode;
            getline(file_emp,idCode,',');
            string namePerson;
            string dateOfBirth;
            string sex;
            string idPerson;
            string phoneNumber;
            string emailAddress;
            string level;
            string position;
            float salary;
            getline(file_emp,namePerson,',');
            getline(file_emp,dateOfBirth,',');
            getline(file_emp,sex,',');
            getline(file_emp,idPerson,',');
            getline(file_emp,phoneNumber,',');
            getline(file_emp,emailAddress,',');
            getline(file_emp,level,',');
            getline(file_emp,position,',');
            file_emp>>salary;
            if(file_emp.eof()){
                break;
            }
            file_emp.ignore();
            Employee e(idCode,namePerson,dateOfBirth,sex,idPerson,phoneNumber,emailAddress,level,position,salary);
            list.push_back(e);
            }
        file_emp.close();
        }else{
        cout<<"Mo file khong thanh cong"<<endl;
    }
    return list;
    }
void ReadAndWirteEmployee::writeAllemp(string path, list<Employee>e) {
    ofstream fileout(path,ios_base::out);
    if(fileout.is_open()){
        cout<<"Ghi file thanh cong"<<endl;
        for(Employee e : e){
            fileout<<e.getIdCode()<<","<<e.getNamePerson()<<","<<e.getDateOfBirth()<<","<<e.getSex()<<","<<e.getIdPerson()
            <<","<<e.getPhoneNumber()<<","<<e.getEmailAddress()<<","<<e.getLevel()<<","<<e.getPosition()<<","<<e.getSalary()<<endl;
        }
        fileout.close();
    }else{
        cout<<"Ghi file khong thanh cong"<<endl;
    }
}

