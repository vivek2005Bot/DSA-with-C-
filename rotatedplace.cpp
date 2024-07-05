#include <bits/stdc++.h>
using namespace std;

void RotateByD(int arr[],int d,int n){
     if (n==0){
        return;
     }
     d=d%n;
     if(d>n){
        return;
     }
      int temp[d];
     for(int i=0;i<d;i++){

        temp[i]=arr[i];

     }
     for (int i=d;i<n;i++){
        arr[i-d]=arr[i];
     }

     for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
     }

}

int main(){

    int arr[]={10,5,6,8,9,7};

    int n=sizeof(arr)/sizeof(arr[0]);

    int d;
    cout<<"enter the range:";
    cin>>d;

    RotateByD(arr,d,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}