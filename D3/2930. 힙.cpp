#include <cstdio>
#include <queue>

using namespace std;

int T, N;
int result;

int main() {
  scanf("%d", &T);

  for (int t = 1; t <= T; t++) {
    printf("#%d", t);

    scanf("%d", &N);

    priority_queue<int, vector<int>> pq;

    int x;

    int command = 0;

    for (int n = 0; n < N; n++) {
      scanf("%d", &command);

      if (command == 1) {
        scanf("%d", &x);

        pq.push(x);
      } else {
        if (pq.empty())
          printf(" -1");

        else {
          printf(" %d", pq.top());
          pq.pop();
        }
      }
    }

    printf("\n");
  }

  return 0;
}