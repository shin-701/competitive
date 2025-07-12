#include <bits/stdc++.h>
using namespace std;


int main() {
    int a;
    int b;
    cin >> a >> b;

    int c = a * b;
    if (c % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

}