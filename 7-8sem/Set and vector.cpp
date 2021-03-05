/*
    My results: 
	    SET: 369 ms
		VECTOR: 264 ms
		VECTOR(with reserve): 255 ms

       As a result, the leader is VECTOR(with reserve).
*/




#include <vector>
#include <set>
#include <iostream>
#include <ctime>
#include <algorithm>



int main()
{
	std::set<int> set;
	std::vector<int> vector;
	//vector.reserve(100000);
	int b[100001];
	
	for (int i = 0; i <= 100000; i++)
		b[i] = rand();
	
	clock_t time1 = clock();
	time1 = clock();
	
	for (int i = 0; i<=100000; i++)
	    set.insert(b[i]);

	std::cout << "SET: " << clock() - time1 << std::endl;
	
	clock_t time2 = clock();
	time2 = clock();
	for (int i = 0; i <= 100000; i++)
	     vector.push_back(b[i]);
	std::sort(vector.begin(),vector.end());
	std::cout << "VECTOR: " << clock() - time2 << std::endl;
}