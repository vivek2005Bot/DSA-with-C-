#include <bits/stdc++.h>
using namespace std;

void LowestHighFre(int arr[],int n){

    vector<bool> visited(n,false);
    int maxFre=0; int minFre=n;
    int Maxele=0; int Minele=0;
    for(int i=0;i<n;i++){
        if(visited[i]==true){
           continue;
        }
         int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                visited[j]=true;
                count++;
            
            }
        }

        if(count>maxFre){
            Maxele=arr[i];
            maxFre=count;

        }
        if(count<minFre){
            Minele=arr[i];
            minFre=count;

        }
    }
     cout << "The highest frequency element is: " << Maxele << "\n";
    cout << "The lowest frequency element is: " << Minele << "\n";
}

int main(){

    int arr[]={10,5,10,15,10,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    LowestHighFre(arr,n);
    return 0;
}