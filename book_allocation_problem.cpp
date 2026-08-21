#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>

using namespace std;

bool isvalid(vector<int> arr,int n,int m,int mid){
    int student=1,pages=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            return false;
        }
        if(pages+arr[i]<=mid){
            pages+=arr[i];
        }
        else{
            student ++;
            pages=arr[i];
            
        }
        
    }
    return student<=m;
}


int allocatebooks(vector<int> arr,int n,int m){
    
    if(m>n){
        return -1;
    }
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    
    int ans=0;
    int start=0,end=sum; //range of possible ans. binary search on this range  
    
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
    return ans;
}

int main(){
    int n,m;
    cout<<"enter no. of books 'n': "<<endl;
    cin>>n;
    
    vector<int> arr(n);
    
    cout<<"enter no. of pages: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<"enter no. of students: "<<endl;
    cin>>m;
    
    int result=allocatebooks(arr,n,m);
    cout<<"answer: "<<result<<endl;
    return 0;
}
