#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n,i;
    cout<<"enter no. of elements in the array: "<<endl;
    cin>>n;
    
    vector<int> a(n);
    
    for(i=0;i<n;i++){
        cout<<"enter element: "<<endl;
        cin>>a[i];
    }
    
    cout<<"vector: "<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    sort(a.begin(),a.end());
    
    cout<<"sorted vector: "<<" ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    int freq=1;
    
    for(i=1;i<n;i++){
        if(a[i]==a[i-1]){
            freq++;
        }
        else{
            freq=1;
        }
    
    if(freq>(n/2)){
        cout<<"majority element is: "<<a[i]<<endl;
        return 0;
        }
    }
    return 0;
}
    
