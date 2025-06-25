#include <bits/stdc++.h>
using namespace std;


int main() {
    string str = "hello";

    // cout << str.at(1) << endl;
    // cout << str.at(2) << endl;

    // 符号なし/ありで合わせないといけないみたい...。後日復習必要。
    for(std::size_t i = 0; i < str.size(); i++) {
        cout << str.at(i) << endl;
    }
}