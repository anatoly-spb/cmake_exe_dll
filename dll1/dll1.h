#pragma once

#ifdef DLL1_EXPORT
#define DLL1_API __declspec(dllexport)
#else
#define DLL1_API __declspec(dllimport)
#endif

namespace dll1 {
  DLL1_API void* foo();

  template<typename T>
  size_t boo(T);

  template DLL1_API size_t boo<int>(int);
}
