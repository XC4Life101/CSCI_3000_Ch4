#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]){
    
    char text[200];
    char pattern[200];
    
    cout << "Enter text: ";
    cin.getline(text, 200);
    
    cout << "Enter pattern: ";
    cin.getline(pattern, 200);
    
    long tlen = strlen(text);
    long plen = strlen(pattern);
    
    for (int i = 0; i <= tlen - plen; i++) {
        int j;
        
        for (j = 0; j < plen; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        
        if (j == plen) {
            cout << i << endl;
            return 0;
        }
        
    }
    
    cout << -1 << endl;
}
