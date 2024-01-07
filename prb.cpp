#include<iostream>
#include<map>
using namespace std;
 bool areIsomorphic(string m, string n){
        if(m.size()!=n.size())return false;
        map<char,char> vec;
        for(int i=97;i<122;i++)vec[i]=i;
        int siz=m.size();
        for(int i=0;i<siz;i++){
            if(vec[m[i]]==m[i] && vec[n[i]]==n[i]){
                vec[n[i]]=m[i];
                vec[m[i]]=n[i];
            }
            else{
                if(vec[m[i]]!=n[i] || vec[n[i]]!=m[i])return false;
            }
        }
        return true;
    }
int main(){
    if(areIsomorphic("aba","xyy"))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}