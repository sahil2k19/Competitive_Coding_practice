// maximum sum sub array by greedy algorithm


#include<iostream>

using namespace std;

void maximum_sum(int a[], int n){
  int ans = a[1], sum=0;
  for(int i = 0 ; i<n; ++i){
    sum += a[i];
    if (sum>ans)
      ans= sum;
    if(sum<0)           //if sum is negative then sum=0;
      sum=0;   
    }
    cout<<ans;
  } 


int main(){
  int size;
  cin>>size;
  int a[size];
  for(int i= 0 ; i<size; ++i){
    cin>>a[i];
  }
  for(int i= 0 ; i<size; ++i){
    cout<<a[i];
  }
  cout<<endl;
  maximum_sum(a, size);
}