
#include "EmployeeService.h"
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

}
