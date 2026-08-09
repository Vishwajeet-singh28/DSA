#include<iostream>
void rev(int a[],int i,int n){
    if(i>=n/2){
        return ;
    }
    int c=a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=c;
    
    rev(a,i+1,n);
}
int main(){
    int n,i;
    printf("enter no. of elements in array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    printf("enter element in the array: ");
    scanf("%d",&a[i]);
    }
    rev(a,0,n);
    
    printf("reversed array: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
