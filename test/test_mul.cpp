#include <gtest/gtest.h>
#include "mul.h"

TEST(MulTest, HandlesPositiveInput)
{
int multiplicacion = mul(2, 7);

EXPECT_EQ(multiplicacion, 14);
}
