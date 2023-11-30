#include "names.h"
#include "patient.h"
#include <fstream>
#include <iostream>
#include "string"
using namespace std;

names::names()
{
    cout << "default" << endl;
    id_counter = 0;
}
int names::randi()
{
    int x = rand() % 20 + 1;
    return x;
}

int names::setnum()
{
   return id_counter++;
}

void names::oopenfile()
{
    fstream file("names.txt", ios::in | ios::out | ios::binary);

    if (file.is_open())
    {
        // if the file is open correctly
        cout << "Opened correctly!!" << endl;

        string line;
        // pulls all the lines, one at a time
        while (getline(file, line))
        {

            pt.push_back((new patient(line, setnum(), randi())));
        }

        // close the file
        file.close();
    }
}

void names::printall()
{

    cout << "Printing" << endl;
    cout << "size" << pt.size() << endl;
    for (int i = 0; i < 10; i++)
    {
        // cout << i << "| " << pt.at(i) << endl;
        cout << i << " " << pt[i]->getName() << "| ID: " << pt[i]->getIdNum() << "| Severity: " << pt[i]->getSeverity() << endl;
    }
}