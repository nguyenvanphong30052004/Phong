#include <iostream>
#include <string>
//#include <sstream>
//#include <cctype>
using namespace std;

int main() {
    string chuoi;
    getline(cin, chuoi); 
    
    for(int i=0; i<chuoi.size();i++)
    if(!isdigit(chuoi[i]) and chuoi[i]!='.') chuoi[i]=' ';
    stringstream ss(chuoi);
    string word;
    while (ss >> word) {  
        
            cout << word << " ";
        
    }

    return 0;
}

