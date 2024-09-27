#include <iostream>
#include "MyMath.h";
using namespace std;
using namespace MySpace;


#define summa(a,b) a+b;



int main()
{
    cout << MySpace::dab(15) << endl;
    cout << MySpace::dab(-2) << endl;
    cout << MySpace::dab(241) << endl;
    cout << summa(2, 4);
    cin.get();

}

