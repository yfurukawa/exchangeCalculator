#ifndef EXCHANGERATEUPDATERTEST_H_
#define EXCHANGERATEUPDATERTEST_H_

#include <gtest/gtest.h>
#include "ExchangeRateUpdater.h"

class ExchangeRateUpdaterTest : public ::testing::Test {
protected:
	ExchangeRateUpdater* sut;
	void SetUp();
	void TearDown();

public:
	ExchangeRateUpdaterTest();
	virtual ~ExchangeRateUpdaterTest();

};

#endif
