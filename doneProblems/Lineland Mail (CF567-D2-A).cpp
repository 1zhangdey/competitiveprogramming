#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,min,max;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>(arr[i]);
    }
    for(int i = 0;i<n;i++){
        if(i == 0){
            min = abs(arr[i] - arr[i+1]);
            max = abs(arr[i] - arr[n-1]);
        }else if(i == (n-1)){
            min = abs(arr[i] - arr[i-1]);
            max = abs(arr[i] - arr[0]);
        }else{
            min = std::min(abs(arr[i] - arr[i+1]),abs(arr[i] - arr[i-1]));
            max = std::max(abs(arr[i] - arr[0]),abs(arr[i] - arr[n-1]));
        }
        cout<<min<<' '<< max<<endl;
    }
}