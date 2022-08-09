#ifndef EXCHANGERTEST_H_
#define EXCHANGERTEST_H_

#include <gtest/gtest.h>
#include "Exchanger.h"

class ExchangerTest : public ::testing::Test {
protected:
	Exchanger* sut;
	void SetUp();
	void TearDown();

public:
	ExchangerTest();
	virtual ~ExchangerTest();

};

#endif
