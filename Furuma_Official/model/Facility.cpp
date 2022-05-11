//
// Created by vu tran on 07/05/2022.
//

#include "Facility.h"

Facility::Facility(const string &idFacility, const string &nameService, double areaUse, double rentalPrice,
                   int rentalMaxPeople, const string &styleRental) : idFacility(idFacility), nameService(nameService),
                                                                     areaUse(areaUse), rentalPrice(rentalPrice),
                                                                     rentalMaxPeople(rentalMaxPeople),
                                                                     styleRental(styleRental) {}

Facility::Facility() {

}

void Facility::output() {
    cout<<"Facility{idFacility:"<<idFacility<<" "<<"nameService:"<<nameService<<" "<<"areaUse:"<<areaUse<<" "<<"rentalPrice:"
    <<rentalPrice<<" "<<"rentalMaxPeople:"<<rentalMaxPeople<<" "<<"styleRental:"<<styleRental<<"}"<<endl;
}
