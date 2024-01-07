#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> vec;
    int n=3;
    for(int i=1;i<n;i++)vec.push_back(i);
    for(int i=0;i<n-1;i++)cout<<vec[i]<<" ";
    cout<<endl;
    int k=1;
    
    reverse(vec.begin()+k,vec.end());
    for(int i=0;i<n-1;i++)cout<<vec[i]<<" ";
    cout<<endl;
    reverse(vec.begin(),vec.begin()+k);
    for(int i=0;i<n-1;i++)cout<<vec[i]<<" ";
    cout<<endl;
    reverse(vec.begin(),vec.end());
    for(int i=0;i<n-1;i++)cout<<vec[i]<<" ";
    cout<<endl;
    cout<<vec.back();
    return 0;
}