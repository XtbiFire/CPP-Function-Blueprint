/*
◆──────────────────────────◆
05. Multiple Parameters
◆──────────────────────────◆

💡 Remember
One function can have
multiple parameters.

*/

#include <iostream>
using namespace std;

// Function Definition
void show(int a, int b)
{
    cout << a;
    //cout<<endl;
    cout << b;
    //cout<<endl;
}

// Main Function
int main()
{
    // Function Call
    show(5, 7);

    return 0;
}

/*
Output:
57
*/
