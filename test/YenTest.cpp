#include <iostream>
#include <string>
#include "YenTest.h"
#include "../src/ExchangeRate.h"

YenTest::YenTest() : sut(nullptr){

}

YenTest::~YenTest() {

}

void YenTest::SetUp() {
}

void YenTest::TearDown() {
	delete sut;
}

TEST_F(YenTest, testCreateYenInstance_YenOnly)
{
    sut = new Yen("100");
    EXPECT_EQ(sut->value(), 100);
}

TEST_F(YenTest, testCreateYenInstance_YenWithSen)
{
    EXPECT_THROW(new Yen("100.01"), std::invalid_argument);
}

TEST_F(YenTest, testCreateYenInstance_YenWith99Sen)
{
    EXPECT_THROW(new Yen("100.99"), std::invalid_argument);
}

TEST_F(YenTest, testCreateYenInstance_WithMinusValue_throwException)
{
    EXPECT_THROW( new Yen("-100.01"), std::invalid_argument );
}

TEST_F(YenTest, testCreateYenInstance_WithMinusValue_exceptionMessage)
{
    try {
        sut = new Yen("-100.01");
    }
    catch( const std::invalid_argument& e ) {
        std::string exceptionMessage( e.what() );
        EXPECT_EQ( exceptionMessage, "initialAoumt must be positive value.");
    }
}

TEST_F(YenTest, testCreateYenInstance_WithZero_noThrowException)
{
    EXPECT_NO_THROW( new Yen("0.00") );
}

TEST_F(YenTest, testCreateYenInstance_WithMinusZero_noThrowException)
{
    EXPECT_NO_THROW( new Yen("-0.00") );
}

TEST_F(YenTest, testMultiple_ThrowException)
{
    sut = new Yen("100");
    ExchangeRate* rate = new ExchangeRate("0.007662");
    Currency* dstCurrency = new Yen( "0" );
    EXPECT_THROW(sut->exchange( dstCurrency, rate ), std::out_of_range);
    delete dstCurrency;
    delete rate;
}

TEST_F(YenTest, testMultiple_NoThrowException) {
    sut = new Yen("900");
    ExchangeRate* rate = new ExchangeRate("0.007662");
    Currency* dstCurrency = new Yen( "0" );
    Currency* result = sut->exchange( dstCurrency, rate );
    EXPECT_EQ(result->value(), 6.90);
    delete dstCurrency;
    delete rate;
}
