#include <bits/stdc++.h>
using namespace std;

bool PalinDrome(int i, const string& s) {
    if (i >= s.size() / 2) return true;
    if (s[i] != s[s.size() - i - 1]) return false;
    return PalinDrome(i + 1, s);
}
int main() {
    string s;
    cout << "Enter String: ";
    cin >> s;
    if (PalinDrome(0, s)) cout << "String is Palindrome";
    else  cout << "String not Palindrome";
    
    return 0;
}
