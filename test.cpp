#include "main.cpp"
#include <gtest/gtest.h>

TEST(TestCaseCI1, TestOne){
	 ASSERT_EQ(6, toTest(6));
}

TEST(TestCaseCI1, TestTwo){
	 ASSERT_EQ(1, toTest2(6,5));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
