
#include <vector>
#include <iostream>

int main(int argc, char* argv[]){

    std::vector<double> d(1, 1);
    std::cout << "HELLO " << d[1] << std::endl; // memory does not exist at index 1 / out of bounds
    return 0;
}

// sample stack trace given from this file
/*
=================================================================
==11138==ERROR: AddressSanitizer: heap-buffer-overflow on address 0x602000000018 at pc 0x5625eecf7416 bp 0x7ffdaae4b340 sp 0x7ffdaae4b338
READ of size 8 at 0x602000000018 thread T0
    #0 0x5625eecf7415 in main /path/to/tut_adv/000/main.cpp:8
    #1 0x7f33a52461c9 in __libc_start_call_main ../sysdeps/nptl/libc_start_call_main.h:58
    #2 0x7f33a5246284 in __libc_start_main_impl ../csu/libc-start.c:360
    #3 0x5625eecf71d0 in _start (/path/to/tut_adv/000/build/sanitizer+0x21d0)

0x602000000018 is located 0 bytes to the right of 8-byte region [0x602000000010,0x602000000018)
allocated by thread T0 here:
    #0 0x7f33a58b94c8 in operator new(unsigned long) ../../../../src/libsanitizer/asan/asan_new_delete.cpp:95
    #1 0x5625eecf8083 in std::__new_allocator<double>::allocate(unsigned long, void const*) /usr/include/c++/12/bits/new_allocator.h:137
    #2 0x5625eecf7fa7 in std::allocator_traits<std::allocator<double> >::allocate(std::allocator<double>&, unsigned long) /usr/include/c++/12/bits/alloc_traits.h:464
    #3 0x5625eecf7eed in std::_Vector_base<double, std::allocator<double> >::_M_allocate(unsigned long) /usr/include/c++/12/bits/stl_vector.h:378
    #4 0x5625eecf7c5e in std::_Vector_base<double, std::allocator<double> >::_M_create_storage(unsigned long) /usr/include/c++/12/bits/stl_vector.h:395
    #5 0x5625eecf78e6 in std::_Vector_base<double, std::allocator<double> >::_Vector_base(unsigned long, std::allocator<double> const&) /usr/include/c++/12/bits/stl_vector.h:332
    #6 0x5625eecf7642 in std::vector<double, std::allocator<double> >::vector(unsigned long, double const&, std::allocator<double> const&) /usr/include/c++/12/bits/stl_vector.h:566
    #7 0x5625eecf739a in main /path/to/tut_adv/000/main.cpp:7
    #8 0x7f33a52461c9 in __libc_start_call_main ../sysdeps/nptl/libc_start_call_main.h:58

SUMMARY: AddressSanitizer: heap-buffer-overflow /path/to/tut_adv/000/main.cpp:8 in main
Shadow bytes around the buggy address:
  0x0c047fff7fb0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x0c047fff7fc0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x0c047fff7fd0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x0c047fff7fe0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x0c047fff7ff0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
=>0x0c047fff8000: fa fa 00[fa]fa fa fa fa fa fa fa fa fa fa fa fa
  0x0c047fff8010: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
  0x0c047fff8020: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
  0x0c047fff8030: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
  0x0c047fff8040: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
  0x0c047fff8050: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
Shadow byte legend (one shadow byte represents 8 application bytes):
  Addressable:           00
  Partially addressable: 01 02 03 04 05 06 07
  Heap left redzone:       fa
  Freed heap region:       fd
  Stack left redzone:      f1
  Stack mid redzone:       f2
  Stack right redzone:     f3
  Stack after return:      f5
  Stack use after scope:   f8
  Global redzone:          f9
  Global init order:       f6
  Poisoned by user:        f7
  Container overflow:      fc
  Array cookie:            ac
  Intra object redzone:    bb
  ASan internal:           fe
  Left alloca redzone:     ca
  Right alloca redzone:    cb
==11138==ABORTING
*/

