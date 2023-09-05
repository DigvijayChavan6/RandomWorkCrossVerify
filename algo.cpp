#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool comp(int a,int b){
    return a>b;
}
int main(){
    vector<int> vec{1,3,6,3,89,0,6,7};
    sort(vec.begin(),vec.end());
    for(auto it: vec){
        cout<<it<<endl;
    }
    return 0;
}