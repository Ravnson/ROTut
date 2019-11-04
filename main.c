#include "stdio.h"
#include "stdlib.h"

void halloWelt(char* c) {

}


int main() {

  char* c = (char*)malloc(16*sizeof(char));
  halloWelt(c);
  printf("%s\n", c);
  free(c);

}

