#include <bits/stdc++.h>
using namespace std;

int solve(int e, int o, int n) {
  if (e > o)  return (o * 2) + 1;
  if (o > e) {
    o += (e * 2); e = 0;
    if ((o - 4) % 3 == 0) o -= ceil((o - 1) / 3.0) + 2;
    else o -= ceil((o - 1) / 3.0);                          
  }
  return o+e;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  int n;
  cin >> n;
  int e = 0, o = 0;
  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    if (k % 2 == 0)
      ++e;
    else
      ++o;
  }
  cout << solve(e, o, n);
}