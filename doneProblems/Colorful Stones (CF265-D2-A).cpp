#include <bits/stdc++.h> 
using namespace std;

int main(){
string s; string t;
int sPosition = 0; int tPosition = 0;
cin>>s>>t;

for(int i = 0; i<t.size() && i < t.size();i++){
  if(t[tPosition] == s[sPosition]){
    tPosition++;
    sPosition++;
  }else{
    tPosition++;
  }
}
cout<< (sPosition+=1);
}