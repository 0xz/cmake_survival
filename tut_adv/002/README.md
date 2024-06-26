

# Optimizations flags for GCC/Clang++

Example of automatic vectorization

# Exercise - deduplicate lines 6 to 27 with a function

```
function(add_my_exe target src cxx_flags link_flags)
   # fill this in
endfunction(add_my_exe)
```

## Appendix:

GCC flags
https://gcc.gnu.org/onlinedocs/gcc-12.2.0/gcc/Optimize-Options.html

Checking what define macros are available per compile string

https://stackoverflow.com/a/2224357/795574

eg.

check if your CPU/compiler supports Advanced Vector Extensions
https://en.wikipedia.org/wiki/Advanced_Vector_Extensions

```bash
echo | g++ -dM -E -x c++ -march=native - | grep AVX
```

Command reference: https://stackoverflow.com/a/2224357/795574

if so, the output might look like

```cxx
#define __AVX__ 1
#define __AVX2__ 1
```

Meaning your system should be able to run AVX 2 instructions
as opposed to perhaps just SSE2 instructions
https://en.wikipedia.org/wiki/SSE2


try execute `diff_defines.py` to see what's enabled via `-march=native`

```bash
python3 tut_adv/002/diff_defines.py
```

Function solution:
https://gist.github.com/PhilipDeegan/c3d098f8fded6978856b290b9ed60590
