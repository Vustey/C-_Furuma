//
// Created by vu tran on 07/05/2022.
//
#include "../header.h"
#ifndef FURUMA_OFFICIAL_FACILITY_H
#define FURUMA_OFFICIAL_FACILITY_H


class Facility {
protected:
        string idFacility;
        string nameService;
        double areaUse;
        double rentalPrice;
        int rentalMaxPeople;
        string styleRental;
public:
    Facility(const string &idFacility, const string &nameService, double areaUse, double rentalPrice,
             int rentalMaxPeople, const string &styleRental);
    Facility();
    virtual void output();
};


#endif //FURUMA_OFFICIAL_FACILITY_H
