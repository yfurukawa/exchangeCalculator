#include <iostream>
#include <string>
#include "Exchanger.h"

int main( int argc, char *argv[] ) {
    Exchanger exchanger;
    std::string amount( argv[1] );
    return exchanger.exchange( amount );
}
