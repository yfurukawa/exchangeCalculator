#include <iostream>
#include "YenTest.h"

YenTest::YenTest() : sut(NULL){

}

YenTest::~YenTest() {

}

void YenTest::SetUp() {
	sut = new Yen();
}

void YenTest::TearDown() {
	delete sut;
}

TEST_F (YenTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
