#include<bits/stdc++.h>
using namespace std;
void Fun(int i,int n){
  if(i<1) return;
    cout<<i<<" ";
    Fun(i-1,n);
  }
int main(){
  int n;
  cout<<"enter n : ";
  cin>>n;
  Fun(n,n);
  return 0;
}