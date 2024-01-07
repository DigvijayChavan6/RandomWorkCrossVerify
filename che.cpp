#include<iostream>
#include<vector>
#include<map>
using namespace std;

int mr(vector<int>&a, int N) {
    // Write your code here.
    int s=0,sum=0;
    for(int i=0;i<N;i++){
        sum+=a[i];
        s+=(i+1);
    }
    int re=s-sum;
    return re;
}
	bool checkTriplet(int arr[], int n) {
	    unordered_map<int,int> mp;
	    for(int i=0;i<n;i++)mp[arr[i]]=i+1;
	    for(int i=0;i<n-1;i++){
	        int a=arr[i],b;
	        for(int j=0;j<n;j++){
	            b=arr[j];
	            long long int s=a*a + b*b;
	            double rt=sqrt(s);
	            int r=rt;
	            if(a==b && b==r && a==r)break;
	            if(mp[r]>0)if(mp[r]-1 != i && mp[r]-1 != j)cout<<"a is "<<a<<" b is "<<b<<" r is "<<r;
	        }
	    }
	    return false;
	}
int main(){
    int arr[]={10 ,5 ,19 ,1, 2 ,28 ,9 ,1, 25 ,10 ,1 ,21 ,4 ,16 ,29 ,6 ,7 ,4 ,16 ,28 ,23 ,4 ,2 ,4};
    checkTriplet(arr,24);
    // vector<int> vec{4, 6, 7, 9, 2, 1, 8, 11, 10, 3 };
    // cout<<mr(vec,vec.size());
    return 0;
}