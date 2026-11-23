#include <iostream>
using namespace std;

int main() {
    int alphas[26] = {};
    string word;
    cin >> word;

    for (int i = 0; i < word.length(); i++) {
        char ch = word[i];
        ch = toupper(ch);
        alphas[ch - 'A']++;
    }

    int maxCount = 0;
    char result = '?';

    for (int i = 0; i < 26; i++) {
        if (alphas[i] > maxCount) {
            maxCount = alphas[i];
            result = 'A' + i;
        }
        else if (alphas[i] == maxCount) {
            result = '?';
        }
    }

    cout << result;
}