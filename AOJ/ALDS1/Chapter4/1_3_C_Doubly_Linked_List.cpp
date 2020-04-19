#include <bits/stdc++.h>
using namespace std;

struct Node {
  int key;
  Node *prev, *next;
};
Node *nil;

void insert(int key) {
  Node *x = (Node *)malloc(sizeof(Node));
  x->key = key;
  x->next = nil->next;
  nil->next->prev = x;
  nil->next = x;
  x->prev = nil;
}

void printList() {
  Node *cur = nil->next;
  bool addSpace = false;
  for (Node *cur = nil->next; cur != nil; cur = cur->next) {
    if (addSpace) cout << " ";
    cout << cur->key;
    addSpace = true;
  }
  cout << endl;
}

Node* listSearch(int key) {
  Node *cur;
  for (cur = nil->next; cur != nil; cur = cur->next) {
    if (cur->key == key) break;
  }
  return cur;
}

void deleteNode(Node *t) {
  if (t == nil) return;
  t->prev->next = t->next;
  t->next->prev = t->prev;
  free(t);
}

void deleteFirst() {
  deleteNode(nil->next);
}

void deleteLast() {
  deleteNode(nil->prev);
}

void deleteKey(int key) {
  deleteNode(listSearch(key));
}

int main() {
  nil = (Node *)malloc(sizeof(Node));
  nil->next = nil;
  nil->prev = nil;
  int n; cin >> n;
  for (int i = 0; i < n; i++) {
    char q[10]; int a;
    scanf("%s%d", q, &a);
    if (q[0] == 'i') {
      insert(a);
    } else if (q[6] == 'F') {
      deleteFirst();
    } else if (q[6] == 'L') {
      deleteLast();
    } else {
      deleteKey(a);
    }
  }
  printList();
}
