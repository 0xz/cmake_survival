

# Address Sanitizer build

Automatic stack traces for various runtime errors, segfaults, use-after-free, memory leaks, etc

Reusing what already exists:
https://github.com/arsenm/sanitizers-cmake


May require exporting `LD_PRELOAD` to asan library.

```bash
GCC_ASAN_PRELOAD=$(gcc -print-file-name=libasan.so)
CLANG_ASAN_PRELOAD=$(clang -print-file-name=libclang_rt.asan-x86_64.so)
LD_PRELOAD=$CLANG_ASAN_PRELOAD ./sanitizer # if clang
```
