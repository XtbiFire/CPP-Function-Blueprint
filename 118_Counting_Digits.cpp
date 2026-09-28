/*
◆───────────────────────────────◆
118. Counting Digits
◆───────────────────────────────◆

💡 Remember

A Digit is any Character
from 0 to 9.

Only Numeric Characters
are counted.

🌐 Code
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Digit Count Function
int countDigits(const string &text)
{
    int count = 0;

    for(char ch : text)
    {
        if(isdigit(ch))
        {
            count++;
        }
    }

    return count;
}

// Main Function
int main()
{
    string text = "Code123Game45";

    cout << "Digits : "
         << countDigits(text);

    return 0;
}

/*

▶ Execution Output

Digits : 5

*/