#include <iostream>
#include "Calculadora.h"
using namespace std;

int main(){
    
    Calculator<float> floatCalculator;
    Calculator<int> intCalculator;

    
    cout <<  floatCalculator.add(1.23,3.56) << endl;
    cout << floatCalculator.subtract(8.6,9.8) << endl;
    cout << floatCalculator.divide(8.6,0) << endl;
    cout << floatCalculator.multiply(8.6,9.8) << endl;
    return 0;
}

