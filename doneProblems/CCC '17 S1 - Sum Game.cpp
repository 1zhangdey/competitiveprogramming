#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,banks1=0,banks2 =0,days = 0;
    cin>>n;
    int s1[n],s2[n];
    vector<int> arr;

    for(int i =0;i<n;i++){
        cin>>s1[i];
    }
    for(int i =0;i<n;i++){
        cin>>s2[i];
    }
    for(int i =0;i<n;i++){
        days++;
        banks1+=s1[i];
        banks2+=s2[i];
        if(banks1 == banks2){
            arr.push_back(days);
        }
    }
    arr.push_back(0);
    sort(arr.begin(), arr.end());
    cout<<arr[arr.size()-1];
}