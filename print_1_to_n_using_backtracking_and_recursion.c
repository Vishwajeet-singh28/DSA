#include<stdio.h>
void f(int i , int n){
    if(i<1){
        return ;
    }
    f(i-1,n);
     printf("%d", i);
}
int main(){
    int n,i;
    printf("enter n: ");
    scanf("%d",&n);
    f(n,n);
    return 0;
}
