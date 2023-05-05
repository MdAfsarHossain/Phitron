#include <stdio.h>
#include <string.h>
#include <ctype.h>

void solve() {
  int N;
  scanf("%d", &N);
  int A[N], pos = 0, neg = 0;
  for (int i = 0; i < N; ++i) {
    scanf("%d", &A[i]);
    if (A[i] > 0) {
      ++pos;
    }
    else {
      ++neg;
    }
  }
  if (neg == 0) {
    int mini = 1e9, maxi = -1e9;
    for (int i = 0; i < N; ++i) {
      if (mini > A[i]) {
        mini = A[i];
      }
      if (maxi < A[i]) {
        maxi = A[i];
      }
    }
    long long max_prod = maxi * maxi;
    long long min_prod = mini * mini;
    long long max_sum = maxi + maxi;
    long long min_sum = mini + mini;
    printf("%lld %lld %lld %lld\n", max_prod, min_prod, max_sum, min_sum);
  }
  else if (pos == 0) {
    int mini = 1e9, maxi = -1e9;
    for (int i = 0; i < N; ++i) {
      if (mini > A[i]) {
        mini = A[i];
      }
      if (maxi < A[i]) {
        maxi = A[i];
      }
    }
    long long min_prod = maxi * maxi;
    long long max_prod = mini * mini;
    long long min_sum = maxi + maxi;
    long long max_sum = mini + mini;
    printf("%lld %lld %lld %lld\n", max_prod, min_prod, min_sum, max_sum);
  }
  else {
    int mini = 1e9, maxi = -1e9;
    for (int i = 0; i < N; ++i) {
      if (mini > A[i]) {
        mini = A[i];
      }
      if (maxi < A[i]) {
        maxi = A[i];
      }
    }
    long long min_sum = mini + mini;
    long long max_sum = maxi + maxi;
    long long min_prod = 0;
    long long max_prod = 0;
    if (mini * mini < maxi * maxi) {
      max_prod = maxi * maxi;
      min_prod = mini * maxi;
    }
    else {
      max_prod = mini * mini;
      min_prod = mini * maxi;
    }
    printf("%lld %lld %lld %lld\n", max_prod, min_prod, max_sum, min_sum);
  }
}

int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    solve();
  }
  return 0;
}