#include <iostream>
#include "ExchangeRateTest.h"

ExchangeRateTest::ExchangeRateTest() : sut(NULL){

}

ExchangeRateTest::~ExchangeRateTest() {

}

void ExchangeRateTest::SetUp() {
	sut = new ExchangeRate();
}

void ExchangeRateTest::TearDown() {
	delete sut;
}

TEST_F (ExchangeRateTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
