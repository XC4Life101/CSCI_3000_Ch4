#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char strng[30];
    char rstrng[30];

    cout << "Enter name: ";
    cin.getline(strng, 30);
    int j = 0;
    
    for (int i = strlen(strng) - 1; i >= 0; i--) {

        rstrng[j] = strng[i];
        j++;
    }
    rstrng[j] = '\0';

    cout << "Your name in reverse: " << rstrng << endl;
}
