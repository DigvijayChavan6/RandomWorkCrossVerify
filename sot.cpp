#include<iostream>
using namespace std;
long long int cnt=0;
long long int getPivot(long long int vec[],long long int low, long long int high){
        long long int p=vec[low],i=low,j=high;
        while(i<j){
            while(vec[i]<=p && i<=high)i++;
            while(vec[j]>p && j>=low)j--;
            if(i<j){
                long long int t=vec[i];
                vec[i]=vec[j];
                vec[j]=t;
                cnt+=(j-i);
            }
        }
        if(j<i){
            vec[low]=vec[j];
            vec[j]=p;
            cnt+=(j-low);
        }
        return j;
    }
    void qs(long long int vec[],long long int low,long long int high){
        if(low<high){
            long long int pvt=getPivot(vec,low,high);
            qs(vec,low,pvt-1);
            qs(vec,pvt+1,high);
        }
    }
    int main(){
        long long int vec[]{9,6,3,5,2,6,3,5,3,0};
        qs(vec,0,9);
        for(int i=0;i<10;i++){
            cout<<vec[i]<<endl;
        }
        return 0;
    }