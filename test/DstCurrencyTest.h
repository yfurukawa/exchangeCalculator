#ifndef DSTCURRENCYTEST_H_
#define DSTCURRENCYTEST_H_

#include <gtest/gtest.h>
#include "DstCurrency.h"

class DstCurrencyTest : public ::testing::Test {
protected:
	DstCurrency* sut;
	void SetUp();
	void TearDown();

public:
	DstCurrencyTest();
	virtual ~DstCurrencyTest();

};

#endif
