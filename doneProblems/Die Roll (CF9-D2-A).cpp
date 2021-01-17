#include <bits/stdc++.h> 
using namespace std;
  
string arr[6] = {"1/1","5/6","2/3","1/2","1/3","1/6"};


int main(){
  int y; int x; int maxNumber;
  cin>>y>>x;

  maxNumber = max(y, x);

  cout<<arr[maxNumber-1];
 
}   

