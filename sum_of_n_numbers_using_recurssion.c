#include<stdio.h>
void f(int i,int s){
    if(i<1){
        printf("%d ",s);
        return;
    }
    f(i-1,s+i);
}
int main(){
    int n,i,s=0;
    printf("enter i: ");
    scanf("%d",&i);
    f(i,0);
    return 0;
}
