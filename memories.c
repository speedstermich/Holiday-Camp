#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
  int i, j;
  int range, scan, test, flag;
  int arr[100000];
  scanf("%d", &range);
  for (i = 0; i < range; i++) {
    scanf("%d ", &flag);
    arr[flag]++;
  }
  scanf("%d", &scan);
  if (scan >= 1 && scan <= 100000) {
    for (j = 0; j < scan; j++) {
      scanf("%d", &test);
      if (!arr[test]) {
        printf("NOT PRESENT\n");
      } else {
        printf("%d\n", arr[test]);
      }
    }
  }
  return 0;
  // printf("%d ", arr[5]);
}
