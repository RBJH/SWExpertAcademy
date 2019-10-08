#include <cmath>
#include <iostream>

using namespace std;

int T;
long long N;
double X;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N;

    X = pow(N, 1 / 3.0);

    if ((long long)(X * 100) % 100 == 99)
      result = (long long)X + 1;
    else if ((long long)(X * 100) % 100 == 0)
      result = (long long)X;
    else
      result = -1;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}