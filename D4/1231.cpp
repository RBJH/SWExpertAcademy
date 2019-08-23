// 1231. [S/W 문제해결 기본] 9일차 - 중위순회
#include <iostream>

using namespace std;

int N;

char tree[101] = {' ', };

void inorder(int n) {
  if (n > N) return;

  inorder(n * 2);

  cout << tree[n];

  inorder(n * 2 + 1);
}

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> N;

    int left = 0;
    int right = 0;

    for (int n = 1; n <= N; n++) {
      cin >> n >> tree[n];

      if (N > n * 2) cin >> left >> right;
      if (N == n * 2) cin >> left;
    }

    cout << '#' << t << ' ';

    inorder(1);

    cout << '\n';
  }

  return 0;
}
