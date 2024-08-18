
#include <iostream>
#include "join_p.h"
#include <cmath>

using namespace std;

void largest_inthree ()
{
    int a ;
    int b ;
    int c;

    cout << " Enter the  three numbers "<< endl;
    cin>> a>>b>>c;
    if ( a>b && a>c){
        cout << " a is greatest number " << a;
    }
    else{
        if ( b>a && b>c){
            cout << " b is greatest number "<< b << endl;
        }
        else
            cout << " c is greatest number "<< c << endl;

    }

}

