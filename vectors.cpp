#include<bits/stdc++.h>

using namespace std;
void explainVector();
int main(){
    explainVector();

}
void explainVector(){
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> pairs;

    v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int> v(5,100);

    vector<int> v1(4,20);
    vector<int> v2(v1);


    vector<int>::iterator it =v.begin();
    it++;
    cout<<*(it)<<" "; 
    

    vector<int>::iterator it =v.end();
    vector<int>::iterator it =v.rbegin();

    cout<<v[0];
    cout<<v.back()<<" ";

    for( auto it = v.begin(); it !=v.end(); it++){
        cout<<*(it);
    }
    for(auto it:v){
        cout<<it<<"";
    }
    v.erase(v.begin()+1);
    v.erase(v.begin()+2,v.begin()+4);// start ,end


    vector<int> v(2,100);
    v.insert(v.begin(),300);
    v.insert(v.begin()+1,2,20);

    cout<<v.size();

    v.pop_back();

    v1.swap(v2);

    v.clear();

    cout<<v.empty();

}