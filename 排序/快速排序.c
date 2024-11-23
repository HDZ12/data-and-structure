int part(int A[],int low,int high)
{
  int pivot = A[low];
  while(low<high){
    while(low<high&&A[high]>=pivot)
        ---high;
    A[low]=A[high];
    while(low<high&&A[low]>pivot)
        ++low;
    A[high]=A[low];
  }
  A[low]=pivot;
  return low;
}

void quicksort(int A[],int low,int high){
    while(low<high){
      int pivotpos=part(A,low,high);
      quicksort(A,low,pivotops-1);
      quicksort(A,pivotops+1,high);
  }
}
