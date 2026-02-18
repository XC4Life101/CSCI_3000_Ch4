#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char strng[200];
	cout << "Enter some string: ";
	cin.getline(strng, 200);

	for (int i = 0; i < strlen(strng); i++) {
		int cnt = 0;
		for (int j = i + 1; j < strlen(strng); j++) {
			if (strng[i] == strng[j]) {
				cnt++;
				for (int k = j; k < strlen(strng); k++) {
					strng[k] = strng[k + 1];
				}
				j--;
			}
		}
		if (cnt == 0) {
			cout << strng[i];
			return 0;
		}
	}

}


