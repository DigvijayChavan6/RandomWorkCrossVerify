#include<iostream>
using namespace std;
long long f(int n){
    long long sum=0;
    for(int i=1;i<=n;i++)if(n%i==0)sum+=i;
    return sum;
}
long long sumOfDivisors(int N){
    long long sum=0;
    for(int i=1;i<=N;i++)sum+=f(i);
    return sum;
}
int main(){
    int p;
    cin>>p;
    cout<<sumOfDivisors(p);
    return 0;
}