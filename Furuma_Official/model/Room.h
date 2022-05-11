//
// Created by vu tran on 07/05/2022.
//
#include "../header.h"
#include "Facility.h"
#ifndef FURUMA_OFFICIAL_ROOM_H
#define FURUMA_OFFICIAL_ROOM_H


class Room : public Facility{
private:
    string freeService;
public:
    Room(const string &idFacility, const string &nameService, double areaUse, double rentalPrice, int rentalMaxPeople,
         const string &styleRental, const string &freeService);
    Room();
    void output();

};


#endif //FURUMA_OFFICIAL_ROOM_H
