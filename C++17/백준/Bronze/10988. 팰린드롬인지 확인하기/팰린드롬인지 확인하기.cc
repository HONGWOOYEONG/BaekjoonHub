#include <iostream>
using namespace std;

int main() {
	string word;
	cin >> word;

	int n = word.size();
	int result = 1;
	for (int i = 0; i < n / 2 +1; i++) {
		if (word[i] != word[n - i -1]) {
			result = 0;
			break;
		}
	}

	cout << result;
}