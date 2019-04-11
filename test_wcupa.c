#include "types.h"
#include "stat.h"
#include "user.h"
 
int main(void) {
  char buf[100];

  printf(1, "West Chester University was founded in %d\n", wcupa());
  printf("readcount before: %d\n", getreadcount());
  sys_read();
  printf("readcount after: %d\n", getreadcount());
  exit(0);
}
