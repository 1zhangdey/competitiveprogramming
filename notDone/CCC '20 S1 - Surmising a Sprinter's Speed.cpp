#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; double time = 0.0;
    double bank;
    cin>>n;
    map<int,int> timeSpeed;
    int t[n],x[n];

    for(int i = 0;i<n;i++){
        cin>>t[i]>>x[i];
    }

    for(int i = 0;i<(n-1);i++){
        bank = abs((x[i+1]-x[i]))/(double)abs((t[i+1])-t[i]);
        if(bank>time){
            time = bank;
        }
    }
    cout<<time;
}