#include <string>
#include <iostream>

using std::string, std::cout, std::endl;

bool checkMask(uint32_t m){
    uint32_t idx = 1;
    
    while (idx < (1 << 31) && (m & idx) == 0)
    {
        idx = idx << 1;
    }
    while (idx < (1 << 31) && (m & idx) == idx)
    {
        idx = idx << 1;
    }
    cout << idx << '\t' << (uint32_t)(1 << 31) << endl;
    
    return idx == static_cast<uint32_t> (1 << 31) && (m & idx) == idx;
}

bool checkMask(string m){
    size_t max_length = 32;
    if (m.length() != max_length){
        return false;
    }

    size_t idx = 0;

    while (idx < max_length && m[idx] == '1')
    {
        ++idx;
    }
    while (idx < max_length && m[idx] == '0')
    {
        ++idx;
    }
    
    return idx == max_length ? 1 : 0;
}

