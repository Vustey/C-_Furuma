//
// Created by vu tran on 07/05/2022.
//

#include "Room.h"

Room::Room(const string &idFacility, const string &nameService, double areaUse, double rentalPrice, int rentalMaxPeople,
           const string &styleRental, const string &freeService) : Facility(idFacility, nameService, areaUse,
                                                                            rentalPrice, rentalMaxPeople, styleRental),
                                                                   freeService(freeService) {}

Room::Room() {

}

void Room::output() {
    cout<<"Room{idFacility:"<<idFacility<<" "<<"nameService:"<<nameService<<" "<<"areaUse:"<<areaUse<<" "<<"rentalPrice:"
        <<rentalPrice<<" "<<"rentalMaxPeople:"<<rentalMaxPeople<<" "<<"styleRental:"<<styleRental<<" "<<"freeService:"
        <<freeService<<"}"<<endl;
}

const string &Room::getFreeService() const {
    return freeService;
}

void Room::setFreeService(const string &freeService) {
    Room::freeService = freeService;
}
