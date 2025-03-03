#include<iostream>
using namespace std;
int main(){
	string chuoi;
    char ky_tu;
    getline(cin, chuoi);  
    cin >> ky_tu;         
    int dem = 0;
    for (int i = 0; i < chuoi.length(); i++) {
        if (chuoi[i] == ky_tu) {
            dem++;
        }
    }
    cout << dem << endl;
    return 0;
}
