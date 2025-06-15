// 全角スペース
// 全角スペースを紛れ込ませてしまうケースです。

// 次のプログラムでは、coutの前に全角スペースが紛れ込んでいます。

// Copy
// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
// //↓に全角スペース
// 　cout << "Hello, world!" << endl;
// }
// コンパイルエラー
// ./Main.cpp:6:1: error: stray ‘\343’ in program
//  　cout << "Hello, world!" << endl;
//  ^
// ./Main.cpp:6:1: error: stray ‘\200’ in program
// ./Main.cpp:6:1: error: stray ‘\200’ in program

#include <bits/stdc++.h>
using namespace std;

int main() {
//↓に全角スペース
    cout << "Hello, world!" << endl;
}
