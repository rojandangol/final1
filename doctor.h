#ifndef DOCTOR_H
#define DOCTOR_H

#include "names.h"
#include "patient.h"
#include <string>
using namespace std;

class doctor
{
private:
    // one method and one attribute unique to it
    /* data */
    string name;
    int num;
    string name;
    bool isBusy;
    patient person;


public:
    doctor();

    /// @brief The constructor for the doctor when
	/// @param name the name of the doctor (string)
	/// @param isBusy if the doctor is busy or not (bool)
    doctor(string n, bool iB) : name(n), isBusy(iB){};

    void trackpatients();

    //Returns the patient that the doctor is working on
    patient getPatient();


    bool checkIsBusy();


};

#endif
