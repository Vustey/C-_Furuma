//
// Created by vu tran on 08/05/2022.
//

#include "PromotionManagement.h"
#include "FurumaController.h"
void PromotionManagement::promotionMenu() {
    while (1){
        int choice;
        cout<<"PromotionManagement"<<endl;
        cout<<"1.DisplayPromotion"<<endl;
        cout<<"2.ListGetVoucher"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch (choice){
            case 1:{
                break;
            }
            case 2:{
                break;
            }
            case 3:{
                FurumaController::displayFuruma();
                break;
            }
        }
    }
}
