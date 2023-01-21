#include <gtest/gtest.h>
#include "../list.h"

TEST(LEVEL1, test1) {
	push_back(1);
	push_front(2);
	EXPECT_EQ(front(), 2);
	EXPECT_EQ(back(), 1);
	pop_back();
	pop_back();
}

TEST(LEVEL1, test2) {
	push_front(1);
	push_front(2);
	EXPECT_EQ(back(), 1);
	EXPECT_EQ(front(), 2);
	pop_front();
	pop_back();
}

TEST(LEVEL1, test3) {

}


int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


