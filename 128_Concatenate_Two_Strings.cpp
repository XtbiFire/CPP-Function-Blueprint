/*
◆───────────────────────────────◆
128. Concatenate Two Strings
◆───────────────────────────────◆

💡 Remember

Concatenation means
joining two or more
Strings into one.

The + operator is the
easiest way to join
Strings.

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Concatenate Function
string concatenateStrings(const string &first,
                          const string &second)
{
    return first + " " + second;
}

// Main Function
int main()
{
    string firstName = "John";
    string lastName  = "Doe";

    string fullName =
        concatenateStrings(firstName, lastName);

    cout << "Full Name : "
         << fullName;

    return 0;
}

/*

▶ Execution Output

Full Name : John Doe

*/