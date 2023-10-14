#include <iostream>
using namespace std;
int main() {
    int a=90;
    int &p=a;
    int &c=a;
    int &k=a;
    int ok=a;
    cout<<&ok<<endl;
    cout<<&k<<endl;
    cout<<&c<<endl;
    cout<<&p<<endl;
    cout<<&a<<endl;
    return 0;
}