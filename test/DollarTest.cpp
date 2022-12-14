#include <iostream>
#include <stdexcept>
#include "DollarTest.h"
#include "../src/ExchangeRate.h"

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
    EXPECT_THROW( new Dollar("-100.01"), std::invalid_argument );
}

TEST_F(DollarTest, testCreateDollarInstance_WithMinusValue_exceptionMessage)
{
    try {
        sut = new Dollar("-100.01");
    }
    catch( const std::invalid_argument& e ) {
        std::string exceptionMessage( e.what() );
        EXPECT_EQ( exceptionMessage, "initialAoumt must be positive value.");
    }
}

TEST_F(DollarTest, testCreateDollarInstance_WithZero_noThrowException)
{
    EXPECT_NO_THROW( new Dollar("0.00") );
}

TEST_F(DollarTest, testExchange)
{
    sut = new Dollar("100.01");
    ExchangeRate* rate = new ExchangeRate("130.52");
    Currency* dstCurrency = new Dollar( "10.00" );
    Currency* result = sut->exchange( dstCurrency, rate );
    EXPECT_EQ(result->value(), 13053.31);
    delete dstCurrency;
    delete rate;
}

TEST_F(DollarTest, testNull)
{
    EXPECT_THROW( new Dollar( nullptr ), std::logic_error );
}

TEST_F(DollarTest, testEmpty)
{
    EXPECT_THROW( new Dollar(""), std::invalid_argument );
}

TEST_F(DollarTest, testCreateDollarInstance_withComma)
{
    EXPECT_THROW( new Dollar("1,000.01"), std::invalid_argument );
}

TEST_F(DollarTest, testCreateDollarInstance_withComma_exceptionMessage)
{
    try {
        sut = new Dollar("1,000.01");
    }
    catch( const std::invalid_argument& e ) {
        std::string exceptionMessage( e.what() );
        EXPECT_EQ( exceptionMessage, "initialAmount must not include comma.");
    }
}

TEST_F(DollarTest, testCreateDollarInstance_BigValue_ThorowException)
{
    EXPECT_THROW( new Dollar("1000000000000.1"), std::out_of_range );
}

TEST_F(DollarTest, testCreateDollarInstance_BigValue_exceptionMessage)
{
    try {
        sut = new Dollar("1000000000000.1");
    }
    catch( const std::out_of_range& e ) {
        std::string exceptionMessage( e.what() );
        EXPECT_EQ( exceptionMessage, "initialAoumt must be less than 1,000,000,000,000.");
    }
}

TEST_F(DollarTest, testCreateDollarInstance_withInvalidCharacter_throwException)
{
    EXPECT_THROW( new Dollar("$1000.01"), std::invalid_argument );
}

TEST_F(DollarTest, testLongstring_throwException)
{
    std::string str(100, 'a');
    EXPECT_THROW( new Dollar( str ), std::invalid_argument );
}
