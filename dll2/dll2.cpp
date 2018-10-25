#include "dll2.h"

#include "headeronly.h"

namespace dll2 {
   void* foo() {
     return inline_func();
   }
}
