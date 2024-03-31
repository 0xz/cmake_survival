
// #include "lib1.hpp" // not visible from here
#include "lib2.hpp"
#include <iostream>


int main(int argc, char* argv[]){
    std::cout << __FILE__ << " " << __LINE__ << std::endl;

    lib2_ns::func();
}

