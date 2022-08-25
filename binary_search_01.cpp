#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binary_search(int)

int main(){
    int n,a,k;
    vector<int>v;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    // for(int i=0;i<n;i++){
    //     cout<<v[i];
    // }
    sort(v.begin,v.end);
   cout<< binary_search(n,v,k);

}