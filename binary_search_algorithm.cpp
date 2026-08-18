#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,i,j;
    cout<<"enter no. of elements: "<<endl;
    cin>>n;
    
    vector<int> a(n);
    
    cout<<"enter elements: "<<endl;
    for(i=0;i<n;i++){
    cin>>a[i];
    }
    
    cout<<"\narray:\n "<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    sort(a.begin(),a.end());
    
    cout<<"\nsorted array:\n "<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    int target;
    cout<<"\nenter target: "<<endl;
    cin>>target;
    int start=0,end=n-1;
    
    while(start<=end){
        int mid=(start+end)/2;
        if(target>a[mid]){
            start=mid+1;
        }
        else if(target<a[mid]){
            end=mid-1;
        }
        else if(target==a[mid]){
            cout<<"ans index: "<<mid;
            return 0;
        }
    }
    cout<<"\nans not found "<<endl;
    return 0;
}
