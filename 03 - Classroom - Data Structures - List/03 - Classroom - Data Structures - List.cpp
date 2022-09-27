// 03 - Classroom - Data Structures - List.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <list>

#pragma region List
void showlist(const std::list<int>& list_)
{
	for (auto myList : list_)
	{
		std::cout << "List value : " << myList << std::endl;
	}
	std::cout << std::endl;
}

int main()
{
	std::list<int> myList1, myList2;

	for (int i = 0; i < 10; ++i)
	{
		myList1.push_back(i * 2);
		myList2.push_front(i * 3);
	}
	std::cout << "List 1 (myList1) is : " << std::endl;
	showlist(myList1);

	std::cout << "List 2 (myList2) is : ";
	showlist(myList2);

	std::cout << "myList1.front() : " << myList1.front() << std::endl;
	std::cout << "myList1.back() : " << myList1.back() << std::endl;

	std::cout << "myList1.pop_front() : " << std::endl;
	myList1.pop_front();
	showlist(myList1);

	std::cout << "myList2.pop_back() : " << std::endl;
	myList2.pop_back();
	showlist(myList2);

	std::cout << "myList1.reverse() : ";
	myList1.reverse();
	showlist(myList1);

	std::cout << "myList2.sort(): ";
	myList2.sort();
	showlist(myList2);

	return EXIT_SUCCESS;
}
#pragma endregion
