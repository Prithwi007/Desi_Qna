#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n,q;
    cin>>n;
    vector<int>v;
    vector<int>r;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cin>>q;
    while(q--){
        int s=0;
        int i,j;
        cin>>i>>j;
        for(int x=i;x<=j;x++){
            s+=v[x];
        }
        r.push_back(s);
    }
    for(auto i:r)
        cout<<i<<endl;
    
}
