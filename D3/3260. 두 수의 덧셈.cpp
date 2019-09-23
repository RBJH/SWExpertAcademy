#include <algorithm>
#include <iostream>

using namespace std;

int T;
string A, B;
string result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> A >> B;

    result = "";

    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    if (A.length() < B.length()) {
      string tmp = A;
      A = B;
      B = tmp;
    }

    int c = 0;

    for (int i = 0; i < B.length(); i++) {
      result += A[i] + B[i] - '0' + c;

      c = 0;

      if (result[i] > '9') {
        result[i] -= 10;

        c = 1;
      }
    }

    for (int i = B.length(); i < A.length(); i++) {
      result += A[i] + c;

      c = 0;

      if (result[i] > '9') {
        result[i] -= 10;

        c = 1;
      }
    }

    if (c) result += "1";

    reverse(result.begin(), result.end());

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}