int firstOcc(vector<int>& arr, int x){
    int first=-1;
    int low=0;
    int high=arr.size()-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==x){
            first=mid;
            high=mid-1;
        }else if(arr[mid]>x){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return first;
}

int lastOcc(vector<int>& arr,int x){
    int last=-1;
    int low=0;
    int high=arr.size()-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==x){
            last=mid;
            low=mid+1;
        }else if(arr[mid]>x){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return last;
}

vector<int> findCipherRestaurant(vector<int>& arr, int x) {
    // Your implementation here
    int first=firstOcc(arr,x);
    int last=lastOcc(arr,x);
    if(first==-1) return {-1,-1};
    return {first,last};
}