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
    
    sort(a.begin(),a.end());
    
    cout<<"vector is: "<<endl;
    for(int it: a){
        cout<<it<<endl;
    }
    
    cout<<"enter target: "<<endl;
    cin>>target;
    
    vector<pair<int,int>> ans;
    
    int j=n-1,i=0;
    
    while(i<j){
        int pairsum=a[i]+a[j];
        if(pairsum>target){
            j--;
        }
        else if(pairsum<target){
            i++;
        }
        else{
            ans.push_back({a[i],a[j]});
            i++;
            j--;
        }
    }
        cout<<"pairs are: "<<endl;
        for(auto it : ans){
            cout<<it.first<<" "<<it.second<<endl;
        }
    
    
    return 0;
}    
