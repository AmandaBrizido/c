#include <stdio.h>
#include <stdbool.h>

int main() {
  bool isLoggedIn = false;
  bool isAdmin = true;
  int securityLevel = 2;

  if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
    printf("Access granted\n");
  } else {
    printf("Access denied\n");
  }

  return 0;
}
