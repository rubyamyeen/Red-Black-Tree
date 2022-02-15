/*
This is the main method for the Shunting Yard Algorithm. 
Uses the Shunting Yard Algorithm to turn the expression from the user into postfix notation and then creates a binary tree to find the infix, prefix and postfix notation. 
Author: Ruby Amyeen
Date 2/14/22
*/

#include <iostream>
#include <cstring>

using namespace std;

//node struct
struct Node {
  char data;
  Node *next;
};

//stack class
class Stack {
  Node* top;
  //functions
public:
  Stack();
  ~Stack();
  void push(char operation);
  void pop();
  char peek();

};

//queue class
class Queue {
  Node* front;
  Node* rear;
  //functions
public:
  Queue();
  ~Queue();
  char enqueue(char operation);
  
};

int main() {
  
  char expression[20];
  char notation[10];
  
  cout << "Enter a mathematical expression:" << endl;
  cin.get(expression, 20);
  cin.get();

  cout << "Enter the notation ('infix', 'prefix', 'postfix') you'd like to output the expression:" << endl;
  cin.get(notation, 10);
  cin.get();
  
  cout << "Expression: " << expression << endl;
  cout << "Notation: " << notation << endl;

  
  return 0;
}
