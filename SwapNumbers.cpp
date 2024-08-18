#include<iostream>

using namespace std;

int main() {

    int a ;
    int b;
    int c;

    cout << "enter two no." <<endl;
    cin>>a>>b;

    c =a;
    a=b;
    b =c;
    cout << "swapped no are" <<a<<endl;
    cout << b<<endl;

    return 0;


}

