#include <iostream>
#include "swap.h"
using namespace std;

int main(int argc, char** argv) {

    int a = 0, b = 0;
    
    cin >> a;
    cout << "1st number is " << a << endl;
    cin >> b;
    cout << "2nd number is " << b << endl;

    swap(a, b);
    cout << "SWAPPED!" << endl;
    cout << "1st number is " << a << endl;
    cout << "2nd number is " << b << endl;

    return 0;
}
