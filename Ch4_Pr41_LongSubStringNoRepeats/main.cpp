#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]){
    
    char strng[200];
    
    cout << "Enter line: ";
    cin.getline(strng, 200);
    
    int max = 0;
    int maxI = 0;
    long len = strlen(strng);
    
    for (int i = 0; i < len; i++) {
        int cnt = 0;
        
        for (int j = i; j < len; j++) {
            bool repeat = false;
            
            for (int k = i; k < j; k++) {
                if (strng[k] == strng[j]) {
                    repeat = true;
                    break;
                }
            }
            if (repeat) {
                break;
            }
            cnt++;
        }
        if (cnt > max) {
            max = cnt;
            maxI = i;
        }
    }
        
    for (int p = maxI; p < maxI + max; p++) {
        cout << strng[p];
    }
    
    cout << "\nLength: " <<max << endl;
    
    return 0;
}

