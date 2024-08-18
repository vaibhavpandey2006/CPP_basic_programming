
#include <iostream>
#include "join_p.h"
#include <cmath>

using namespace std;

void compound_interest ()
{

     float p,r,t,amount , ci ;
    cout << " enter the values "<<endl;

    cin>>p>>r>>t;

    amount =  p* pow(1+ r/100,t);
    ci = amount -p;
    cout << " compound interst is: "<< ci << endl;
}

