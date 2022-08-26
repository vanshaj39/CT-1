// Name: Vanshaj Sharma
// roll no: 2010991763
// set-03
// Question 1

#include<bits/stdc++.h>
using namespace std;

// function for input of array

void input(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

// function for printing the array

void output(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
//     variable for array length
    int n;
    cin>>n;
    
    int arr[n];
    
    input(arr,n);
    
    sort(arr,arr+n);
    
//     logic for rearranging the array as per questions requirement
    
    for(int i = 0; i<n-1; i+=2){
        swap(arr[i+1],arr[i+2]);
    }
    
    output(arr,n);
    
    return 0;
    
}
