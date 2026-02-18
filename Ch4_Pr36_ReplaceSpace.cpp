#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char strng[200];
    cout << "Enter some string: ";
    cin.getline(strng, 200);

	for (int i = 0; i < strlen(strng); i++) {
		for (int j = i + 1; j < strlen(strng); j++) {
			if (strng[i] == ' ') {
				strng[i] = '-';
			}
		}
	}
	cout << strng;

}