#include <bits/stdc++.h>
using namespace std;
#define FOR(i, L, R) for (int i = L; i < R; i++)
#define ll long long

ll solve(int a[], int b[], int n) {
  sort(a, a + n); sort(b, b + n);
  int cur = n - 1; ll res = 1;        //store cursor for traversing b and result (res starts at 1 so we can do *=)
  for (int i = n - 1; i >= 0; i--) {
    if (b[cur] >= a[i]) {             //go thru jiggery. if the 'if' statement is true then b[cur] can host all i cows as the arr is sorted
      res *= (i + 1) - cur;           //non-repeating permutations
      if (cur > 0) {--cur; i++;}      //taake zyada over na ho jaye (we don't want to decrement cur if we are already at 0)
      else return res;                //if we reach end, return answer
    }
  }
  return 0;                           //return 0 incase nothing happened in for loop (meaning that all b's were smaller than all a's and hence answer is 0)
}

int main() {
  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); //fast io
  int n; cin >> n;
  int a[n], b[n];
  FOR(i, 0, n) cin >> a[i];
  FOR(i, 0, n) cin >> b[i];
  cout << solve(a, b, n);
}