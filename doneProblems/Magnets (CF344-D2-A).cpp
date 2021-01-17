#include <bits/stdc++.h> 
using namespace std;
 
int number;  
 
int main(){
    int count = 0;
    cin>>number;
    int arr[number];
    for(int i = 0; i<number;i++){
        cin>>arr[i];
    }

    for(int i = 0; i<number;i++){
        if(arr[i] != arr[i+1]){
            count++;
        }
    }
    cout<<count;
}