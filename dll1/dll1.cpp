#include "dll1.h"

#include "headeronly.h"

namespace dll1 {
   void* foo() {
     return inline_func();
   }
}