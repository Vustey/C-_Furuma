//
// Created by vu tran on 13/05/2022.
//

#ifndef FURUMA_OFFICIAL_READANDWIRTECUSTOMER_H
#define FURUMA_OFFICIAL_READANDWIRTECUSTOMER_H
#include "../model/Customer.h"
#include<string>
#include<vector>
class ReadAndWirteCustomer {
public:
    vector<Customer>readAllcus(string path);
    void writeAllcus(string path,vector<Customer>c);
};


#endif //FURUMA_OFFICIAL_READANDWIRTECUSTOMER_H
