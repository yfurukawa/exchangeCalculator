#ifndef CURRENCYTEST_H_
#define CURRENCYTEST_H_

#include <gtest/gtest.h>
#include "Currency.h"

class CurrencyTest : public ::testing::Test {
protected:
	Currency* sut;
	void SetUp();
	void TearDown();

public:
	CurrencyTest();
	virtual ~CurrencyTest();

};

#endif
