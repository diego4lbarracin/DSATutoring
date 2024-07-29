#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <iostream>
#include <stdexcept>
using namespace std;
template <typename T>
class Calculator {
    public:
        T add(T a, T b);
        T subtract(T a, T b);
        T multiply(T a, T b);
        T divide(T a, T b);
};

template <typename T>
T Calculator<T>::add(T a, T b) {
    return a + b;
}

template <typename T>
T Calculator<T>::subtract(T a, T b) {
    return a - b;
}

template <typename T>
T Calculator<T>::multiply(T a, T b) {
    return a * b;
}

template <typename T>
T Calculator<T>::divide(T a, T b) {
    if (b != 0) {
        return a / b;
    } else {
        throw invalid_argument("Division by zero");
    }
}

#endif // CALCULADORA_H