#include <iostream>
using namespace std;

int main () {
    bool a = true;
    bool b = true;
    bool c = false;

    cout << boolalpha << (a && b) << endl;
    cout << boolalpha << (a && b && c) << endl;

    return 0;
}