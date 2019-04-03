#include <bits/stdc++.h>
#define MAX 100000
using namespace std;

struct Process{
  char name[10];
  int time;
};
Process Q[MAX];
int head, tail;

void initialize();
bool isEmpty();
bool isFull();
void enqueue(Process);
Process dequeue();

int main() {
  int elaps = 0, c;
  int n, q;
  cin >> n >> q;

  initialize();

  for (int i = 0; i < n; i++) {
    Process a;
    cin >> a.name >> a.time;
    enqueue(a);
  }

  while (head != tail) {
    Process x = dequeue();
    if (x.time > q) {
      x.time -= q;
      enqueue(x);
      elaps += q;
    } else {
      elaps += x.time;
      cout << x.name << " " << elaps << endl;
    }
  }
}

void initialize() {
  head = tail = 0;
}

bool isEmpty() {
  return head == tail;
}

bool isFull() {
  return head == tail + 1;
}

void enqueue(Process x) {
  if (isFull()) cout << "Error: queue overflow" << endl;
  Q[tail++] = x;
  if (tail == MAX) tail = 0;
}

Process dequeue() {
  if (isEmpty()) cout << "Error: queue underflow" << endl;
  Process a = Q[head++];
  if (head == MAX) head = 0;
  return a;
}
