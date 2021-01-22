#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,bank = 97;
    cin>>n>>k;
    string distinctChar = "";

    for(int i = 0;i<k;i++){
    distinctChar+=(char)bank;
    bank++;
    }

    for(int i = k;i<n;i++) {
        distinctChar += (char)97;
        if (distinctChar[i - 1] == distinctChar[i]) {
            distinctChar[i] = 'b';
        }
    }
    cout<<distinctChar<<endl;
}
