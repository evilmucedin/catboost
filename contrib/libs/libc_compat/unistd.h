#pragma once

#if defined(__has_include_next)
#  if __has_include_next(<unistd.h>)
#    include_next <unistd.h>
#  else
#    include <unistd.h>
#  endif
#else
#  include <unistd.h>
#endif

#define issetugid() 0
