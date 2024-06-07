#include <iostream>
using namespace std;
int main() {
    int a, now;
    int i = 1;
    cin >> now;
    while (now != 0) {
        a = now;
        cin >> now;
        if (now == 0)
        {
            break;
        }
        else if (now == a) {
            i++;
        }
        else if (now < a) {
            i = 1;
        }
        else if (now > a) {
            a = now;
            i = 1;
        }
    }
    if (i >= 2) {
        cout << i;
    }
    else { return -1; }
}