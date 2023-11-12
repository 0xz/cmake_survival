
#include <iostream>

#ifndef NDEBUG
#define BUILD "debug"
#else
#define BUILD "release"
#endif

int main(int argc, char* argv[]){

    std::cout << "HELLO " << BUILD << std::endl;

    return 0;
}
