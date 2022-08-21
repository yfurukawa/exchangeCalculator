#include <iostream>
#include "DstCurrencyTest.h"

DstCurrencyTest::DstCurrencyTest() : sut(NULL){

}

DstCurrencyTest::~DstCurrencyTest() {

}

void DstCurrencyTest::SetUp() {
	sut = new DstCurrency();
}

void DstCurrencyTest::TearDown() {
	delete sut;
}

TEST_F (DstCurrencyTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
