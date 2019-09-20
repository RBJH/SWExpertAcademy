#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

int T, N, M;
int result;

int main() {
  scanf("%d", &T);

  for (int t = 1; t <= T; t++) {
    scanf("%d %d", &N, &M);

    vector<string> v;
    vector<string> vs;

    string str;

    for (int n = 0; n < N; n++) {
      scanf("%s", str.c_str());

      v.push_back(str.c_str());
    }

    for (int m = 0; m < M; m++) {
      scanf("%s", str.c_str());

      vs.push_back(str.c_str());
    }

    sort(v.begin(), v.end());
    sort(vs.begin(), vs.end());

    result = 0;

    while (v.size() || vs.size()) {
      if (v.back() > vs.back())
        v.pop_back();
      else if (v.back() < vs.back())
        vs.pop_back();
      else {
        result++;

        v.pop_back();
        vs.pop_back();
      }
    }

    printf("#%d %d\n", t, result);
  }

  return 0;
}