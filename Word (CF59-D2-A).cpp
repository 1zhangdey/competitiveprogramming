#include <bits/stdc++.h> 
using namespace std;

string username;
int upercase= 0; int lowercase = 0; 

int main(){
    cin>>username;
    for(int i = 0; i<username.length();i++){
        if(username[i] > 92){
            upercase++;
        } else
        {
            lowercase++;
        }
    }
    if(upercase<lowercase){
        for(int i = 0; i<username.length();i++){
             cout<<char(toupper(username[i]));
            }
        }else{
       for(int i = 0; i<username.length();i++){
            
            cout<<char(tolower(username[i]));
        }
    }

}