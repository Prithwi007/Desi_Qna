class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
    int maxi=0;

    //Code here
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(arr[i])==mp.end()){
                mp[arr[i]]=i;
            }
            else{
                maxi=(maxi,i-mp[arr[i]]);
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends
