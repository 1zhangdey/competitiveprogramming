#include <bits/stdc++.h> 
using namespace std;



int main(){
long long int n,x,d, childCrying = 0; char operation;
cin>>n>>x;

for(int i =0; i<n;i++){
cin>>operation>>d;
if(operation == '+'){
  x+=d;
}else if(x>=d) {
  x-=d;
  } else{
 childCrying ++;   
  }
}
cout<<x<<" "<< childCrying;
}