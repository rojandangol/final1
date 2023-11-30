#ifndef NAMES_H
#define NAMES_H

#include "patient.h"

#include <ostream>
#include <iostream>

#include <string>
#include <stdlib.h> /* srand, rand */
#include <time.h>
#include <vector>
#include <queue>
using namespace std;

class names
{
protected:
    vector<patient *> pt;
    int id_counter;
    
    queue<patient *> lol;

public:
    names();
    int randi();
    void oopenfile();
    void printall();
    int setnum();
    
};
#endif
