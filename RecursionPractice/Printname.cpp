#include<bits/stdc++.h>
using namespace std;
void Fun(int i,int n){
  if(i>n) return;
  cout<<i<<" "<<". Hi, I am cpp "<<endl;
  Fun(i+1,n);
}
int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  Fun(1,n);
  return 0;
}