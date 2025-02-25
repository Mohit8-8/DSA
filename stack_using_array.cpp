#include<bits/stdc++.h>
using namespace std;

vector<int> Stack;
void push(int value){
    Stack.push_back(value);
}

void pop(){
    
    if(Stack.empty()){
        cout<<"stack is empty";
    }
    else{
    Stack.pop_back();
    }
}

void display(){
    for(int i =Stack.size()-1;i>=0;i--){
        cout<<Stack[i]<<endl;
    }
}

void top(){
    cout<<Stack[-1];
}

int main(){

    push(10);
    push(20);
    display();

    // top();

}