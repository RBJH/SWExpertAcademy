// 1219. [S/W 문제해결 기본] 4일차 - 길찾기
#include <iostream>

using namespace std;

int N;
int result;

int arr1[100];
int arr2[100];

void init() {
  result = 0;

  for (int i = 0; i < 100; i++) arr1[i] = arr2[i] = 0;
}

void solve(int c) {
  if (c == 99) {
    result = 1;
    return;
  }

  if (arr1[c]) solve(arr1[c]);
  if (arr2[c]) solve(arr2[c]);

  return;
}

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> t >> N;

    init();

    int begin = 0;
    int end = 0;

    for (int n = 0; n < N; n++) {
      cin >> begin >> end;

      if (!arr1[begin])
        arr1[begin] = end;
      else
        arr2[begin] = end;
    }

    solve(0);

    cout << '#' << t << ' ' << result << '\n';
  }
  return 0;
}