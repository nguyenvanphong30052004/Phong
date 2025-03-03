#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;


string encodeChar(char c) {
    switch (c) {
        case ' ': return "%20";
        case '!': return "%21";
        case '$': return "%24";
        case '%': return "%25";
        case '(': return "%28";
        case ')': return "%29";
        case '*': return "%2a";
        default: return string(1, c); 
    }
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 1; i <= n; i++) {
        string s;
        getline(cin, s);

        string encoded;
        for (char c : s) {
            encoded += encodeChar(c); 
        }

    
        cout << "Case #" << i << ": " << encoded << endl;
    }

    return 0;
}
