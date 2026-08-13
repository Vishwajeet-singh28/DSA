#include<iostream>
#include<climits>
#include<vector>

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
    
    cout<<"enter target sum: "<<endl;
    cin>>target;
    
    vector<pair<int,int>> ans;
    
    for(int i=0;i<n;i++){
        
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                ans.push_back({a[i],a[j]});
            }
        }
    }
    
    cout<<"pairs are: "<<endl;
    for(auto it : ans){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    return 0;
}
