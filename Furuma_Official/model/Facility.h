//
// Created by vu tran on 07/05/2022.
//
#include "../header.h"
#ifndef FURUMA_OFFICIAL_FACILITY_H
#define FURUMA_OFFICIAL_FACILITY_H


class Facility {
public:
    const string &getIdFacility() const;

    void setIdFacility(const string &idFacility);

    const string &getNameService() const;

    void setNameService(const string &nameService);

    double getAreaUse() const;

    void setAreaUse(double areaUse);

    double getRentalPrice() const;

    void setRentalPrice(double rentalPrice);

    int getRentalMaxPeople() const;

    void setRentalMaxPeople(int rentalMaxPeople);

    const string &getStyleRental() const;

    void setStyleRental(const string &styleRental);

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
