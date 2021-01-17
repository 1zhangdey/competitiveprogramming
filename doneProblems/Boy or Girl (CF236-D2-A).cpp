#include <bits/stdc++.h> 
using namespace std;
 
string username;
 
 
int main(){
  cin>>username;
  sort(username.begin(),username.end());
  username.erase(unique(username.begin(), username.end()),username.end());
 
  if(username.size() % 2 == 0){
    cout<<"CHAT WITH HER!";
  }else{
    cout<<"IGNORE HIM!";
  }

}