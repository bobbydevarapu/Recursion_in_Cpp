#include<bits/stdc++.h>
using namespace std;
void RevArr(int i,int arr[],int n){
  if(i>=(n/2)) return ;
  swap(arr[i],arr[n-i-1]);
  RevArr(i+1,arr,n);
}
int main(){
  int n,i;
  cout<<"enter n :";
  cin>>n;
  int arr[n];
  cout<<"enter elements :";
  for(int i=0;i<n;i++) cin>>arr[i];
  RevArr(0,arr,n);
  cout<<"reversed array :";
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}