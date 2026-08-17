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
    
    int lp=0;
    int rp=n-1;
    while(lp<rp){
        int w=rp-lp;
        int ht=min(h[lp],h[rp]);
        int area=w*ht;
        
        maxwater=max(area,maxwater);
        
        if(h[lp]<h[rp]){
            lp++;
        }
        else{
            rp--;
        }
        
    }
    cout<<"maxwater= "<<maxwater<<endl;
    return 0;
}
