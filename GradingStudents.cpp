#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n, a;
  float go;
  scanf("%d", &n);
  while (n--) {
    scanf("%d\n", &a);
    if (a > 37 && a < 40) {
      printf("40\n");
    } else if (a <= 37) {
      printf("%d\n", a);
    } else {
      go = (float)a / 5;
      go = ceil(go);
      go = go * 5;
      if (go - a < 3) {
        a = (int)go;
      }
      printf("%d\n", a);
    }
  }
  return 0;
}
