
#include <iostream>
#include "join_p.h"
#include <cmath>

using namespace std;

void rectangle_area ()
{
    float len, bre;
    double area , perimeter;
    cout << "Enter the dimension of rectengle :" << endl;
    cin>> len>>bre;

    area = len * bre ;
    cout << " Area is : " << area<< endl;
    perimeter = 2* (len+bre);
    cout << " Perimeter is : " << perimeter << endl;

}


