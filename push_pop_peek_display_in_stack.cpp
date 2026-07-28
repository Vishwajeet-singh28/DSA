#include<iostream>
using namespace std;

#define SIZE 10
int stack[SIZE];
int top=-1;

void push(int value){
    if(top==SIZE-1){
        cout<<"full stack \n"<<endl;
    }
    else{
        top++;
        stack[top]=value;
        cout<<"pushed value in stack is: "<<stack[top]<<endl;
    }
}

void pop(){
    if(top==-1){
        cout<<"empty stack \n"<<endl;
    }
    else{
        cout<<stack[top]<<endl;
        top--;
    }
}

void peek(){
    if(top==-1){
        cout<<"empty stack \n"<<endl;
    }
    else{
        cout<<"top two elements are: "<<stack[top] <<stack[top-1]<<endl;
    }
}

void display(){
    if(top==-1){
        cout<<"empty stack \n"<<endl;
    }
    else{
        for(int i=top;i<=0;i--){
            cout<<stack[i]<<endl;
        }
    }
}


int main(){
    push(10);
    push(20);
    push(30);
    display();
    peek();
    pop();
    return 0;
}


