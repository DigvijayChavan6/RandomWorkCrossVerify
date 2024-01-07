#include<bits/stdc++.h>
using namespace std;
vector<int> ma(vector<int> &nums, int k)
{
    vector<int> vec;
    set<int, greater<int>> st(nums.begin(), nums.begin() + k);
    vec.push_back(*(st.begin()));
    for (int i = 1; i <= nums.size() - k; i++)
    {
        if (nums[i + k - 1] != nums[i - 1])
        {
            st.insert(nums[i + k - 1]);
            st.erase(st.find(nums[i - 1]));
        }
        vec.push_back(*(st.begin()));
    }
    return vec;
}
int main(){
    int k=3;
    vector<int> nums{1, 3, 1, 2, 0, 5},ans;
    ans=ma(nums,3);
    for(auto a : ans){
        cout<<a<<endl;
    }
    return 0;
}
