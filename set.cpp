#include<bits/stdc++.h>

using namespace std;
void explainSet();
int main(){
  
explainSet();
return 0;
}

void explainSet(){
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);

    // auto it =st.find(3);
    // auto it =st.find(5);

    // int cnt =st.count(5);
    // cout<< cnt;

    // auto it1=st.find(2);
    // auto it2=st.find(4);
    // st.erase(it1,it2);


    auto it=st.lower_bound(4);
   

    cout<< *it;
    // auto it = st.upper_bound(3);
}