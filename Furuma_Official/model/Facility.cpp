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
    cout<<"Facility{idFacility:"<<idFacility<<","<<"nameService:"<<nameService<<","<<"areaUse:"<<areaUse<<","<<"rentalPrice:"
    <<rentalPrice<<","<<"rentalMaxPeople:"<<rentalMaxPeople<<","<<"styleRental:"<<styleRental<<"}"<<endl;
}

const string &Facility::getIdFacility() const {
    return idFacility;
}

void Facility::setIdFacility(const string &idFacility) {
    Facility::idFacility = idFacility;
}

const string &Facility::getNameService() const {
    return nameService;
}

void Facility::setNameService(const string &nameService) {
    Facility::nameService = nameService;
}

double Facility::getAreaUse() const {
    return areaUse;
}

void Facility::setAreaUse(double areaUse) {
    Facility::areaUse = areaUse;
}

double Facility::getRentalPrice() const {
    return rentalPrice;
}

void Facility::setRentalPrice(double rentalPrice) {
    Facility::rentalPrice = rentalPrice;
}

int Facility::getRentalMaxPeople() const {
    return rentalMaxPeople;
}

void Facility::setRentalMaxPeople(int rentalMaxPeople) {
    Facility::rentalMaxPeople = rentalMaxPeople;
}

const string &Facility::getStyleRental() const {
    return styleRental;
}

void Facility::setStyleRental(const string &styleRental) {
    Facility::styleRental = styleRental;
}
