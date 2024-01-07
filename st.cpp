#include<iostream>
#include<stack>
using namespace std;
void Reverse(stack<int> &St){
        if(!St.empty()){
        int t=St.top();
        St.pop();
        Reverse(St);
        St.push(t);
        }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(30);
    st.push(45);
     while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    Reverse(st);
    // while(!st.empty()){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }
    return 0;
}