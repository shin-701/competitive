// 名前空間
// 関数や構造体、グローバル変数の名前の衝突を避けるために、名前空間を定義することができます。

// 次のプログラムでは、名前空間Aと名前空間Bを定義し、それぞれの内部でfという関数を定義しています。

// #include <bits/stdc++.h>
// using namespace std;
 
// // 名前空間A
// namespace A {
//   void f() {
//     cout << "namespace A" << endl;
//   }
// }

// // 名前空間B
// namespace B {
//   void f() {
//     cout << "namespace B" << endl;
//   }
// }
 
// int main() {
//   A::f();  // 名前空間A内の関数fの呼び出し
//   B::f();  // 名前空間B内の関数fの呼び出し
// }

// 実行結果
// namespace A
// namespace B
// 名前空間を分けることで、このように同名の関数を定義することが出来るようになります。

// 関数を呼び出す時はA::f()のように、関数名の前に名前空間を明示します。