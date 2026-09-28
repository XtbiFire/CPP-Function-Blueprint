/*
◆───────────────────────────────◆
116. Counting Vowels
◆───────────────────────────────◆

💡 Remember

Vowels are

A, E, I, O, U

Both Uppercase and
Lowercase Vowels should
be counted.

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Vowel Count Function
int countVowels(const string &text)
{
    int count = 0;

    for(char ch : text)
    {
        if(ch == 'A' || ch == 'E' ||
           ch == 'I' || ch == 'O' ||
           ch == 'U' || ch == 'a' ||
           ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u')
        {
            count++;
        }
    }

    return count;
}

// Main Function
int main()
{
    string word = "Programming";

    cout << "Vowels : "
         << countVowels(word);

    return 0;
}

/*

▶ Execution Output

Vowels : 3

*/