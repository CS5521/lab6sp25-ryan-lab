#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char * argv[])
{
   printf(1, "%d\n", fkc());
   if (fork() == 0) {
       exit();
   } else if (fork() == 0) {
       exit();
   }

   printf(1, "%d\n", fkc());

   wait();
   wait();

   exit();
}

