#include <bits/stdc++.h> 
using namespace std;
 
int number; int first; int second; 
 
int main(){
    int count = 0;
    cin>>number>>first;
    string x = to_string(first);
 
    for(int i = 0; i<number; i++){
        cin>>second;
        string y = to_string(second);
        if(x[1] != y[1]){
            count++;
        }
        x = y;
    }
    count++;
    cout<<count;
}