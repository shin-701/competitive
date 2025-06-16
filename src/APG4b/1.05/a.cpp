#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string text;
    double d;
    double e;

    // cin >> text;
    // cin >> d;
    // cin >> e;
    // 入力が複数ある場合は、スペースか改行で区切られていれば分解して入力してくれます。
    cin >> text >> d >> e;

    cout << text << ", " << d << endl;
    cout << "追加した値は" << e << "です。" << endl;
}
