#include <bits/stdc++.h>
using namespace std;
int floorSqrt(int n){
    int low=1;
    int high=n;

    while(low<=high){
        int mid=(low+high)/2;

        long long val=mid*mid;
        if(val<=n*1ll){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}
int main()
{
    int n = 28;
    int ans = floorSqrt(n);
    cout << "The floor of square root of " << n
         << " is: " << ans << "\n";
    return 0;
}