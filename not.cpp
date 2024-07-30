#include <iostream> 
using namespace std;

int main () {

    bool a = true;
    bool b = true;
    bool c = false;

    cout << boolalpha << (! (a && b));
    cout << boolalpha << (! (a || b || c));

    return 0;
}