#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int fcnt[26] = {0};
    int scnt[26] = {0};
    char strng1[200];
    char strng2[200];
    
    cout << "Enter first line: ";
    cin.getline(strng1, 200);
    
    cout << "Enter second line: ";
    cin.getline(strng2, 200);
    
    if(strlen(strng1) != strlen(strng2)){
        cout << "Not Anagram\n";
        return 0;
    }
    
    for (int i = 0; i < strlen(strng1); i++) {
        int k1 = strng1[i] - 'a';
        int k2 = strng2[i] - 'a';
        fcnt[k1]++;
        scnt[k2]++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (fcnt[i] != scnt[i]) {
            cout << "Not Anagram\n";
            return 0;
        }
    }
    
    cout << "Anagram\n";
    
}
