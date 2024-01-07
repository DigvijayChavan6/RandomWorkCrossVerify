#include<iostream>
using namespace std;
void my(int n){
    if(n>3)return;
    cout<<n<<endl;
    my(n+1);
    cout<<n<<endl;
}
int main(int argc, char const *argv[])
{
    my(1);
    return 0;
}
