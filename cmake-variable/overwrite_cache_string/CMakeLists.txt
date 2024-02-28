set(MY_VAR "first set" CACHE STRING "docs...")
set(My_VAR "second set" CACHE STRING "docs...")
message("after 1st and 2nd set: ${MY_VAR}")

set(MY_VAR "third force set" CACHE STRING "docs..." FORCE)
message("after 3rd forced set: ${MY_VAR}")

set(MY_VAR "fourth normal (cache) set" CACHE STRING "docs...")
message("after 4th normal (cache) set: ${MY_VAR}")
