//
// Created by vu tran on 13/05/2022.
//

#ifndef FURUMA_OFFICIAL_READANDWIRTECUSTOMER_H
#define FURUMA_OFFICIAL_READANDWIRTECUSTOMER_H
#include "../model/Customer.h"
#include<string>
#include<list>
class ReadAndWirteCustomer {
public:
    list<Customer>readAllcus(string path);
    void writeAllcus(string path,list<Customer>c);
};


#endif //FURUMA_OFFICIAL_READANDWIRTECUSTOMER_H
