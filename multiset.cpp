#include<bits/stdc++.h>

using namespace std;
void explainSet();
int main(){
  
explainSet();
return 0;
}

void explainSet(){

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1);

    ms.erase(ms.find(1));
    ms.erase(ms.find(1),ms.find(1)+2);
}