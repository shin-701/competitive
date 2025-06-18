#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {1,5,3};

    for(std::size_t i = 0; i < vec.size(); i++) {
        cout << vec.at(i)  << endl;
    }

    cout << "----------------------------------"  << endl;

    reverse(vec.begin(), vec.end());

    for(std::size_t i = 0; i < vec.size(); i++) {
        cout << vec.at(i)  << endl;
    }
}