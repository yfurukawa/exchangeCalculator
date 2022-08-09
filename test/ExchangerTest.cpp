#include <iostream>
#include "ExchangerTest.h"

ExchangerTest::ExchangerTest() : sut(NULL){

}

ExchangerTest::~ExchangerTest() {

}

void ExchangerTest::SetUp() {
	sut = new Exchanger();
}

void ExchangerTest::TearDown() {
	delete sut;
}

TEST_F (ExchangerTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
