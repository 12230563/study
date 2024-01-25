#include <iostream>
using namespace std;

int main() {
    int a, b, i, n;
    cin >> a >> b;
    i = a;
    n = 0;

    for(i = a; i <= b; i++){
        if(1920 % i == 0 && 2880 % i == 0){
            n += 1;
        }
    }
    if(n == 0){
        cout << 0;
    }
    else{
        cout << 1;
    }
}