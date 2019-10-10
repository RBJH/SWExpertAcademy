#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

int T;
int result;

int main() {
  scanf("%d", &T);

  for (int t = 1; t <= T; t++) {
    int num[7] = {
        0,
    };

    for (int i = 0; i < 7; i++) scanf("%d", &num[i]);

    vector<int> v;

    int sum = 0;

    for (int i = 0; i < 7 - 3 + 1; i++) {
      sum = num[i];

      for (int j = i + 1; j < 7 - 2 + 1; j++) {
        sum += num[j];

        for (int k = j + 1; k < 7; k++) {
          sum += num[k];

          v.push_back(sum);

          sum -= num[k];
        }

        sum -= num[j];
      }
    }

    sort(v.begin(), v.end(), greater<int>());

    unique(v.begin(), v.end());

    result = v[5 - 1];

    printf("#%d %d\n", t, result);
  }

  return 0;
}