#include "types.h"
#include "stat.h"
#include "user.h"
 
int main(void) {
  printf(1, "West Chester University was founded in %d\n", wcupa());
  printf(1, "readcount before: %d\n", getreadcount());
  sys_read();
  printf(1, "readcount after: %d\n", getreadcount());
  exit();
}
