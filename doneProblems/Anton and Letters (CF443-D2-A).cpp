#include <bits/stdc++.h> 
using namespace std;

int main(){

string letters; string newLetters = "";
int count = 1;
getline(cin,letters);

for(int i = 0; i < letters.length();i++){
  if(letters[i]<= 122 && letters[i]>=97){
    newLetters += letters[i];
  }
}

if(newLetters == ""){
  cout<<0;
  exit(0);
}

sort(newLetters.begin(),newLetters.end());



for(int i = 0; i<newLetters.length();i++){
  if(newLetters[i] < newLetters[i+1]){
    count++;
  }
}
cout<<count;
}