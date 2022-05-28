cmake_minimum_required(VERSION 3.22)
project(Furuma_Official)

set(CMAKE_CXX_STANDARD 14)

add_executable(Furuma_Official main.cpp header.h model/Person.cpp model/Person.h model/Customer.cpp model/Customer.h model/Employee.cpp model/Employee.h model/Facility.cpp model/Facility.h model/Room.cpp model/Room.h model/Villa.cpp model/Villa.h model/House.cpp model/House.h model/Booking.cpp model/Booking.h model/Contract.cpp model/Contract.h controller/FurumaController.cpp controller/FurumaController.h controller/CustomerManagement.cpp controller/CustomerManagement.h controller/EmployeeManagement.cpp controller/EmployeeManagement.h controller/FacilityManagement.cpp controller/FacilityManagement.h controller/BookingManagement.cpp controller/BookingManagement.h controller/BookingService.cpp controller/BookingService.h controller/ContractService.cpp controller/ContractService.h controller/PromotionManagement.cpp controller/PromotionManagement.h service/EmployeeService.cpp service/EmployeeService.h service/CustomerService.cpp service/CustomerService.h until/ReadAndWirteEmployee.cpp until/ReadAndWirteEmployee.h until/ReadAndWirteCustomer.cpp until/ReadAndWirteCustomer.h )
