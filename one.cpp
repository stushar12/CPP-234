int countTriplets(int arr[], int n, int x)
    {
     sort(arr,arr+n);
   
   int count=0;
    for(int i=0;i<n-2;i++)
    {
        
        int l=i+1;
        int r=n-1;
        
        while(l<r)
        {
            
            if(arr[i]+arr[l]+arr[r]>=x)
            {
            r--;
            }
            
            else
            {
                count=count+(r-l);
                l++;
            }
        }
        
    }
    
    return count;
    }