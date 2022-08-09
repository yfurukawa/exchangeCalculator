#ifndef YENTEST_H_
#define YENTEST_H_

#include <gtest/gtest.h>
#include "Yen.h"

class YenTest : public ::testing::Test {
protected:
	Yen* sut;
	void SetUp();
	void TearDown();

public:
	YenTest();
	virtual ~YenTest();

};

#endif
