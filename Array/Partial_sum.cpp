// Programme to find sum in a given range of array 

#include<iostream>

using namespace std;
int s[10000];      //globally access


void sum_in_range(int a[], int size , int x, int y){
    int s[size];
    for(int i =0; i<size; ++i){
        s[i] = s[i-1] + a[i];       //partial sum
    }
    int sum = s[y] - s[x-1];       //print sum in range x y
    cout<< sum;
}


int main(){
    int size,x,y;
    cin>>size;      //size of the array
    int a[size];
    for(int i = 0; i<size; ++i ){   //filling the array
        cin>>a[i];
    }
    for(int i = 0; i<size; ++i ){
        cout<<a[i]<<" ";
    }

    cout<<"select the range"<<endl;
    cin>>x>>y;   
    sum_in_range(a, size, x, y);
}