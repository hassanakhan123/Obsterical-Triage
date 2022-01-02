#include "Patient.h"

Patient::Patient(string name, int healthCardNumber){
    this->name = name;
    this->healthCardNumber = healthCardNumber;
    condition = UNKNOWN;
    cervixDilation = 0;
};

string Patient::getName(){
    return name;
};

int Patient::getHealthCardNumber(){
    return healthCardNumber;
};

string Patient::getCondition(){
    if (condition == UNKNOWN){
        return "UNKNOWN";
    } else if (condition == ADMIT){
        return "ADMIT";
    } else {
        return "LABOUR";
    }
};

void Patient::setCervixDilation(int inputDilation){
    cervixDilation = inputDilation;
    if (inputDilation >= 4) {
        condition = ADMIT;
    } else {
        condition = LABOUR;
    }
};

int Patient::getCervixDilation(){
    return cervixDilation;
};
