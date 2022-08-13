#ifndef EXCHANGERATETEST_H_
#define EXCHANGERATETEST_H_

#include <gtest/gtest.h>
#include "ExchangeRate.h"

class ExchangeRateTest : public ::testing::Test {
protected:
	ExchangeRate* sut;
	void SetUp();
	void TearDown();

public:
	ExchangeRateTest();
	virtual ~ExchangeRateTest();

};

#endif
