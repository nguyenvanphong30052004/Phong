#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//int main() {
//    string chuoi;
//    while(getline(cin,chuoi)){
//    	stringstream ss(chuoi);
//    	string word;
//    	bool firstword = true;
//    	while (ss >> word){
//    		if(!firstword){
//    			cout<<" ";
//			}
//			cout << word;
//			firstword= false;
//		}
//		cout << endl;
//	}
//    
//
//    return 0;
//}
int main() {
    string chuoi;
    
    // �?c t?ng d�ng cho d?n khi h?t input
    while (getline(cin, chuoi)) {
        // X�a kho?ng tr?ng th?a ? d?u v� cu?i chu?i
        size_t start = chuoi.find_first_not_of(" ");
        size_t end = chuoi.find_last_not_of(" ");
        
        // C?t chu?i kh�ng c� kho?ng tr?ng th?a ? d?u v� cu?i
        if (start != string::npos && end != string::npos) {
            chuoi = chuoi.substr(start, end - start + 1);
        }
        
        // Duy?t qua chu?i v� thay th? c�c kho?ng tr?ng li�n ti?p b?ng m?t d?u c�ch
        stringstream ss(chuoi);
        string word;
        bool firstWord = true;
        
        while (ss >> word) {
            if (!firstWord) {
                cout << " ";  // In d?u c�ch tru?c c�c t? ti?p theo
            }
            cout << word;
            firstWord = false;
        }
        
        cout << endl;  // In k?t qu? cho m?i d�ng
    }

    return 0;
}
