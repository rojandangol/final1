#include "emeroom.h"
#include "patient.h"
#include <fstream>
#include <iostream>
#include "string"
using namespace std;

patient::patient()
{
}

patient::patient(string name, int id_num, int severity_lvl)
{

    this->name = name;
    this->id_num = id_num;
    this->severity_lvl = severity_lvl;
}

string patient::getName()
{
   return name;
}

int patient::getIdNum()
{
    return id_num;
}

int patient::getSeverity()
{
    return severity_lvl;
}

