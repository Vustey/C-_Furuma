#include"model/Person.h"
#include"model/Customer.h"
#include "model/Room.h"
#include "controller/FurumaController.h"
int main() {
    Facility* facility=new Room("12","VIP",21,43,9,"Cao","No");
    facility->output();
FurumaController::displayFuruma();
    return 0;
}
