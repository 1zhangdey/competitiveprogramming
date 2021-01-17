#include <bits/stdc++.h> 
using namespace std;

int main(){
int n; string sub = "";
cin>>n;
string words[n];

for(int i = 0;i<n;i++){
  cin>>words[i];
}

for(int i = 0; i<n; i++){
 sub = words[i];
 if(sub.length() >10){
   cout<<sub[0]<<sub.length()-2<<sub.back()<<endl;
 }else{
   cout<<sub<<endl;
 }

}
}

   
