#include<bits/stdc++.h>

using namespace std;
void explainPair();
int main(){
  
explainPair();
return 0;
}
void explainPair()
{
    // pair<int, int> p={1,3};
    // cout<<p.first<<" "<< p.second;
    pair<int , pair<int ,int>> p={1,{3,4}};
    cout<< p.first <<" "<< p.second.second <<" "<<p.second.first;

    pair<int , int> arr[]={{1,2},{2,5},{5,1}};

    cout<<" "<<arr[1].second;
    
}


