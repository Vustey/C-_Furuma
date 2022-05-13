//
// Created by vu tran on 07/05/2022.
//
#include "../header.h"
#include "Facility.h"
#ifndef FURUMA_OFFICIAL_VILLA_H
#define FURUMA_OFFICIAL_VILLA_H


class Villa : public Facility{

public:
    const string &getStandarVilla() const;

    void setStandarVilla(const string &standarVilla);

    double getAreaPool() const;

    void setAreaPool(double areaPool);

    int getFloor() const;

    void setFloor(int floor);

private:
    string standarVilla;
    double areaPool;
    int floor;
public:
    Villa(const string &idFacility, const string &nameService, double areaUse, double rentalPrice, int rentalMaxPeople,
          const string &styleRental, const string &standarVilla, double areaPool, int floor);
    Villa();
    void output();

};


#endif //FURUMA_OFFICIAL_VILLA_H
