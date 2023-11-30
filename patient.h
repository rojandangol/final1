#ifndef PATIENT_H
#define PATIENT_H
#include <ostream>
#include <string>
#include <stdlib.h> /* srand, rand */
#include <time.h>
// #include "names.h"
using namespace std;

class patient
{
private:
    string name;
    int id_num;
    int severity_lvl;

public:
    patient();

    patient(string name, int id_num, int severity_lvl);

    string getName();

    int getIdNum();

    int getSeverity();

};
#endif
