#include<iostream>
using namespace std;

void tower(int n, char source , char auxillary , char destination){
    if(n==1){
        cout<<"move disk from "<< source << " to " << destination << endl;
        return;
    }
    tower(n-1,source,destination,auxillary);
    cout<<"move "<<n<<"disk from "<<source<<" to "<<destination<<endl;
    tower(n-1,auxillary,source,destination);
}

int main(){
    int n;
    cout<<"enter the number of disks: "<<endl;
    cin>>n;
    tower(n,'A','B','C');
    return 0;
}
