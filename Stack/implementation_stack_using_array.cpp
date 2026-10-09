#include<iostream>
using namespace std;

int arr[5] = {};
  int a = 0;

void push(int value){
  if(a < 5){
    arr[a]=value;
    a++;
  }else{
    cout << "Memory Out Of Bound." << endl;
  }
}

void pop(){
  if(a > 0){
    a--;
  }else{
    a = 0;
  }
}

void top(){
  if(a > 0){
    cout << "Top element is: " << arr[a-1] << endl;
  }else{
    cout << "Size Is Empty." << endl;
  }
}

void display(){
  for(int i = 0; i < a-1; i++){
    cout << arr[i] << endl;
  }
}

void size(){
  cout << "Size is: " << a << endl;
}

int main(){
  push(10);
  push(20);
  push(30);
  push(40);
  push(50);
  pop();
  pop();
  push(60);
  push(70);
  display();
  top();
  size();
  pop();
  pop();
  pop();
  pop();
    return 0;
}