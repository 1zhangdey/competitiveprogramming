#include <bits/stdc++.h> 
using namespace std;

int main(){
int size;
cin>>size;
string word;
cin>>word;
int same;
for(int i =0;i<size; i++){
  if(word[i] == word[i+1]){
    same++;
  }
}
cout<<same;
}