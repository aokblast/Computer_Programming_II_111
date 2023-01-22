#include <gtest/gtest.h>
#include "../list.h"

TEST(LEVEL1, push_front) {
	EXPECT_EQ(begin(), end());
	push_front(1);
	EXPECT_EQ(front(), 1);
	push_front(2);
	EXPECT_EQ(front(), 2);
	auto cur = begin();
	EXPECT_NE(cur, end());
	EXPECT_EQ(data[cur], 2);
	pop_front();
	EXPECT_EQ(front(), 1);
	cur = begin();
	EXPECT_NE(cur, end());
	EXPECT_EQ(data[cur], 1);
	pop_front();
	EXPECT_EQ(begin(), end());
}

TEST(LEVEL1, push_back) {
	push_back(1);
	EXPECT_EQ(back(), 1);
	push_back(2);
	EXPECT_EQ(back(), 2);
	pop_back();
	EXPECT_EQ(back(), 1);
	pop_back();
	EXPECT_EQ(begin(), end());
}

TEST(LEVEL1, size) {
	EXPECT_EQ(size(), 0);
	push_back(1);
	EXPECT_EQ(size(), 1);
	push_front(2);
	EXPECT_EQ(size(), 2);
	pop_back();
	EXPECT_EQ(size(), 1);
	pop_back();
	EXPECT_EQ(size(), 0);
}

TEST(LEVEL1, clear) {
	EXPECT_EQ(size(), 0);
	push_front(1);
	push_front(2);
	EXPECT_EQ(size(), 2);
	clear();
	EXPECT_EQ(size(), 0);
}

TEST(LEVEL1, find) {
	EXPECT_EQ(find(2), end());
	push_front(2);
	push_back(1);
	auto cur = find(2);
	EXPECT_NE(cur, end());
	EXPECT_EQ(data[cur], 2);
	EXPECT_EQ(find(3), end());
	pop_back();
	EXPECT_EQ(find(1), end());
	cur = find(2);
	EXPECT_NE(cur, end());
	EXPECT_EQ(data[cur], 2);
	pop_back();
	EXPECT_EQ(find(2), end());
	EXPECT_EQ(find(1), end());
}

TEST(LEVEL1, insert) {
	insert(begin(), 3);
	EXPECT_EQ(front(), 3);
	EXPECT_EQ(back(), 3);
	insert(find(3), 2);
	EXPECT_EQ(front(), 2);
	EXPECT_EQ(back(), 3);
	pop_back();
	pop_back();
}

TEST(LEVEL1, erase) {
	push_front(2);
	push_front(3);
	erase(find(2));
	EXPECT_EQ(front(), 3);
	EXPECT_EQ(back(), 3);
	erase(find(3));
	EXPECT_EQ(size(), 0);
}

int main(int argc, char **argv) {
	init();
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


