
#include <iostream>
#include "join_p.h"

using namespace std;

void simple_interest ()
{
    float si, p , r ,t;

    cout << "enter the principle amount ,rate , time to calculate si "<< endl;
    cin>>p>>r>>t;

    si = p*r*t/100;
    cout << " simple interest is : " <<  si <<endl;




}

