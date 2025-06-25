#include <bits/stdc++.h>
using namespace std;

int main () {
    // int i = 0;

    // while (i <= 5) {
    //     cout << "現在の数値は" << i << "です" << endl;
    //     i++;
    // }

    // 入力を受け取る変数の初期値は設定不要
    int N;
    cin >> N;

    int i = 0;
    int x;
    int sum = 0;


    while (i < N)
    {
        cin >> x;
        sum += x;
        i++;
    }
    
    cout << "合計値は" << sum << "です。" << endl;
    
}