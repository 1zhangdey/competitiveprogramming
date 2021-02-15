#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double left,right,total;
    cin>>n;
    double arr[n];
    double size[n-2];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i = 1;i<(n-1);i++){
        left =  (abs(arr[i-1]-double(arr[i]))/2.0);
        right = double (abs(arr[i]-arr[i+1])/2.0);
        total = double(left +right);
        size[i-1] = total;
    }
    sort(size,size+(n-2));
    cout<<setprecision(1);
    cout<<fixed;
    cout<<double(size[0]);
}