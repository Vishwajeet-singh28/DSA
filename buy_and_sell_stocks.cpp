#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,i;
    cout<<"enter no. of days: "<<endl;
    cin>>n;
    
    vector<int> p(n);
    
    cout<<"enter price: "<<endl;
    for(i=0;i<n;i++){
    cin>>p[i];
    }
    
    cout<<"vector: "<<endl;
    for(i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    
    int bbd=p[0];
    int maxprofit=0;
    for(i=0;i<n;i++){
        if(p[i]<bbd){
            bbd=p[i];
        }
        int profit = p[i]-bbd;
        
        maxprofit=max(maxprofit,profit);
    }
    cout << "Maximum profit = " << maxprofit << endl;

    return 0;
}
