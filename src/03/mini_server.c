#include <stdio.h>
#include <stdlib.h>
#include <fcgi_stdio.h>

int main() {
  while (FCGI_Accept() >= 0) {
    printf("Content-Type: text/html\r\n\r\n");
    printf("<html><body><h1>Hello World!</h1></body></html>\n");
    fflush(stdout);
  }
  return 0;
}
