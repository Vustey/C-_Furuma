//
// Created by vu tran on 08/05/2022.
//

#include "FacilityManagement.h"
#include "FurumaController.h"
void FacilityManagement::facilityMenu() {
    while (1){
        int choice;
        cout<<"FacilityManagement"<<endl;
        cout<<"1.DisplayFacility"<<endl;
        cout<<"2.AddVilla"<<endl;
        cout<<"3.AddRoom"<<endl;
        cout<<"4.AddHouse"<<endl;
        cout<<"5.DisplayFacMaintain"<<endl;
        cout<<"6.Exit";
        switch (choice){
            case 1:{
                break;
            }
            case 2:{
                break;
            }
            case 3:{
                break;
            }
            case 4:{
                break;
            }
            case 5:{
                break;
            }
            case 6:{
                FurumaController::displayFuruma();
                break;
            }
        }
    }
}
