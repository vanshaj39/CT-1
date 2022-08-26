// name: Vanshaj Sharma
// roll No: 2010991763
// set-03
// ques 2

#include<iostream>
using namespace std;

int main(){
    
    // taking input of array length
    int n;
    cin>>n;
    
    int arr[n];
    
    // taking array input
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int target;
    cin>>target;
    
    int count = 0;
    
    // didn't used OR just separated the output by using diff. line
    
    
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] + arr[j] == target){
                count++;
                cout<<"Pair found ("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }
            
        }
        
        if(count == 0){
            cout<<"Pair not found"<<endl;
        }
        
        
         
    }
    
  
    
  
    
    return 0;
}
