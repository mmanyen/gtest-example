#include "gtest/gtest.h"
#include "RPS.h"

TEST(blaTest, test1) 
{
    EXPECT_STREQ (returnPassedString("Blah"), "Blah");
}