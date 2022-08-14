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
    ExchangeRate rate("0.007662");
    EXPECT_THROW(sut->exchange( rate ), std::out_of_range);
}

TEST_F(YenTest, testMultiple_NoThrowException) {
    sut = new Yen("900");
    ExchangeRate rate("0.007662");
    Currency* result = sut->exchange( rate );
    EXPECT_EQ(result->value(), 6.90);
}
