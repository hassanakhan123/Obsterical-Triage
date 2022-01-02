#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>
#include <string>
#include <deque>

using namespace std;

enum conditions {UNKNOWN, LABOUR, ADMIT};

class Patient{
private:
    string name;
    int healthCardNumber;
    conditions condition;
    int cervixDilation;
public:
    Patient(string, int);
    string getName();
    int getHealthCardNumber();
    string getCondition();
    void setCervixDilation(int);
    int getCervixDilation();
    ~Patient();
};

#endif /* PATIENT_H */

