#include <iostream>
#include "ExchangerTest.h"
#include "mock/ExchangeRateUpdaterMock.h"

ExchangerTest::ExchangerTest() : sut(NULL){

}

ExchangerTest::~ExchangerTest() {

}

void ExchangerTest::SetUp() {
    ExchangeRateUpdater* updaterMock = new ExchangeRateUpdaterMock();
	sut = new Exchanger( updaterMock );
}

void ExchangerTest::TearDown() {
	delete sut;
}

TEST_F (ExchangerTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
