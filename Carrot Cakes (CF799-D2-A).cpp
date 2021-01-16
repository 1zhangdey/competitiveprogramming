#include <bits/stdc++.h> 
using namespace std;

int main(){

int n,t,k,d; int count = 0;
cin>>n>>t>>k>>d;

while(count <= d){
  count += t;
  n-=k;
}

if(n>0){
  cout<<"YES";
}else{
  cout<<"NO";
}
}


//8646