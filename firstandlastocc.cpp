int firstocc(vector<int>& arr, int n, int k){
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            ans=mid;
            high=mid-1;

        }
        else if(arr[mid]<k){
            low=mid+1;
        } else {
            high = mid - 1;
        }
       
    }
     return ans;
}

int lastocc(vector<int>& arr, int n, int k){
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            ans=mid;
            low=mid+1;

        }
        else if(arr[mid]<k){
            low=mid+1;
        } else {
            high = mid - 1;
        }
       
    }
     return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int first=firstocc(arr, n,  k);
    int second=lastocc(arr,  n, k);
    return{first,second};
}
