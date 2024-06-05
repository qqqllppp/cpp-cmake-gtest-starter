#include <gtest/gtest.h>
#include "../lib/libcode.cpp"

TEST(TestSample, TestSum)
{
    int s = sum(2, 3);
    ASSERT_EQ(s, 5);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
