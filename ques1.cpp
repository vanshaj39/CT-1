// Name: Vanshaj Sharma
// roll no: 2010991763
// set-03
// Question 1

#include<bits/stdc++.h>
using namespace std;

void input(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void output(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int n;
    cin>>n;
    
    int arr[n];
    
    input(arr,n);
    
    sort(arr,arr+n);
    
    for(int i = 0; i<n-1; i+=2){
        swap(arr[i+1],arr[i+2]);
    }
    
    output(arr,n);
    
    return 0;
    
}
