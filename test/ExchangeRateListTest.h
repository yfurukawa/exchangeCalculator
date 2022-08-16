#ifndef EXCHANGERATELISTTEST_H_
#define EXCHANGERATELISTTEST_H_

#include <gtest/gtest.h>
#include "ExchangeRateList.h"

class ExchangeRateListTest : public ::testing::Test {
protected:
	ExchangeRateList* sut;
	void SetUp();
	void TearDown();

public:
	ExchangeRateListTest();
	virtual ~ExchangeRateListTest();

};

#endif
