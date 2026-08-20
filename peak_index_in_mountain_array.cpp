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
        cout<<a[i];
    }
    
    //starting from index 1 and ending at index n-2 coz we know that peak elements cant be at start or at the end.
    int start=1;
    int end=n-2;
    
    while(start<=end){
        int mid=start+((end-start)/2); //checking mid.
        //if mid is peak or not.
        if(a[mid-1]<a[mid] && a[mid]>a[mid+1]){
            cout<<"index of peak element is: "<<mid<<endl;
            return 0;
        }
        //checking if peak lies in right or left.
        else if(a[mid]<a[mid+1]){
            start=mid+1;
        }
        else{
            end=mid-1; 
        }
    }
    return 0;
    
}
