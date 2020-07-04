//This is a range update trick 
// for brute force approach it takes O(n)
// time complexity is O(1) per update ....But for showing final array it takes O(n)..........
// only use when there is too many update ..... 
//e.g if there is 500 update and 10 display then it is optimized way......... 

#include <iostream>

using namespace std;

int a[1000], b[1000], s[1000];

void update(int x, int y, int val){    
  b[x] += val;
  b[y+1] -= val;
}
void final_array(int a[], int size){
  for(int i = 1; i<=size; ++i){
    s[i] = s[i-1]+b[i];
    a[i] += s[i];
    cout<<a[i]<<"|";
  }
}

int main(){
  int size;
  cin>>size; 
  int a[size];
  for(int i = 1; i<=size; ++i){
    cin>>a[i];
  }
  for(int i = 1; i<=size; ++i){
    cout<<a[i]<<"|";
  }
  cout<<endl;
  update(1,3,10);
  final_array(a,size);
}