#include<bits/stdc++.h>
using namespace std;
int Sum(int n){
  if(n==0) return 0;
  return n+Sum(n-1);
}
int main(){
  int n;
  cout<<"Enter n :";
  cin>>n;
  cout<<"Sum of first "<<n<<" natural numbers is: "<<Sum(n);
  return 0;
}