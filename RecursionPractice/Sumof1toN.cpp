#include<bits/stdc++.h>
using namespace std;
int Fun(int i,int sum){
  if(i<1) return sum;
  return Fun(i-1,sum+i);
}
int main(){
  int n;
  cout<<"Enter n :";
  cin>>n;
  cout<<"sum of first "<<n<<" natural numbers is: ";
  cout<<Fun(n,0);
  return 0;
}