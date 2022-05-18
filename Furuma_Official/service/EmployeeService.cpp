
#include "EmployeeService.h"
#include "../controller/EmployeeManagement.h"
#include "../until/ReadAndWirteEmployee.h"
void EmployeeService::displayEmployee() {
    list= ReadAndWirteEmployee().readAllemp("E:\\DTU\\Git_Furuma\\C-_Furuma\\Furuma_Official\\data\\Employee");
    for(Employee e : list){
        e.output();
    }
}

void EmployeeService::createEmployee() {
    list = ReadAndWirteEmployee().readAllemp("E:\\DTU\\Git_Furuma\\C-_Furuma\\Furuma_Official\\data\\Employee");
    int n = list.size();
    string idCode="NV-000"+ to_string(n);
    string namePerson;
    string dateOfBirth;
    string sex;
    string idPerson;
    string phoneNumber;
    string emailAddress;
    string level;
    string position;
    float salary;
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
    cout<<"Enter level:";
    getline(cin,level);
    cout<<"Enter position:";
    getline(cin,position);
    cout<<"Enter salary:";
    cin>>salary;
    cin.ignore();
    Employee e(idCode,namePerson,dateOfBirth,sex,idPerson,phoneNumber,emailAddress,level,position,salary);
    list.push_back(e);
    ReadAndWirteEmployee().writeAllemp("E:\\DTU\\Git_Furuma\\C-_Furuma\\Furuma_Official\\data\\Employee",list);
}

void EmployeeService::editEmployee() {
    EmployeeService().displayEmployee();
    int n;
    cout<<"Enter id you want to change NV-000";
    cin>>n;
    string id_employee="NV-000"+ to_string(n);
    Employee *tmp;
    bool check=true;
    for(Employee &e :list=ReadAndWirteEmployee().readAllemp("E:\\DTU\\Git_Furuma\\C-_Furuma\\Furuma_Official\\data\\Employee") ){
        if(id_employee==e.getIdCode()){
            check=false;
            tmp=&e;
        }
    }
    if(check){
        cout<<"No matching Id"<<endl;
    }else{
        while(1){
            cout<<"1.Change namePerson."<<endl;
            cout<<"2.Change dateOfBirth."<<endl;
            cout<<"3.Change sex."<<endl;
            cout<<"4.Change idPerson."<<endl;
            cout<<"5.Change phoneNumber."<<endl;
            cout<<"6.Change emailAddress."<<endl;
            cout<<"7.Change level."<<endl;
            cout<<"8.Change position."<<endl;
            cout<<"9.Change salary."<<endl;
            cout<<"10.Exit."<<endl;
            int choice;
            cout<<"Enter choice:";
            cin>>choice;
            cin.ignore();
            switch(choice){
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
                }case 5:{
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
                    cout<<"Edit level("<<tmp->getLevel()<<")"<<endl;
                    string changelevel;
                    cout<<"level new:";
                    getline(cin,changelevel);
                    tmp->setIdPerson(changelevel);
                    break;
                }
                case 8:{
                    tmp->output();
                    cout<<"Edit position("<<tmp->getPosition()<<")"<<endl;
                    string changeposition;
                    cout<<"level new:";
                    getline(cin,changeposition);
                    tmp->setIdPerson(changeposition);
                    break;
                }
                case 9:{
                    tmp->output();
                    cout<<"Edit salary("<<tmp->getSalary()<<")"<<endl;
                    string changesalary;
                    cout<<"level new:";
                    getline(cin,changesalary);
                    tmp->setIdPerson(changesalary);
                    break;
                }
                case 10:{
                    EmployeeManagement::employeeMenu();
                }
            }
            ReadAndWirteEmployee().writeAllemp("E:\\DTU\\Git_Furuma\\C-_Furuma\\Furuma_Official\\data\\Employee",list);
        }
    }
}
