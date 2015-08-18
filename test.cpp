#include "main.cpp"
#include <gtest/gtest.h>

TEST(TestCaseCI1, TestOne){
	 ASSERT_EQ(6, toTest(6));
}

TEST(TestCaseCI1, TestTwo){
	 ASSERT_EQ(1, toTest2(6,5));
}

TEST(TestCaseCI1, TestThree){
	ASSERT_EQ(3,toTest(3));
}

TEST(TestCaseCI1, TestFour){
	ASSERT_EQ(2, toTest2(6,4));
	ASSERT_EQ(3, toTest2(3,4));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
