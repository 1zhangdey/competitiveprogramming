#include <bits/stdc++.h> 
using namespace std;

int main(){
  string word;
  int count = 1;
  int difference;
  cin>>word;

  if(abs(word[0]-word[1])> 13) {
    count += (26 - difference);
    }
    else{
      count += difference;
    }

  for(int i = 1; i<word.length();i++){
    difference = abs(word[i]-word[i-1]);
    if(difference > 13){
      count += (26 - difference);
    }
    else{
      count += difference;
    }
  }
  cout<<count;
}