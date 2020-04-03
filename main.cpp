#include "tst_maxminvalues.h"
#include "fibo.h"
#include <gtest/gtest.h>


Fibo Fibo01;

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
