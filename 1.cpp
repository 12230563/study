#include<iostream>
using namespace std;

int main(){
    int num;

    do{
        cout << "Enter a positive integer : ";
        cin >> num;
    }while(num <= 0);

    if(num == 1){
        cout << "1 is not a Com. nor a prime.";
        return 0;
    }

    for (int i = 2; i < num; i++){
        if (num % i == 0){
            cout << num << "is Com. Number" << endl;
            cout << "Least divisor is " << i <<endl;
            return 0;
        }
    }
    cout << num << "is prime." << endl;
}