#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int user, ans, cnt = 0;
    srand(time(0));
    ans = rand() % 100 + 1;

    while (true) {
        cin >> user;
        cnt++;
        if (user == ans) {
            cout << "find" << '\n' << cnt;
            break;
        }
        else if (user < ans) {
            cout << "lower\n";
        }
        else {
            cout << "bigger\n";
        }
    }
}
