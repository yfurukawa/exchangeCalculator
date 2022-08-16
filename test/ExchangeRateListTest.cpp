#include <iostream>
#include "ExchangeRateListTest.h"

ExchangeRateListTest::ExchangeRateListTest() : sut(NULL){

}

ExchangeRateListTest::~ExchangeRateListTest() {

}

void ExchangeRateListTest::SetUp() {
	sut = new ExchangeRateList();
}

void ExchangeRateListTest::TearDown() {
	delete sut;
}

TEST_F (ExchangeRateListTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
