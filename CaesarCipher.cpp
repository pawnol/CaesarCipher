/*
Caesar Cipher
Pawelski
4/27/2021
This program asks the user for a word and scrambles
the word using a Caesar Cipher.
*/
#include <iostream>
using namespace std;

/*
Returns the word converted to uppercase.
*/
string toupper(string word)
{
    string newWord;
    for (int i = 0; i < word.length(); i++)
    {
        newWord += toupper(word[i]);
    }
    return newWord;
}

/*
Performs a Caesar Cipher, which replaces each letter within 
"word" with the letter "shift" amount away. In this example,
I utilize the fact that each letter is really a number (this
is a universal standard called ASCii) in order to perform
the shift. 
*/
string caesarCipher(string word, int shift)
{
    string shiftedWord;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] >= 'A' && word[i] <= ('Z' - shift))
        {
            shiftedWord += word[i] + shift;
        }
        else
        {
            shiftedWord += 'A' + (word[i] - 'Z' + shift - 1);
        }
    }
    return shiftedWord;
}

int main()
{
    int shift;
    string word;
    cout << "Please enter a word to scramble >> ";
    cin >> word;
    cout << "Please enter the shift amount >> ";
    cin >> shift;
    word = toupper(word);
    cout << "The word scrambled is " << caesarCipher(word, shift) << ".\n";
    return 0;
}
