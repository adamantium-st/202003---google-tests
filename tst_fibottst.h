#ifndef TST_MAXMINVALUES_H
#define TST_MAXMINVALUES_H
#include "fibo.h"
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

using namespace testing;

class fibo : public Test
{
public:
    Fibo my_generate;
};

TEST_F(fibo, oneValue1)
{
    EXPECT_EQ(my_generate.generate(0), 0);
}

TEST_F(fibo, oneValue2)
{
    EXPECT_EQ(my_generate.generate(1), 1);
}


TEST_F(fibo, oneValue3)
{
    EXPECT_EQ(my_generate.generate(3), 1);
}
#endif // TST_MAXMINVALUES_H
