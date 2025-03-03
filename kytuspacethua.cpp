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
    
    // Ð?c t?ng dòng cho d?n khi h?t input
    while (getline(cin, chuoi)) {
        // Xóa kho?ng tr?ng th?a ? d?u và cu?i chu?i
        size_t start = chuoi.find_first_not_of(" ");
        size_t end = chuoi.find_last_not_of(" ");
        
        // C?t chu?i không có kho?ng tr?ng th?a ? d?u và cu?i
        if (start != string::npos && end != string::npos) {
            chuoi = chuoi.substr(start, end - start + 1);
        }
        
        // Duy?t qua chu?i và thay th? các kho?ng tr?ng liên ti?p b?ng m?t d?u cách
        stringstream ss(chuoi);
        string word;
        bool firstWord = true;
        
        while (ss >> word) {
            if (!firstWord) {
                cout << " ";  // In d?u cách tru?c các t? ti?p theo
            }
            cout << word;
            firstWord = false;
        }
        
        cout << endl;  // In k?t qu? cho m?i dòng
    }

    return 0;
}
