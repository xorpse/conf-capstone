#include <stdlib.h>
#include <capstone/capstone.h>

#ifndef CAPSTONE_ENGINE_H
#error "No capstone header"
#endif

int test() {
  csh ch;
  if (cs_open(CS_ARCH_X86, CS_MODE_32, &ch) != CS_ERR_OK) {
    return EXIT_FAILURE;
  }

  if (cs_close(&ch) != CS_ERR_OK) {
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
