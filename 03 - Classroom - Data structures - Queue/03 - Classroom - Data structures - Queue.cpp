#include <iostream>
#include <queue>
#include <stack>

int main()
{
    std::queue<int> intQueue;
    std::stack<int> intStack;

    for (int i = 0; i < 10; ++i)
    {
        intQueue.push(i);
        intStack.push(i);
    }

    do
    {
    	std::cout << "Queue line" << std::endl;
    	std::cout << intQueue.front() << std::endl;
        //std::cout << intQueue.back() << std::endl;
		intQueue.pop();

     	std::cout << "Stack line" << std::endl;
   		std::cout << intStack.top() << std::endl;
        intStack.pop();

    } while (!intQueue.empty());
    
}
