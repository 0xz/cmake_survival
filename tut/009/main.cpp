
#include <string>
#include <iostream>

#include "dict.hpp"

int main(int argc, char* argv[]){

    using Dict = cppdict::Dict<int, std::string>;

    Dict dict{};
    dict["hello"] = std::string{"world"};
    dict["random"] = 4;

    dict.visit([](auto const & key, auto const & val) {
        std::cout << key << " " << val << std::endl;
    });

    return 0;
}
