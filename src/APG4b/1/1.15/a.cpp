#include <bits/stdc++.h>
using namespace std;

// プロトタイプ宣言
// プロトタイプ宣言をすれば関数を定義する前に呼び出すことができます。
// プロトタイプ宣言とは、「関数の名前」と「引数と返り値の型」だけを先に宣言することです。
// void hello();


// 関数の定義はmain関数より前で行います。
int input() {
    int x;
    cin >> x;
    return x;
}

int main() {
    int num = input();
    cout << num << endl;
}