#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cout<<"enter no. of elements in array: "<<endl;
    cin>>n;
    
    vector<int> a(n);
    
    cout<<"enter elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cout<<"array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    int start=0;
    int end=n-1;
    
    while(start<=end){
        //checking mid
        int mid=start+((end-start)/2);
        
        //edge cases
        if(n==1){
            cout<<"\nans: "<<a[0];
            return 0;
        }
        
        if(mid==0 && a[0]!=a[1]){
            cout<<a[0];
            return 0;
        }
        if(mid==n-1 && a[n-1]!=a[n-2]){
            cout<<a[n-1];
            return 0;
        }
        
        
        if(a[mid-1]!=a[mid] && a[mid]!=a[mid+1]){
            cout<<"\nindex of single element in the array is: "<<mid<<" and element is: "<<a[mid]<<endl;
            return 0;
        }
        
        //checking if mid is on even index or not
        if(mid%2==0){
            if (a[mid]==a[mid-1]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        else{
            if(a[mid]==a[mid-1]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        
    }
    return 0;
}
