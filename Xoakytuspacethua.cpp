#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string chuoi;
    while(getline(cin,chuoi)){
    	stringstream ss(chuoi);
    	string word;
    	bool firstword = true;
    	while (ss >> word){
    		if(!firstword){
    			cout<<" ";
			}
			cout << word;
			firstword= false;
		}
		cout << endl;
	}
    

    return 0;
}

