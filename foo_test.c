#include "lib.h"

int
main (int argc, char** argv)
{
    if (foo() == 0)
      {
        return 0;
      }
    else
      {
        return 1;
      }
}