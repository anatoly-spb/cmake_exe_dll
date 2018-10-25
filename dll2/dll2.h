#pragma once

#ifdef DLL2_EXPORT
#define DLL2_API __declspec(dllexport)
#else
#define DLL2_API __declspec(dllimport)
#endif

namespace dll2 {
  DLL2_API void* foo();
}
