#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double total = 0;
    cin>>n;
    int height[n+1],width[n];
    for(int i = 0; i<(n+1);i++){
        cin>>height[i];
    }
    for(int i = 0; i<(n);i++){
        cin>>width[i];
    }
    for(int i = 0; i<(n);i++){
        total += width[i] * double(height[i] + height[i+1])/2;
    }
    cout<<setprecision(1);
    cout<<fixed;
    cout<<total;
}