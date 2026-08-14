#include <iostream>
#include <vector>
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
    
    
    
    for(int i=0;i<n;i++){
        int freq=1;    //coz freq should reset for every element 
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                freq++;
            }
        }
        if(freq>(n/2)){
            cout<<"majority element = "<<a[i]<<endl;
            return 0;
        }
        
    }
    
    return 0;
}
