#include<iostream>
#include<string>
using namespace std;
int main(){
	string st;
	getline(cin,st);
	int sum = 0;
	int num=0;
	for(int i=0;i<st.length();i++){
		char c= st[i];
		if(c>='0' && c<= '9'){
			num = num * 10+ (c-'0');
			
		}
		else{
			sum +=num;
			num=0;
		}
	}
	sum += num;
	cout<<sum <<endl;
	return 0;
}
