#include <bits/stdc++.h>
using namespace std;

int main() {
    // 実は、0と1以外の数値もbool型の値のように扱うことができます。
    // その場合、0のときだけfalse、それ以外の数値はすべてtrueになります。
    // bool a = 10;
    // bool b = 0;
    int x;
    cin >> x;

    bool a = true;
    bool b = x < 10; // xが10未満のときtrue そうでないときfalseになる
    bool c = false;

    if (a && b) {
        cout << "hello" << endl;
    }
    if (c) {
        cout << "world" << endl;
    }

}
