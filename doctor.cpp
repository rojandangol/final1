#include "doctor.h"
#include "emeroom.h"
#include "names.h"
#include "patient.h"

#include <iostream>
using namespace std;

doctor::doctor()
{
    cout << "default" << endl;
}

doctor::doctor(int num)
{
    this->num = num;
}

void doctor::trackpatients()
{

    for (int i = 0; i < num; i++)
    {
    }
}

bool doctor::isBusy()
{
    if (...)
    {
        return false;
    }
    else { 
        return true 
        }
}

patient doctor::getPatient(){
    return person;
}
