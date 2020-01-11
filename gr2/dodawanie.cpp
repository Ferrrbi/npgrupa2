#include <iostream>
using namespace std;

void dodawanie()
{
    extern int x;
    extern int y;

    cout<<"Suma liczb " << x << " i " << y << " wynosi " << x+y;

}

