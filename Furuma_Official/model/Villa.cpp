//
// Created by vu tran on 07/05/2022.
//

#include "Villa.h"

Villa::Villa(const string &idFacility, const string &nameService, double areaUse, double rentalPrice,
             int rentalMaxPeople, const string &styleRental, const string &standarVilla, double areaPool, int floor)
        : Facility(idFacility, nameService, areaUse, rentalPrice, rentalMaxPeople, styleRental),
          standarVilla(standarVilla), areaPool(areaPool), floor(floor) {}

Villa::Villa() {

}

void Villa::output() {
    cout<<"Villa{idFacility:"<<idFacility<<" "<<"nameService:"<<nameService<<" "<<"areaUse:"<<areaUse<<" "<<"rentalPrice:"
        <<rentalPrice<<" "<<"rentalMaxPeople:"<<rentalMaxPeople<<" "<<"styleRental:"<<styleRental<<"standarVilla:"<<standarVilla<<" "
        <<"areaPool:"<<areaPool<<" "<<"floor:"<<floor<<"}"<<endl;
}
