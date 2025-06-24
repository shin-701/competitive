#include <bits/stdc++.h>
using namespace std;

int main() {
    tuple<int, string, bool> data(1, "hello", true);
    // get<2>(data) = false;
    cout << get<1>(data) << endl;
    cout << get<2>(data) << endl;

    data = make_tuple(2, "world", true);

    // tie(変数1, 変数2, 変数3, (...)) = tuple型の値;でtupleを分解することができる
    int a;
    string b;
    bool c;

    tie(a, b, c) = data;
    cout << a << " " << b << " " << c << endl;

}