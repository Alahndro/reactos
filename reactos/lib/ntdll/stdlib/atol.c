/* Copyright (C) 1994 DJ Delorie, see COPYING.DJ for details */
#include <ntdll.h>

/*
 * @implemented
 */
long
atol(const char *str)
{
  return strtol(str, 0, 10);
}
