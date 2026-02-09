#include <iostream>

#include "test.hpp"
#include "stack.hpp"

void ExtraLines(int n)
{
    for (int i = 0; i < n; i++)
        std::cout << std::endl;
}

void test1()
{
    Stack st1(5, false);

    for (int i = 0; i < 10; i++)
    {
        st1._Push(i);
    }

    for (int i = 10; i < 200; i++)
    {
        st1._Push(i);
    }

    ExtraLines(3);

    st1._PrintStack();
    ExtraLines(3);

    std::cout << "New Max size: " << st1._maxSize << std::endl;
    std::cout << "Empty Spaces: " << st1._GetSpaceAvailable() << std::endl;
}

void test2()
{

    // Constructing stacks
    Stack cards0;
    Stack cards1(10, false);
    Stack cards2(1, false);

    // Testing if initial sizing is working
    std::cout << "Cards0 , Cards1, Cards2  maxsize : " << cards0._maxSize << ", "
            << cards1._maxSize << ", " << cards2._maxSize << std::endl;
    ExtraLines(3);

    // Pushing elements to stacks
    cards0._Push(67.f);
    for (int i = 0; i < 10; i++)
        cards1._Push(i * 2 + 1);
    for (int i = 0; i < 1; i++)
        cards2._Push((i + 1) * 69);

    // Testing for empty stacks
    std::cout << "Cards0 items:" << std::endl;
    for (int i = 0; i < cards0._size; i++)
        std::cout << i << " th item : " << cards0._Pop() << std::endl;
    ExtraLines(3);

    // Testing if search works
    float value_to_find0 = 50.f;
    float value_to_find1 = 11.f;
    float value_to_find2 = 69.f;
    std::cout << "Finding : " << value_to_find0 << " and " << value_to_find1
            << " and " << value_to_find2 << std::endl;
    std::cout << "Found at (from top) :" << cards0._Search(value_to_find0) << " and " << cards1._Search(value_to_find1) << " and " << cards2._Search(value_to_find2) << std::endl;
    ExtraLines(3);

    // Testing if Top and Pop works
    std::cout << std::endl;
    std::cout << "Cards1 items:" << std::endl;
    for (int i = 0; i < cards1._size; i++)
    {
        if (i % 2 == 0)
            std::cout << i << " th Top :" << cards1._Top() << std::endl;
        std::cout << i << " th item : " << cards1._Pop() << std::endl;
    }
    ExtraLines(3);
}