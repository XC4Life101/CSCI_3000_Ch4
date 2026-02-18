#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char word[200];
	cout << "Enter a word: ";

	cin.getline(word, 200);

	for (int i = 0; i < strlen(word); i++) {
		for (int j = i + 1; j < strlen(word); j++) {
			if (word[i] == word[j]) {
				for (int k = j; k < strlen(word); k++) {
					word[k] = word[k + 1];
				}
				j--;
			}
		}
		cout << word[i];
	}

}
