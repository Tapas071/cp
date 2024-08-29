
void solve(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    fl(0,n){
        cin>>arr[I];
    }
    bool ans =true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            if(arr[i]+arr[i+1]<=x){
                swap(arr[i],arr[i+1]);
            }
            else 
            {
                ans =false;
                break;
            }
        }
    }
    if (ans==true){
        cout<<"YE