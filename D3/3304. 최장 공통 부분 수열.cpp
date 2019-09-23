#include <iostream>

using namespace std;

int T;
string A, B;
int result;

int d[1001][1001] = {
    0,
};

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> A >> B;

    result = 0;

    for (int i = 0; i < A.length(); i++) {
      for (int j = 0; j < B.length(); j++) {
        if (A[i] == B[j])
          d[i + 1][j + 1] = d[i][j] + 1;
        else
          d[i + 1][j + 1] = max(d[i + 1][j], d[i][j + 1]);
      }
    }

    result = d[A.length()][B.length()];

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}