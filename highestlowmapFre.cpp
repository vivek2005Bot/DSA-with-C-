

void CountFre(int arr[],int n){
    unordered_map<int,int>map;
    int maxFre=0; int minFre=n;
    int Maxele=0; int Minele=0;

    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }
    for(auto it:map){
       int count=it.second;
       int element=it.first;

       if(count>maxFre){
            Maxele=element;
            maxFre=count;

        }
        if(count<minFre){
            Minele=element;
            minFre=count;

        }


    }
    cout << "The highest frequency element is: " << Maxele << "\n";
    cout << "The lowest frequency element is: " << Minele << "\n";
}

int main(){
    int arr[]={10,5,10,15,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    CountFre(arr,n);
    return 0;
}