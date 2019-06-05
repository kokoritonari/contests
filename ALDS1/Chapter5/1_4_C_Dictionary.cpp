#include <bits/stdc++.h>
using namespace std;
#define M 1000000
#define NIL -1
#define L 13

char H[M][L];

int h1(int key) {
  return key % M;
}

int h2(int key) {
  return 1 + (key % (M - 1));
}

int chartoi(char c) {
  int ret;
  switch (c) {
    case 'A': ret = 1; break;
    case 'T': ret = 2; break;
    case 'G': ret = 3; break;
    case 'C': ret = 4; break;
  }
  return ret;
}

int getKey(char s[]) {
  int ret = 0;
  for (int i = 0; i < strlen(s); i++) {
    ret += chartoi(s[i]) * (i + 1) * 5;
  }
  return ret;
}

int find(char s[]) {
  int key = getKey(s);
  for (int i = 0; ; i++) {
    int h = (h1(key) + i * h2(key)) % M;
    if (strcmp(s, H[h]) == 0) {
      return 1;
    } else if (strlen(H[h]) == 0) {
      return 0;
    }
  }
  return 0;
}

int insert(char s[]) {
  int key = getKey(s);
  for (int i = 0; ; i++) {
    int h = (h1(key) + i * h2(key)) % M;
    if (strcmp(s, H[h]) == 0) {
      return 1;
    } else if (strlen(H[h]) == 0) {
      strcpy(H[h], s);
      return 0;
    }
  }
  return 0;
}

int main() {
  // cin.tie(0);
  // ios::sync_with_stdio(false);
  int n; scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    char s[7], t[L];
    scanf("%s%s", s, t);
    int ans;
    if (s[0] == 'i') {
      insert(t);
    } else {
      ans = find(t);
      printf("%s\n" , ans ? "yes" : "no");
    }
  }
}
