#include<iostream>
using namespace std;

int main(){
    int base, exponent;
    unsigned long int power, temp;
    bool overflow;

    do{
        cout << "Enter a positive integer : ";
        cin >> base;
    }while(base < 0);

    do{
        cout << "Enter a positive integer : ";
        cin >> exponent;
    }while (exponent < 0);

    power = 1;
    temp = power;
    overflow = false;

    for (int i = 1;(i <= exponent) && (!overflow); i++){
        power *= base;
        if (power / base != temp){
            overflow = true;
        }
        temp = power;
    }
    if (overflow){
        cout << "Overflow occurred! Try again with smaller base or exp. ";
    }
    else{
        cout << base << "^" << exponent << " = " << power;
    }
}