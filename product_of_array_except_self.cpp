#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,i,j;
    int maxwater=0;
    cout<<"enter no. of elements: "<<endl;
    cin>>n;
    
    vector<int> nums(n);
    
    cout<<"enter elements: "<<endl;
    for(i=0;i<n;i++){
    cin>>nums[i];
    }
    
    cout<<"nums: "<<endl;
    for(i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    
    vector<int> ans(n);
    
    for(i=0;i<n;i++){
        int p=1;
        for(j=0;j<n;j++){
            if(i!=j){
                p=p*nums[j];
            }
        }
        ans[i]=p;
    }
    cout<<"\nproduct= "<<endl;
    for(i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
