//
// Created by vu tran on 13/05/2022.
//

#ifndef FURUMA_OFFICIAL_READANDWIRTEEMPLOYEE_H
#define FURUMA_OFFICIAL_READANDWIRTEEMPLOYEE_H

#include "../model/Employee.h"
#include<string>
#include<list>
class ReadAndWirteEmployee {
public:
    list<Employee>readAllemp(string path);
    void writeAllemp(string path,list<Employee>e);
};


#endif //FURUMA_OFFICIAL_READANDWIRTEEMPLOYEE_H
