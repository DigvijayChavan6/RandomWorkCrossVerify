#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(0);
    pq.push(40);
    pq.push(9);
    pq.push(900);
    pq.push(520);
    pq.push(290);
    pq.push(60);
    pq.push(40);
    pq.push(200);
    pq.push(2);
    cout<<pq.top()<<endl;
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
}