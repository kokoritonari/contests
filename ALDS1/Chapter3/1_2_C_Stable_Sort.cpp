#include <bits/stdc++.h>
using namespace std;

struct Card {
  char suit, value;
};

void printvec(Card[], int);
void bubble(Card[], int);
void select(Card[], int);
bool isStable(Card[], Card[], int);

int main() {
  int n;
  cin >> n;

  Card c1[n], c2[n];
  for (int i = 0; i < n; i++) {
    cin >> c1[i].suit >> c1[i].value;
    c2[i] = c1[i];
  }

  bubble(c1, n);
  printvec(c1, n);
  cout << "Stable" << endl;

  select(c2, n);
  printvec(c2, n);

  cout << (isStable(c1, c2, n) ? "S" : "Not s") << "table" << endl;
}

void printvec(Card a[], int n) {
  for (int i = 0; i < n; i++) {
    if (i) cout << " ";
    cout << a[i].suit << a[i].value;
  }
  cout << endl;
}

void bubble(Card a[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = n - 1; j > i; j--) {
      if (a[j - 1].value > a[j].value) {
        swap(a[j], a[j - 1]);
      }
    }
  }
}

void select(Card a[], int n) {
  for (int i = 0; i < n; i++) {
    int minj = i;
    for (int j = i; j < n; j++) {
      if (a[j].value < a[minj].value) {
        minj = j;
      }
    }
    swap(a[i], a[minj]);
  }
}

bool isStable(Card a[], Card b[], int n) {
  bool stable = true;
  for (int i = 0; i < n; i++) {
    if (a[i].suit != b[i].suit) {
      stable = false;
    }
  }
  return stable;
}
