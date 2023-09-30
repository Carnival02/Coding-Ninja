//Product of Array Except Self

int *getProductArrayExceptSelf(int *arr, int n)
{
    //Write your code here
    
    int *output = (int *)malloc(n * sizeof(int));
    
    if (!output) {
            return NULL;
    }
    
    int product=1;
    for(int i=0;i<n;i++){
        output[i]=product;
        product=product*arr[i];
    }

    product=1;
    for(int i=n-1;i>=0;i--){
        output[i]*=product;
        product*=arr[i];

    }
    return output;

}
