#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 5;

    // Short-circuit with &&
    cout << "Testing short-circuit with &&:" << endl;
    if (x != 0 && (y / x) > 1)
    {
        cout << "This will not be printed." << endl;
    }
    else
    {
        cout << "Short-circuited &&: x is zero, division by zero avoided." << endl;
    }
    cout << endl;

    // Short-circuit with ||
    cout << "Testing short-circuit with ||:" << endl;
    if (x == 0 || (y / x) > 1)
    {
        cout << "Short-circuited ||: x is zero, division by zero avoided." << endl;
    }
    else
    {
        cout << "This will not be printed." << endl;
    }
    cout << endl;

    int a = 1; // Changed from 0 to 1 to avoid division by zero
    int b = 5; // b is kept as 5

    // Short-circuit with &&
    cout << "Testing short-circuit with && (with a = 1 and b = 5):" << endl;
    if (a != 0 && (b / a) > 1)
    {
        cout << "Short-circuited &&: a is non-zero and (b / a) is greater than 1." << endl;
    }
    else
    {
        cout << "This will not be printed." << endl;
    }
    cout << endl;

    // Short-circuit with ||
    cout << "Testing short-circuit with || (with a = 1 and b = 5):" << endl;
    if (a == 1 || (b / a) > 1)
    {
        cout << "Short-circuited ||: a is 1 or (b / a) is greater than 1." << endl;
    }
    else
    {
        cout << "This will not be printed." << endl;
    }
    cout << endl;

    return 0;
}
