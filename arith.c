
#include <math.h>
#include <incr.h>
#include <decr.h>
#include <arith.h>

int add(int a, int b)
{
   if (a < b)
      return add(b, a);
   else if (b == 0)
      return a;
   else
      return add(incr(a), decr(b));
}

int sub(int a, int b)
{
   if (a < b)
      return -sub(b, a);
   else if (b == 0)
      return a;
   else
      return sub(decr(a), decr(b));
}
