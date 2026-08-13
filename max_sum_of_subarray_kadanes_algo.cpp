#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,i;
    cout<<"enter no. of elements in array: "<<endl;
    cin>>n;
    
    int a[n];
    
    
    for(int i=0;i<n;i++){
        cout<<"enter elements: "<<endl;
        cin>>a[i];
    }
    
    int cs=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        cs+=a[i];
        maxsum=max(cs,maxsum);
        if(cs<0){
            cs=0;
        }
    }
    cout<<"max sum = "<<maxsum<<endl;
}
