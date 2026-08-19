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
    
    int target;
    cout<<"\nenter target: "<<endl;
    cin>>target;
    
    int start=0,end=n-1;
    
    while(start<=end){
        int mid=start+((end-start)/2);
        //if target found
        if(a[mid]==target){
            cout<<"answer found at index: "<<mid<<endl;
            return 0;
        }
        
        //left half is sorted
        else if(a[start]<=a[mid]){
                if(a[start]<=target && target<=a[mid]){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
        }
        
        //right half is sorted 
        else{
            if(a[mid]<=a[end]){
                if(a[mid]<=target&& target <=a[end]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
    }
    cout<<"target not found"<<endl;
    return 0;
}
