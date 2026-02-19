#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]){
    
    char strng[200];
    
    cout << "Enter line: ";
    cin.getline(strng, 200);
    
    int cnt = 0;
    int max = 0;
    int maxI = 0;
    
    for (int i = 0; i <= strlen(strng); i++) {
        if(strng[i] == ' ' || strng[i] == '\0'){
            if(cnt > max){
                max = cnt;
                maxI = (i - max);
            }
            cnt = 0;
        }
        else{
            cnt++;
        }
    }
    
    for (int j = maxI; strng[j] != ' ' && j < strlen(strng); j++) {
        cout << strng[j] << endl;
    }
}
