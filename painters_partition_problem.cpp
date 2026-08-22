#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<cctype>

using namespace std;

bool isvalid(vector<int> arr,int n,int m,int mid){
    int painter=1 ,time=0;
    
    for(int i=0;i<n;i++){
        
        if(arr[i] > mid) {
            return false;
        }
        
        if(time+arr[i]<=mid){
            time+=arr[i];
        }
        else{
            painter++;
            time=arr[i];
        }
    }
    return painter<=m;
}




int main(){
    int n,m;
    cout<<"\nenter no. of boards 'n': "<<endl;
    cin>>n;
    
    vector<int> arr(n);
    
    cout<<"\nenter units of board: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"\narray: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<"\nenter no. of painters: "<<endl;
    cin>>m;
    
    if(m>n){
        cout<<"\nallocation not possible\n"<<endl;
        return 0;
    }   
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    
    int ans=0;
    int start=0;
    int end=sum;
    
    while(start<=end){
        int mid=start+((end-start)/2);
        
        if(isvalid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    
    cout<<"\nanswer= "<<ans<<endl;
    return 0;
}
