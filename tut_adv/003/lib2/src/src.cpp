
#include "lib1.hpp"
#include "lib2.hpp"

#include <iostream>

namespace lib2_ns{

void func(){
    std::cout << __FILE__ << " " << __LINE__ << std::endl;
    lib1_ns::func();
}

} // end namespace lib2_ns

