#include <iostream>
#include "ExchangeRateTest.h"

ExchangeRateTest::ExchangeRateTest() : sut(nullptr){

}

ExchangeRateTest::~ExchangeRateTest() {

}

void ExchangeRateTest::SetUp() {
}

void ExchangeRateTest::TearDown() {
    delete sut;
}

TEST_F (ExchangeRateTest, testCreateExchangeRate) {
    sut = new ExchangeRate("130.12");
    EXPECT_EQ(sut->value(), 130.12);
}
