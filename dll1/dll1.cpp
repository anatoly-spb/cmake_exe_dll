#include "dll1.h"

#include "headeronly.h"

namespace dll1 {
   void* foo() {
     return inline_func();
   }

   template<typename T>
   size_t boo(T)
   {
     return sizeof(T);
   }

  template<typename T>
  void knowhow<T>::foo()
   {
     // secret
   }

  template struct knowhow<int>;

}
