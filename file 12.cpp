#include <iostream>
#include <string>
using namespace std;

int countVowels(string str) {
    int vowelCount = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowelCount++;
        }
    }
    return vowelCount;
}

int countConsonants(string str) {
    int consonantCount = 0;
    for (char c : str) {
        if (isalpha(c) && (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
                           c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U')) {
            consonantCount++;
        }
    }
    return consonantCount;
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    int vowelCount = countVowels(inputString);
    int consonantCount = countConsonants(inputString);

    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << consonantCount << endl;

    return 0;
}
