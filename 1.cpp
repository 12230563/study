#include<iostream>
#include<iomanip>
using namespace std;



int main(){
    int startDay;
    int daysInMonth;
    int col = 1;

    do{
        cout << "Enter the number of days in the month (28,29,30, or 31)";
        cin >> daysInMonth;
    }while(daysInMonth < 28 || daysInMonth > 31);

    do{
        cout << "Enter start day (0 to 6)";
        cin >> startDay;
    }while(startDay < 0 || startDay > 6);

    cout << endl;
    cout << "Sun Mon The Wed Thr Fri Sat" << endl;
    cout << "---------------------------" << endl;

    for(int space = 0; space < startDay; space++) {
        cout << " ";
        col++;
    }
    for (int day = 1; day <= daysInMonth; day++) {
            cout << setw(3) << day << " ";
            col++;

            if (col > 7) {
                cout << endl;
                col = 1;
            }
        }
    }

