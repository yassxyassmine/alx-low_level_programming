#include <stdio.h>

void print_to_98(int n) {
  printf("%d", n);
  if (n <= 98) {
    for (int i = n + 1; i <= 98; i++) {
      printf(", %d", i);
    }
  } else {
    for (int i = n - 1; i >= 98; i--) {
      printf(", %d", i);
    }
  }
  printf("\n");
}

int main() {
  print_to_98(5);
  print_to_98(50);
  print_to_98(98);
  print_to_98(-10);
  return 0;
}
