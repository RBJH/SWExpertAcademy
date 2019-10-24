#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int T, K, A[1024];
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> K;

    result = 0;

    vector<int> v;

    for (int i = 0; i < pow(2, K); i++) {
      cin >> A[i];

      if (i % 2) {
        if (A[i] - A[i - 1] < 0) {
          v.push_back(A[i - 1]);

          result += A[i - 1] - A[i];
        } else {
          v.push_back(A[i]);

          result += A[i] - A[i - 1];
        }
      }
    }

    vector<int> vi;

    while (v.size() > 1) {
      vi.clear();

      for (int i = 0; i < v.size(); i += 2) {
        if (v[i + 1] - v[i] < 0) {
          vi.push_back(v[i]);

          result += v[i] - v[i + 1];
        } else {
          vi.push_back(v[i + 1]);

          result += v[i + 1] - v[i];
        }
      }

      v = vi;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}