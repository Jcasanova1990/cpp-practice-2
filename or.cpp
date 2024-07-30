#include <iostream>
using namespace std;

int main () {

    bool a = true;
    bool b = true;
    bool c = false;
    bool d = false;

    cout << boolalpha << (c || d) << endl;
    cout << boolalpha << (a || c || d) << endl;
    cout << boolalpha << (a || b || c || d) << endl;

    return 0;

}