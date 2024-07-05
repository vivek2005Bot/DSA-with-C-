#include<bits/stdc++.h>
using namespace std;
void explainDeque();
int main(){
explainDeque();
}

void explainDeque(){
  deque<int> dq;
  dq.push_back(1);
  dq.push_front(2);
  dq.emplace_back(4);
  dq.emplace_front(3);


  dq.pop_back();
  dq.pop_front();

  dq.back();

  dq.front();  
}