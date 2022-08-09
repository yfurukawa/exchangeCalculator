#include <iostream>
#include "Dollar.h"

int main( int argc, char *argv[] ) {
    Dollar *dollar = new Dollar(100.5);
    std::cout << dollar->value() << std::endl;
    return 0;
}