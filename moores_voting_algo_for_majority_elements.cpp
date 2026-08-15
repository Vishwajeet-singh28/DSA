#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,target;
    cout<<"enter the number of elements: "<<endl;
    cin>>n;
    
    vector<int> a(n);
    
    cout<<"enter elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cout<<"vector is: "<<endl;
    for(int it: a){
        cout<<it<<endl;
    }
    
    int freq=0;
    int ans=0;
    
    for(int i=0;i<n;i++){
        if(freq==0){
            ans=a[i];
        }
        if(a[i]==ans){
            freq++;
        }
        else{
            freq--;
        }
    }
    
    cout<<"majority element : "<<ans;
    return 0;
}
