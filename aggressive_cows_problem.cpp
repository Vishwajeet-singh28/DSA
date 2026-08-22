#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<cctype>

using namespace std;

bool isvalid(vector<int> arr,int n,int cows,int mid){
    
    int cow=1,positionofcow=arr[0];
    
    for(int i=1;i<n;i++){
        if(arr[i]-positionofcow>=mid){
            cow++;
            positionofcow=arr[i];
        }
        if(cow==cows){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    
    cout<<"enter no. of stalls: "<<endl;
    cin>>n;
    
    vector<int> arr(n);
    
    cout<<"enter stalls: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    int cows;
    cout<<"\nno. of cows: "<<endl;
    cin>>cows;
    
    if(cows>n){
        cout<<"allocation not possible"<<endl;
        return 0;
    }
        
    
    sort(arr.begin(),arr.end());
    
    int ans=0;
    int start=1;
    int end=arr[n-1]-arr[0];
    
    while(start<=end){
        int mid=start+((end-start)/2);
        
        if(isvalid(arr,n,cows,mid)){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<"\nanswer= "<<ans<<endl;
    return 0;
}
