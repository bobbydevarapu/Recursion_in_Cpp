#include<bits/stdc++.h>
using namespace std;
void Fun(int i)
{
  if(i<1) return ;
  cout<<i<<" ";
  Fun(i-1);
}
int main(){
  int n;
  cout<<"enter n : ";
  cin>>n;
  Fun(n);
  return 0;
}