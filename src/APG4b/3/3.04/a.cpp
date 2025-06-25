// #include <bits/stdc++.h>
// using namespace std;

// struct MyPair {
//   int x;     // 1つ目のデータはint型であり、xという名前でアクセスできる
//   string y;  // 2つ目のデータはstring型であり、yという名前でアクセスできる
// };

// int main() {
//   MyPair p = {12345, "hello"};  // MyPair型の値を宣言
//   cout << "p.x = " << p.x << endl;
//   cout << "p.y = " << p.y << endl;
// }


// ★構造体には、オブジェクトに関連した処理を行う関数を定義することができ、この関数をメンバ関数といいます。

#include <bits/stdc++.h>
using namespace std;

struct MyPair {
  int x;
  string y;
  // メンバ関数
  void print() {
    // 直接x, yにアクセスできる
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
  }
};

int main() {
  MyPair p = { 12345, "Hello" };
  p.print();  // オブジェクト`p`の`print`を呼び出す

  MyPair q = { 67890, "APG4b" };
  q.print();  // オブジェクト`q`の`print`を呼び出す
}

// ★オブジェクトが作られるときに、独自の初期化処理などを行いたい場合にコンストラクタを使うことができます。
// #include <bits/stdc++.h>
// using namespace std;

// struct MyPair {
//   int x;
//   string y;
//   // コンストラクタ
//   MyPair() {
//     cout << "constructor called" << endl;
//   }
// };

// int main() {
//   MyPair p;  // ここでコンストラクタが呼ばれる
//   p.x = 12345;
//   p.y = "hello";
//   cout << "p.x = " << p.x << endl;
//   cout << "p.y = " << p.y << endl;
// }






