#include <iostream>
#include <string>
using namespace std;

int main() {
    string chuoi;
    while (getline(cin, chuoi)) {
        int dem = 1;  

        for (int i = 0; i < chuoi.length(); i++) {
            if (isupper(chuoi[i])) {
                dem++;  
            }
        }
        cout << dem << endl;
    }
    
    return 0;
}

