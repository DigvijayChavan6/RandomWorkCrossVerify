#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> qu;
    qu.emplace(10);
    qu.emplace(9);
    qu.emplace(3);
    cout<<qu.size()<<endl<<qu.front()<<endl;
    qu.pop();
    cout<<qu.back();
    return 0;
}
