#ifndef TST_FIBOTTST_H
#define TST_FIBOTTST_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

using namespace testing;

TEST(testGoogleFibo, fibotTst)
{
    EXPECT_EQ(1, 1);
    ASSERT_THAT(0, Eq(0));
}

#endif // TST_FIBOTTST_H
