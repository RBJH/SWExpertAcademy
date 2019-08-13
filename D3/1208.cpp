// 1208. [S/W 문제해결 기본] 1일차 - Flatten
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N;

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> N;

    vector<int> v;

    int boxes;

    for (int i = 0; i < 100; i++) {
      cin >> boxes;

      v.push_back(boxes);
    }

    sort(v.begin(), v.end());

    int result = 0;

    for (int n = 0; n < N; n++) {
      v[99]--;
      v[0]++;

      sort(v.begin(), v.end());

      result = v[99] - v[0];

      if (v[99] - v[0] <= 1) break;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}