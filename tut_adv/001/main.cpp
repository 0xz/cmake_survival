
#include <vector>
#include <iostream>

int main(int argc, char* argv[]){
    double * d = nullptr;
    std::cout << "World " << *d << std::endl;
    return 0;
}

// sample stack trace given from this file
/*
Program received signal SIGSEGV, Segmentation fault.
0x00005555555551f8 in main (argc=1, argv=0x7fffffffdf78) at /path/to/tut_adv/001/main.cpp:7
7     std::cout << "World " << *d << std::endl;
#0  0x00005555555551f8 in main (argc=1, argv=0x7fffffffdf78) at /path/to/tut_adv/001/main.cpp:7
*/
