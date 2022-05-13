//
// Created by vu tran on 13/05/2022.
//

#include "CustomerService.h"
#include "../until/ReadAndWirteCustomer.h"
void CustomerService::displayCustomer() {
    list = ReadAndWirteCustomer().readAllcus("E:\\DTU\\Git_Furuma\\C-_Furuma\\Furuma_Official\\data\\Customer");
    for(Customer c:list){
        c.output();
    }
}

void CustomerService::createCustomer() {
    list = ReadAndWirteCustomer().readAllcus("E:\\DTU\\Git_Furuma\\C-_Furuma\\Furuma_Official\\data\\Customer");
    int n = list.size();
    string idCode="KH-000"+ to_string(n);
    string namePerson;
    string dateOfBirth;
    string sex;
    string idPerson;
    string phoneNumber;
    string emailAddress;
    string typerCustomer;
    string address;
    cout<<"Enter namePerson:";
    cin.ignore();
    getline(cin,namePerson);
    cout<<"Enter dateOfBirth:";
    getline(cin,dateOfBirth);
    cout<<"Enter sex:";
    getline(cin,sex);
    cout<<"Enter idPerson:";
    getline(cin,idPerson);
    cout<<"Enter phoneNumber:";
    getline(cin,phoneNumber);
    cout<<"Enter emailAddress:";
    getline(cin,emailAddress);
    cout<<"Enter typerCustomer:";
    getline(cin,typerCustomer);
    cout<<"Enter address:";
    getline(cin,address);
    Customer c(idCode,namePerson,dateOfBirth,sex,idPerson,phoneNumber,emailAddress,typerCustomer,address);
    list.push_back(c);
    ReadAndWirteCustomer().writeAllcus("E:\\DTU\\Git_Furuma\\C-_Furuma\\Furuma_Official\\data\\Customer",list);

}

void CustomerService::editCustomer() {

}
