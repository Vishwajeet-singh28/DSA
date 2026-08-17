#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,i,j;
    int maxwater=0;
    cout<<"enter no. of heights: "<<endl;
    cin>>n;
    
    vector<int> h(n);
    
    cout<<"enter heights: "<<endl;
    for(i=0;i<n;i++){
    cin>>h[i];
    }
    
    cout<<"height: "<<endl;
    for(i=0;i<n;i++){
        cout<<h[i]<<" ";
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            int w=j-i;
            int ht=min(h[i],h[j]);
            int area=w*ht;
            maxwater=max(maxwater,area);
        }
        
    }
    cout<<"\nmaxwater = "<<maxwater<<endl;
    return 0;
}
