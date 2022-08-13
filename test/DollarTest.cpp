#include <iostream>
#include "DollarTest.h"

DollarTest::DollarTest() : sut(NULL)
{
}

DollarTest::~DollarTest()
{
}

void DollarTest::SetUp()
{
}

void DollarTest::TearDown()
{
    delete sut;
}

TEST_F(DollarTest, testCreateDollarInstance_DollarOnly)
{
    sut = new Dollar("100");
    EXPECT_EQ(sut->value(), 100);
}

TEST_F(DollarTest, testCreateDollarInstance_DollarWithCents)
{
    sut = new Dollar("100.01");
    EXPECT_EQ(sut->value(), 100.01);
}
