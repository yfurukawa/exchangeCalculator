#include <iostream>
#include <stdexcept>
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

TEST_F(DollarTest, testCreateDollarInstance_WithMinusValue_throwException)
{
    EXPECT_THROW(new Dollar("-100.01"), std::out_of_range);
}

TEST_F(DollarTest, testCreateDollarInstance_WithMinusValue_exceptionMessage)
{
    try {
        sut = new Dollar("-100.01");
    }
    catch( const std::out_of_range& e ) {
        std::string exceptionMessage( e.what() );
        EXPECT_EQ( exceptionMessage, "initialAoumt must be positive value.");
    }
    
}

