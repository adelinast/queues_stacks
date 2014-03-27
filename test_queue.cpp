#include "gtest/gtest.h"
#include "queue.h"

TEST(Stack, stackEmpty)
{
	Stack<int> s;
	
	EXPECT_TRUE(s.empty());
}

TEST(Stack, stackNotEmpty)
{
	Stack<int> s;
	s.push(1);
	EXPECT_FALSE(s.empty());
}

TEST(Stack, stackPushPopSameElement)
{
	Stack<int> s;
	s.push(1);
	EXPECT_EQ(1, s.pop());
}

TEST(Stack, stackPushPopTwoEl)
{
	Stack<int> s;
	s.push(1);
	s.push(2);
	EXPECT_EQ(2, s.pop());
}

TEST(Stack, stackPushPopFiveEl)
{
	Stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	EXPECT_EQ(5, s.pop());
}

TEST(Queue, oneElement)
{
	Queue<int> q;
	q.enqueue(1);

	EXPECT_EQ(1, q.dequeue());
}

TEST(Queue, twoElements)
{
	Queue<int> q;
	q.enqueue(1);
	q.enqueue(2);

	EXPECT_EQ(1, q.dequeue());

	EXPECT_EQ(2, q.dequeue());
}

int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv); 
    RUN_ALL_TESTS();
	std::getchar(); // keep console window open until Return keystroke

	return 0;
}