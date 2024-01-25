#include<iostream>
using namespace std;

int main(){

    int rows, cols;

    cout << "Enter number of rows : ";
    cin >> rows;
    cout << "Enter number of columns : ";
    cin >> cols;

    for(int count1 = 1; count1 <= rows; count1++){
        for(int count2 = 1; count2 <= cols; count2++){
            cout << "*";
        }
        cout << endl;
    }
}