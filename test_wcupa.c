#include "types.h"
#include "stat.h"
#include "user.h"
 
int main(void) {
  printf(1, "West Chester University was founded in %d\n", wcupa());
  printf(1, "Current readcount: %d\n", getreadcount());
  exit();
}
