#include <bits/stdc++.h> 
using namespace std;


int main(){
string input; string x = ""; 
cin>>input;


for(int i = 0; i<input.length();i++){
  if(input[i] != '+'){
    x += input[i];
  }
}
sort(x.begin(),x.end());
cout<<x[0];
for(int i = 1; i<x.length();i++){
cout<<"+"<<x[i];
}
}