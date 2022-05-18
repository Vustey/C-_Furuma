//
// Created by vu tran on 13/05/2022.
//

#include "CustomerService.h"
#include "../until/ReadAndWirteCustomer.h"
#include "../controller/CustomerManagement.h"
void CustomerService::displayCustomer() {
    vector = ReadAndWirteCustomer().readAllcus("E:\\DTU\\Git_Furuma\\C-_Furuma\\Furuma_Official\\data\\Customer");
    for(Customer c : vector){
        c.output();
    }
}

void CustomerService::createCustomer() {
    vector = ReadAndWirteCustomer().readAllcus("E:\\DTU\\Git_Furuma\\C-_Furuma\\Furuma_Official\\data\\Customer");
    int n = vector.size();
    string idCode="KH-000"+ to_string(n);
    string namePerson;
    string dateOfBirth;
    string sex;
    string idPerson;
    string phoneNumber;
    string emailAddress;
    string typeCustomer;
    string address;
    cout<<"Enter namePerson:";
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
    cout<<"Enter typeCustomer:";
    getline(cin,typeCustomer);
    cout<<"Enter address:";
    getline(cin,address);
    Customer c(idCode,namePerson,dateOfBirth,sex,idPerson,phoneNumber,emailAddress,typeCustomer,address);
    vector.push_back(c);
    ReadAndWirteCustomer().writeAllcus("E:\\DTU\\Git_Furuma\\C-_Furuma\\Furuma_Official\\data\\Customer", vector);
}

void CustomerService::editCustomer() {
    CustomerService().displayCustomer();
    int n;
    cout<<"Enter id you want to change KH-000";
    cin>>n;
    string id_customer="KH-000"+ to_string(n);
    Customer *tmp;
    bool check = true;
    for(Customer &c : vector = ReadAndWirteCustomer().readAllcus("E:\\DTU\\Git_Furuma\\C-_Furuma\\Furuma_Official\\data\\Customer")){
        if(id_customer==c.getIdCode()){
            check = false;
            tmp=&c;
        }
    }
    if(check){
        cout<<"No matching id"<<endl;
    }else{
        while (1){
            cout<<"1.Change namePerson."<<endl;
            cout<<"2.Change dateOfBirth."<<endl;
            cout<<"3.Change sex."<<endl;
            cout<<"4.Change idPerson."<<endl;
            cout<<"5.Change phoneNumber."<<endl;
            cout<<"6.Change emailAddress."<<endl;
            cout<<"7.Change typeCustomer."<<endl;
            cout<<"8.Change address."<<endl;
            cout<<"9.Exit."<<endl;
            int choice;
            cout<<"Enter choice:";
            cin>>choice;
            cin.ignore();
            switch (choice) {
                case 1:{
                    tmp->output();
                    cout<<"Edit namePerson"<<"("<<tmp->getNamePerson()<<")"<<endl;
                    string changenamePerson;
                    cout<<"namePerson new:";
                    getline(cin,changenamePerson);
                    tmp->setNamePerson(changenamePerson);
                    break;
                }
                case 2:{
                    tmp->output();
                    cout<<"Edit dateOfBirth"<<"("<<tmp->getDateOfBirth()<<")"<<endl;
                    string changedateOfBirth;
                    cout<<"dateOfBirth new:";
                    getline(cin,changedateOfBirth);
                    tmp->setDateOfBirth(changedateOfBirth);
                    break;
                }
                case 3:{
                    tmp->output();
                    cout<<"Edit sex"<<"("<<tmp->getSex()<<")"<<endl;
                    string changesex;
                    cout<<"sex new:";
                    getline(cin,changesex);
                    tmp->setSex(changesex);
                    break;
                }
                case 4:{
                    tmp->output();
                    cout<<"Edit idPerson("<<tmp->getIdPerson()<<")"<<endl;
                    string changeidPerson;
                    cout<<"idPerson new:";
                    getline(cin,changeidPerson);
                    tmp->setIdPerson(changeidPerson);
                    break;
                }
                case 5:{
                    tmp->output();
                    cout<<"Edit phoneNumber("<<tmp->getPhoneNumber()<<")"<<endl;
                    string changephoneNumber;
                    cout<<"phoneNumber new:";
                    getline(cin,changephoneNumber);
                    tmp->setIdPerson(changephoneNumber);
                    break;
                }
                case 6:{
                    tmp->output();
                    cout<<"Edit emailAddress("<<tmp->getEmailAddress()<<")"<<endl;
                    string changeemailAddress;
                    cout<<"emailAddress new:";
                    getline(cin,changeemailAddress);
                    tmp->setIdPerson(changeemailAddress);
                    break;
                }
                case 7:{
                    tmp->output();
                    cout<<"Edit typeCustomer("<<tmp->getTypeCustomer()<<")"<<endl;
                    string changetypeCustomer;
                    cout<<"emailAddress new:";
                    getline(cin,changetypeCustomer);
                    tmp->setIdPerson(changetypeCustomer);
                    break;
                }
                case 8:{
                    tmp->output();
                    cout<<"Edit address("<<tmp->getAddress()<<")"<<endl;
                    string changeAddress;
                    cout<<"Address new:";
                    getline(cin,changeAddress);
                    tmp->setIdPerson(changeAddress);
                    break;
                }
                case 9:{
                    CustomerManagement::customerMenu();
                }
            }
            ReadAndWirteCustomer().writeAllcus("E:\\DTU\\Git_Furuma\\C-_Furuma\\Furuma_Official\\data\\Customer", vector);
        }
    }
}
