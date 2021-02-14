#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; double totalTime = 0;
    double bank;
    cin>>n;
    vector<pair<int, int>>map;
    int x, t;

    for(int i = 0;i<n;i++){
        cin>>t>>x;
        map.emplace_back(make_pair(t,x));
    }

    sort(map.begin(),map.end());

    for(int i = 0;i<(n-1);i++){
        bank = abs((map[i+1].second-map[i].second))/(double)abs((map[i+1].first)-map[i].first);
        if(bank>totalTime){
            totalTime = bank;
        }
    }
    printf("%.6lf\n", totalTime);
}