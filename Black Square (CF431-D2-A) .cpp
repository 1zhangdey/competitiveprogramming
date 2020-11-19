#include <bits/stdc++.h> 
using namespace std;

int main(){
  int one; int two; int three; int four; int score = 0;
  cin>>one>>two>>three>>four;
  string str; 
  cin>>str;

  for(int i = 0; i<str.length();i++){
    if(str[i] == '1'){
      score += one;
    }else if (str[i] == '2'){
      score += two;
    }else if (str[i] == '3'){
      score += three;
    }else if (str[i] == '4'){
      score += four;
    }
  }
 cout<<score;
}