#include<iostream>
using namespace std;
int main(){
    int ar[10]={1,2,3,4,5,6,7,8,9,10};
    int *p;
    p=ar;
    for(int i=0;i<10;i++)
    cout<<*p++;
    return 0;
}