#include <iostream>
#include <string>
#include "Exchanger.h"
#include "ExchangeRateUpdater.h"

int main( int argc, char *argv[] ) {
    ExchangeRateUpdater updater;
    Exchanger exchanger( &updater );

    std::string amount( argv[1] );
    return exchanger.exchange( amount );
}
