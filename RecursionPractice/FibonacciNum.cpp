#include <iostream>
using namespace std;
int Fib(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci number at position " << n << " is: " << Fib(n) << endl;
    return 0;
}

/*#include<bits/stdc++.h>
using namespace std;
int Fib(int n){
  if(n<=1) return n;
  return Fib(n-1)+Fib(n-2);
}
int main(){
  int n;
  cout<<"enter n :" ;
  cin>>n;
  cout<<"Fibonacci number at position "<<n<<" is :"<<Fib(n);
  return 0;
}*/