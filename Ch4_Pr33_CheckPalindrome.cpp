#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char pal[100];

    cout << "Enter word: ";
    cin >> pal;

    int j = 0;

    for (int i = strlen(pal) - 1; i > 0; i--) {
        if (pal[i] != pal[j]) {
            cout << "Result: Not a Palindrome\n";
            return 0;
        }
        j++;
    }
    cout << "Result: Palindrome\n";

}