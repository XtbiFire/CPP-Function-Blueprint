/*
◆───────────────────────────────◆
117. Counting Consonants
◆───────────────────────────────◆

💡 Remember

A Consonant is an
Alphabet that is not
a Vowel.

Vowels are

A, E, I, O, U

All other Alphabets are
Consonants.

🌐 Code
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Consonant Count Function
int countConsonants(const string &text)
{
    int count = 0;

    for(char ch : text)
    {
        if(isalpha(ch))
        {
            if(ch != 'A' && ch != 'E' &&
               ch != 'I' && ch != 'O' &&
               ch != 'U' && ch != 'a' &&
               ch != 'e' && ch != 'i' &&
               ch != 'o' && ch != 'u')
            {
                count++;
            }
        }
    }

    return count;
}

// Main Function
int main()
{
    string word = "Programming";

    cout << "Consonants : "
         << countConsonants(word);

    return 0;
}

/*

▶ Execution Output

Consonants : 8

*/