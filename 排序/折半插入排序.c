void BinInsert(int A[],int n){
  int i,j;
  int low,high,mid;
  for(i=2;i<=n;i++){
    A[0]=A[i];
    low=1;
    high=i-1;
    while(low<=high){
        mid=(low+high)/2;
        if(A[mid]>A[0]){
          high=mid-1;
        else
          low=mid+1;
        }
        for(j=i-1;j>=high+1;--j)
            A[j+1]=A[j];
        A[high+1]=A[0];
    }
  }
