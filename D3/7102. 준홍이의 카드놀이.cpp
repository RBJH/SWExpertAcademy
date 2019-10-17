#include <iostream>
#include <vector>

using namespace std;

int T, N, M;
vector<int> result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cout << '#' << t << ' ';

    cin >> N >> M;

    result.clear();

    int sum[41] = {
        0,
    };

    for (int n = 1; n <= N; n++)
      for (int m = 1; m <= M; m++) sum[n + m]++;

    int max = 0;

    for (int i = 2; i <= 40; i++)
      if (sum[i] > max) max = sum[i];

    for (int i = 2; i <= 40; i++)
      if (sum[i] == max) result.push_back(i);

    for (int i = 0; i < result.size(); i++) cout << result[i] << ' ';

    cout << '\n';
  }

  return 0;
}