#include <iostream>

#include "mylib/mylib_version.h"
#include "mylib/mylib.hpp"
#include "mylib/mylib.h"

int main() {
    std::cout << "mylib version: " << MYLIB_VERSION_MAJOR << '.'
              << MYLIB_VERSION_MINOR << '.' << MYLIB_VERSION_PATCH << std::endl;

    if (mylib::IsExOptVarDefined()) {
        std::cout << "\nEX_OPT_VAR defined" << std::endl;
    } else {
        std::cout << "\nEX_OPT_VAR not defined" << std::endl;
    }

    std::cout << "\nCall mylib_c_func(\"hi\", 3)" << std::endl;
    std::cout << "return: " << mylib_c_func("hi", 3) << std::endl;

    std::cout << "\nCall mylib::CppFunc(\"Hello\", 2)" << std::endl;
    std::cout << "return: " << mylib::CppFunction("Hello", 2) << std::endl;

    return 0;
}