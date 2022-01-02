#ifndef OTPREGISTER_H
#define OTPREGISTER_H

#include "Patient.h"
#include <deque>
#include <iostream>
#include <string>

class OTPRegister {
private:
    deque<Patient*> PatientQueue;
public:
    size_t sizeOfQueue();
    void registerPatient();
    void examinePatient();
    void displayPatients();
    ~OTPRegister();
};

#endif /* OTPREGISTER_H */