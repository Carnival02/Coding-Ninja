//Finding kth element in this array is sorted so we just need to return K-1 element 
int kthSmallest(int n,int k,vector<int> Arr)
{
    // Write your code here.
    sort(Arr.begin(),Arr.end());
    int ans=0;

    for(int i=0;i<n;i++){
        if(i==k){
            ans=Arr[i];
        }

    }
    return ans;
 
}
