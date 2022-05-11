//
// Created by vu tran on 07/05/2022.
//
#include "../header.h"
#include "Facility.h"
#ifndef FURUMA_OFFICIAL_HOUSE_H
#define FURUMA_OFFICIAL_HOUSE_H


class House : public Facility{
private:
    string standarHouse;
    int floor;
public:
    House(const string &idFacility, const string &nameService, double areaUse, double rentalPrice, int rentalMaxPeople,
          const string &styleRental, const string &standarHouse, int floor);
    House();
    void output();
};


#endif //FURUMA_OFFICIAL_HOUSE_H
