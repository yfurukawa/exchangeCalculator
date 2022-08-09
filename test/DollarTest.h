#ifndef DOLLARTEST_H_
#define DOLLARTEST_H_

#include <gtest/gtest.h>
#include "Dollar.h"

class DollarTest : public ::testing::Test {
protected:
    Dollar* sut;
    void SetUp();
    void TearDown();

public:
    DollarTest();
    virtual ~DollarTest();

};

#endif
