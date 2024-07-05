#include<bits/stdc++.h>
using namespace std;
void explainQueue();
int main(){
explainQueue();
}

void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back()+=5;

    cout<< q.front();

    q.pop();

}