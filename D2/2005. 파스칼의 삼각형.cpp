#include <iostream>

using namespace std;

int T, N;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cout << '#' << t << '\n';

    cin >> N;

    int arr[10][10] = {
        0,
    };

    for (int i = 0; i < N; i++) arr[i][0] = arr[i][i] = 1;

    for (int i = 2; i < N; i++)
      for (int j = 1; j < i; j++) arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];

    for (int i = 0; i < N; i++) {
      for (int j = 0; j <= i; j++) cout << arr[i][j] << ' ';

      cout << '\n';
    }
  }

  return 0;
}