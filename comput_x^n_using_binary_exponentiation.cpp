#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    double x;
    int n;
    cout<<"enter x: "<<endl;
    cin>>x;
    
    cout<<"enter n: "<<endl;
    cin>>n;
    if(x==0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    if(x==1){
        return 1;
    }
    if(x==-1 && (n%2==1)){
        return -1;
    }
    if(x==-1 && (n%2==0)){
        return 1;
    }
    
    double ans=1;
    int binform=n;
    
    
    if(binform<0){
        x=1/x;
        binform=-binform;
    }
    
   
    while(binform>0){
        if(binform%2==1){
            ans=ans*x;
        }
        x=x*x;
        binform=binform/2;
    }
    cout<<"answer= "<<ans<<endl;
}
