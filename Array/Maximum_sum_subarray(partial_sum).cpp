//finding maximum sum subarray by partial sums

#include<iostream>

using namespace std;

int s[1000];

void max_sum_subarray(int a[], int n){
  int s[n], ans = a[1], min = 0;
  s[1] = a[1];

  for(int i=2; i<=n; ++i ){
    s[i] = s[i-1] + a[i];       //filling array s by partial sums
  }

  for(int i=1; i<=n; ++i ){
    if(s[i] - min > ans){       // inserting the Answer(by subtracting array 'S' by minimum value in that array)
      ans = s[i] - min;
    }
    if(s[i]<min){
      min = s[i];               //inserting the minimum value
    }
  }

  cout<<ans<<endl;              // Answer
}

int main(){
  int size; 
  cin>>size;
  int a[size];
  for(int i=1; i<=size; ++i){
    cin>>a[i];
  }
  for(int i=1; i<=size; ++i){
    cout<<a[i];
  }
  cout<<endl;
  max_sum_subarray(a,size);
}