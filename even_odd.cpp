
#include <iostream>
#include "join_p.h"
#include <cmath>

using namespace std;

void odd_even ()
{
    int n ;
    cout << " Enter the number :"<<endl;
    cin>> n;

    if (n % 2 == 0){
        cout <<n << " Is an even number "<<endl;
    }
    else
        cout <<n << "Is an odd number "<<  endl;

}


