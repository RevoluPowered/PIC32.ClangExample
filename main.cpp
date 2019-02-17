#include <iostream>
extern "C" {
#include <stdarg.h>
#include <stdlib.h>
#include <stdint.h>
#include "system/int/sys_int.h"
#include "peripheral/rtcc/plib_rtcc.h"
#include "peripheral/devcon/plib_devcon.h"
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}