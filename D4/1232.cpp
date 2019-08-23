// 1232. [S/W 문제해결 기본] 9일차 - 사칙연산
#include <iostream>
#include <utility>

using namespace std;

int N;
int result = 0;

pair<string, pair<int, int>> tree[101];

void init() {
  for (int n = 1; n <= N; n++) {
    tree[n].first = "";

    tree[n].second.first = tree[n].second.second = 0;
  }
}

double solve(int n) {
  if (tree[n].second.first && tree[n].second.second) {
    double left = solve(tree[n].second.first);
    double right = solve(tree[n].second.second);

    if (tree[n].first == "+")
      return left + right;
    else if (tree[n].first == "-")
      return left - right;
    else if (tree[n].first == "*")
      return left * right;
    else if (tree[n].first == "/")
      return left / right;
  } else
    return stoi(tree[n].first);
}

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> N;

    init();

    for (int n = 1; n <= N; n++) {
      cin >> n >> tree[n].first;

      if (tree[n].first == "+" || tree[n].first == "-" ||
          tree[n].first == "*" || tree[n].first == "/")
        cin >> tree[n].second.first >> tree[n].second.second;
    }

    result = solve(1);

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}