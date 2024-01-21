
#include <chrono>
#include <vector>
#include <cstdint>
#include <iostream>
#include <exception>
#include <thread>


std::size_t static constexpr N_DOUBLES = 1e8;

double memory_consumption(){
    return N_DOUBLES * 3 * sizeof(double) / 1e9;
}

auto now_in_milliseconds(){
    return std::chrono::high_resolution_clock::now();
}

template<typename Time_t>
auto total_runtime(Time_t start_milliseconds){
    auto now = now_in_milliseconds();
    return std::chrono::duration_cast<std::chrono::microseconds>(now - start_milliseconds).count();
}

int main(int argc, char* argv[]){
    auto start_time = now_in_milliseconds();

    std::vector<double> const d0(N_DOUBLES, 10);
    std::vector<double> const d1(N_DOUBLES, 11);
    std::vector<double> d2(N_DOUBLES, 0);        // memory usage: N_DOUBLES * 3 * sizeof(double) / 1e9 == 2.4GB

    for(std::size_t i = 0; i < N_DOUBLES; ++i)
        d2[i] = d0[i] + d1[i];

    for(auto const& d : d2)
        if(d != 21)
            throw std::runtime_error("FAIL! "  + std::to_string(d));

    return 0;
}
