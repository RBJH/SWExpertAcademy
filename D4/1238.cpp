// 1238. [S/W 문제해결 기본] 10일차 - Contact
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N;
int result = 0;

vector<int> v[101];
int chk[101] = {
    -1,
};
int cnt = 0;

void init() {
  result = cnt = 0;

  for (int i = 1; i <= 100; i++) {
    v[i].clear();

    chk[i] = -1;
  }
}

void solve(int b) {
  queue<int> q;

  q.push(b);

  chk[b] = 0;

  int cur = 0;

  while (!q.empty()) {
    cur = q.front();

    q.pop();

    for (int i = 0; i < v[cur].size(); i++) {
      if (chk[v[cur][i]] < 0) {
        q.push(v[cur][i]);

        chk[v[cur][i]] = chk[cur] + 1;

        if (cnt < chk[v[cur][i]]) {
          cnt = chk[v[cur][i]];

          result = v[cur][i];
        } else if (cnt == chk[v[cur][i]])
          if (result < v[cur][i]) result = v[cur][i];
      }
    }
  }
}

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> N;

    init();

    int begin = 0;

    cin >> begin;

    int from = 0;
    int to = 0;

    for (int n = 0; n < N / 2; n++) {
      cin >> from >> to;

      v[from].push_back(to);
    }

    solve(begin);

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}