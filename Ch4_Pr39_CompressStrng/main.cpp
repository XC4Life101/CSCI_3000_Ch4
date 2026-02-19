#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]){
    
    char strng[200];
    
    cout << "Enter word: ";
    cin.getline(strng, 200);
    
    int cnt = 1;
    
    for (int i = 0; i < strlen(strng); i++) {
        
        if (strng[i] != strng[i+1]) {
            cout << strng[i] << cnt;
            cnt = 1;
        }
        else{
            cnt++;
        }
        
    }
}
