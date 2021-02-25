#include <iostream>

#include <memory>

#include <array>
#include <algorithm>

#include <vector>

#include <algorithm>
#include <list>

/*
void printStack(const std::vector<int>& stack)
{
	for (const auto& element : stack)
		std::cout << element << " ";
	std::cout << "(capacity = " << stack.capacity() << " length =" << stack.size() << ")\n ";
};
*/

using namespace std;


int main()
{
	/*
	//cout array
	std::array<int, 5> arr{ 8, 4 ,2, 7, 1 };
	std::sort(arr.begin(), arr.end());

	for (int i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << " ";
	}

	for (auto it = arr.begin(); it < arr.end(); it++)
	{
		std::cout << *it << " ";
	}

	for (const auto& element : arr)
	{
		std::cout << element << " ";
	}*/
	/*
	//vector and stack
	std::vector<int> stack;

	stack.reserve(7);
	printStack(stack);

	stack.push_back(1);
	printStack(stack);

	stack.push_back(4);
	printStack(stack);

	stack.push_back(7);
	printStack(stack);

	stack.push_back(1);
	printStack(stack);

	std::cout << "top = " << stack.back() << std::endl;

	stack.pop_back();
	stack.pop_back();
	stack.pop_back();
	stack.pop_back();
	stack.shrink_to_fit();
	printStack(stack);
	*/
	//deque !add front!
	//list !we have pointer on begin and end!
/*
	std::list<int> l = { 7,5,16,4 };
	l.push_front(24);

	l.push_back(13);

	auto it = std::find(l.begin(), l.end(), 16);

	//change 16 on 40
	if (it != l.end()) {
		*it = 40;
	}

	for (const auto& n : l)
		std::cout << n << " ";
	std::cout << "\n";
*/
//Homework

	vector <int> stack1; // with out reserve
	vector <int> stack2; // with reserve
	for (int i = 0; i < 20; i++) {
		stack1.push_back(i);
		cout << stack1.capacity() << " ";
	};
	cout << "\n";
	stack2.reserve(20);
	for (int i = 0; i < 20; i++) {
		stack2.push_back(i);
		cout << stack2.capacity() << " ";

	};
	/*
		 conclusion:
		 with reserve at the end we have: 20
		 with out : 28 (1 2 3 4 6 6 9 9 9 13 13 13 13 19 19 19 19 19 19 28)
		 so increases by one and a half(1.5) times with rounding up

	*/	
	vector <int> stack3 = {1, 2, 3, 4, 5, 6};

	cout << "\n" << stack3.capacity() << " ";
	stack3.push_back(7);
	cout << stack3.capacity() << " ";
	stack3.push_back(8);
	cout << stack3.capacity() << " ";
	stack3.push_back(9);
	cout << stack3.capacity() << " ";
	stack3.push_back(10);
	cout << stack3.capacity() << " ";
	vector <int> stack4 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << "\n" << stack4.capacity();



}

