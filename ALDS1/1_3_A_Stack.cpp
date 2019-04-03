#include <bits/stdc++.h>
using namespace std;

const int MAX = 101;
int top = 0;
int S[MAX];

void initialize();
bool isEmpty();
bool isFull();
void push(int);
int pop();

int main() {
  char s[10];
  while (scanf("%s", s) != EOF) {
    if (s[0] == '+') {
      push(pop() + pop());
    } else if (s[0] == '-') {
      int a = pop();
      push(pop() - a);
    } else if (s[0] == '*') {
      push(pop() * pop());
    } else {
      push(atoi(s));
    }
  }
  cout << pop() << endl;
}

void initialize() {
  top = 0;
}
bool isEmpty() {
  return top == 0;
}
bool isFull() {
  return top >= MAX - 1;
}
void push(int x) {
  if (isFull()) cout << "Error: Stack overflow" << endl;
  S[++top] = x;
}
int pop() {
  if (isEmpty()) cout << "Error: Stack underflow" << endl;
  return S[top--];
}
