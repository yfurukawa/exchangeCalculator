#include <iostream>
#include "ExchangeRateUpdaterTest.h"

ExchangeRateUpdaterTest::ExchangeRateUpdaterTest() : sut(NULL){

}

ExchangeRateUpdaterTest::~ExchangeRateUpdaterTest() {

}

void ExchangeRateUpdaterTest::SetUp() {
	sut = new ExchangeRateUpdater();
}

void ExchangeRateUpdaterTest::TearDown() {
	delete sut;
}

TEST_F (ExchangeRateUpdaterTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
