#include "OTPRegister.h"

size_t OTPRegister::sizeOfQueue(){
    return PatientQueue.size();
};

void OTPRegister::registerPatient(){
    string inputName; 
    int inputHealthCardNumber;
    
    cout << "[Register Patient]" << endl;
    cout << "Enter Name: ";
    cin  >> inputName;
    cout << "Enter Health Card Number: ";
    cin  >> inputHealthCardNumber;
    cout << ".. [Registering]" << endl;
    
    Patient * p = new Patient(inputName, inputHealthCardNumber);
    PatientQueue.push_back(p);
};

void OTPRegister::examinePatient(){
    int inputDilation;

    cout << "[Examine Patient]" << endl;

    Patient * p = PatientQueue[0];
    PatientQueue.pop_front();

    cout << "Name: " << (*p).getName() << endl;
    cout << "Health Card Number: " << (*p).getHealthCardNumber() << endl;
    cout << "Enter Cervix Dilation: ";
    cin  >> inputDilation;

    (*p).setCervixDilation(inputDilation);

    if((*p).getCondition() == "ADMIT"){
        cout << ".. [Admitting]" << endl;
        cout << (*p).getName() << "   " << (*p).getHealthCardNumber() << "   " << (*p).getCervixDilation() << "   " << (*p).getCondition() << endl; 
    }
    else if((*p).getCondition() == "LABOUR"){
        cout << ".. [Going back to queue]" << endl;
        PatientQueue.push_back(p);
    }
};

void OTPRegister::displayPatients(){
    cout << "[Display Patients]" << endl;
    int size = PatientQueue.size();
    for (int i = 0; i < size; i++){
        cout << PatientQueue[i]->getName(); 
        cout << " " << PatientQueue[i]->getHealthCardNumber(); 
        cout << " " << PatientQueue[i]->getCervixDilation();

        if (PatientQueue[i]->getCondition() == "UNKNOWN"){
            cout << " " << "UNKNOWN" << endl;
        }
        else if (PatientQueue[i]->getCondition() == "LABOUR"){
            cout << " " << "LABOUR" << endl;
        }
        else if (PatientQueue[i]->getCondition() == "ADMIT"){
            cout << " " << "ADMIT" << endl;
        }
    };
          
}
