//Tweaked Array 

#include <bits/stdc++.h> 
vector<int> tweakTheArray(vector<int> arr, int n){
    // Write your code here.
    int sum=0;
    vector<int>ans;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }

    for(int j=0;j<n;j++){
        int aa=sum-arr[j];
        ans.push_back(aa);
    }
    return ans;

}
