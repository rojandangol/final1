#include <iostream>
#include "patient.h"
#include "names.h"

#include <vector>
#include <stdlib.h> /* srand, rand */
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));

    patient p1;
    names n1;

    n1.oopenfile();
    n1.printall();
    
    return 0;
}