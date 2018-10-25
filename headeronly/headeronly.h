#pragma once

inline void* inline_func() {
  static int i = 0;
  return &i;
}