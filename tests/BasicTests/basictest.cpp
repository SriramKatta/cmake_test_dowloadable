#include "gtest/gtest.h"

#include "superfunc.hpp"



TEST(basictest, test1)
{
    ASSERT_EQ(return42(), 42) << "ERROR IN THE FUNCTION";
}