#include "OTPRegister.h"

int main() {
    OTPRegister* newPatientRegister = new OTPRegister();
    int option;
    
    while(1) {
        cout << "There are currently " << (*newPatientRegister).sizeOfQueue() << " patient(s) in the list" << endl;
        cout << "Please choose an option:" << endl;
        cout << "1. Register Patient" << endl;
        cout << "2. Examine Patient" << endl;
        cout << "3. Display Patients" << endl;
        cout << "4. Quit" << endl;
        cin >> option;
        
        switch(option) {
            case 1:
                (*newPatientRegister).registerPatient();
                cout << "=========================" << endl;
                break;
            case 2:
                (*newPatientRegister).examinePatient();
                cout << "=========================" << endl;
                break;
            case 3:
                (*newPatientRegister).displayPatients();
                cout << "=========================" << endl;
                break;
            case 4:
                cout << ".. [Quitting]" << endl;
                return 0; 
             default:
                break;
        };
    };
};

