
#include <iostream>
#include "join_p.h"

using namespace std;

void celsius_fahrenheit ()
{
    float cel_temp;                                         //how we can calculate both
    float feren_temp;
    float converter ;

    cout << "enter the temperature  in fahrenheit" << endl;
    cin>>feren_temp;


    converter = (feren_temp -32) * 5/9;

    cout<< " temperature in degree celsius  is :" << converter<< endl;




}

