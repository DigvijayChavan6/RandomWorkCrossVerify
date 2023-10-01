#include <vector>
#include <iostream>
#include <climits>

using namespace std;

    long long maxTripletValue(vector<int>& nums) {
        int n = nums.size();
        vector<int> mx(n);
        mx[n-1] = nums[n-1];
        using ll = long long;
        ll re =0;
        for(int i=n-2;i>=0;i--) mx[i] = max(mx[i+1],nums[i]);
        int mi = nums[0];
        for(int i=1;i<n-1;i++){
            mi=max(mi,nums[i-1]);
            if(nums[i] < mi) re=max(re,(mi-nums[i]) * (ll)mx[i+1]);
        }
        return re;
    }

int main() {
    // Example 1
    vector<int> nums1 = {12, 6, 1, 2, 7};
    cout << "Example 1: " << maxTripletValue(nums1) << endl;

    // Example 2
    vector<int> nums2 = {1, 10, 3, 4, 19};
    cout << "Example 2: " << maxTripletValue(nums2) << endl;

    // Example 3
    vector<int> nums3 = {1, 2, 3};
    cout << "Example 3: " << maxTripletValue(nums3) << endl;

    return 0;
}

