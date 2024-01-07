#include<iostream>
E
vector<int> countingSort(vector<int> arr) {
    unordered_map<int,int> freq;
    int size=arr.size();
    for(int i=0;i<size;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<size;i++){
        arr[i]=freq[arr[i]];
    }
    return arr;
}