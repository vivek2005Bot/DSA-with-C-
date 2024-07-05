#include<bits/stdc++.h>

using namespace std;

int subarrayxor(vector<int> a,int k){

    int n=a.size();
    map<int,int> mpp;
    int xr=0;
    mpp[xr]++;
    int cnt=0;

    for(int i=0;i<n;i++){
        xr=xr^a[i];

        int x=xr^k;

        cnt+=mpp[x];

        mpp[xr]++;
    }

    return cnt;

}

int main(){

    vector<int> a={4,2,2,6,4};

    int k=6;

    int ans=subarrayxor(a,k);

    cout<<ans;
}