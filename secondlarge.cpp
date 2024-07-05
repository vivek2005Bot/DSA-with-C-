#include<bits/stdc++.h>
using namespace std;

void SecondLarge(int arr[],int n){

    if (n==0 || n==1){
        cout<<-1<<" "<<-1<<endl;

    }

    int large=INT_MIN,Sec_large=INT_MIN;
    int small=INT_MAX,Sec_small=INT_MAX;

    for (int i=0;i<n;i++){

        small=min(small,arr[i]);
        large=max(large,arr[i]);
    }

    for(int i=0;i<n;i++){

        if(arr[i]>Sec_large && arr[i]!=large){
            Sec_large=arr[i];
        }
        if(arr[i]<Sec_small && arr[i]!=small){
            Sec_small=arr[i];
        }
    }
    cout<<Sec_large<<" "<<Sec_small;
}

int main(){

    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    SecondLarge(arr,n);
    return 0;
}