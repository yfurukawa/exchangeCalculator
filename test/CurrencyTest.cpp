#include <iostream>
#include "CurrencyTest.h"

CurrencyTest::CurrencyTest() : sut(NULL){

}

CurrencyTest::~CurrencyTest() {

}

void CurrencyTest::SetUp() {
	sut = new Currency();
}

void CurrencyTest::TearDown() {
	delete sut;
}

TEST_F (CurrencyTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
