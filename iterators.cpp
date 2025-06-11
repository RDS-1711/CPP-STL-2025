#include<iostream>
#include<forward_list>
#include<algorithm>
#include<iterator>
#include<vector>
#include<list>
#include<array>

template <typename Container>
void displayElements(const Container &c)
{
	for (auto it = std :: begin(c); it != end(c); it++)
	{
		std::cout << *it << " "; 
	}

	std::cout << "\n";
}

int main()
{

	/* Input Iterator */

	std :: vector<int> numbers {1, 2, 3, 4, 5, 6, 7};
	for (auto it = numbers.begin(); it != numbers.end(); it++)
	{
		std::cout << *it << " ";
		(*it)++;
	}

	std :: cout << "\n";
	
	for (auto it= numbers.begin(); it != numbers.end(); it++)
	{
		std::cout << *it << " ";
	}
	
	std :: cout << "\n";

	/* Output Iterator */
	std :: vector<int> numbers_0;

	std :: generate_n (std::back_inserter(numbers_0), 20, [n = 10]() mutable {return n++;}); 
	for (auto num:numbers_0)
	{
		std::cout << num << " ";
	}

	std :: cout << "\n";


	/* Forward Iterator */
	std :: forward_list<int> fList = {10, 20, 30, 40};
	for (auto it = fList.begin(); it != fList.end(); it++)
	{
		std::cout << *it << " ";
	}
	
	std :: cout << "\n";

	for (auto it = fList.begin(); it != fList.end(); it++)
	{
		(*it) += 1;
	}

	for (auto it = fList.begin(); it != fList.end(); it++)
	{
		std::cout << *it << " ";
	}
	
	std :: cout << "\n";

	/* std :: begin and std :: end */
	std::vector<int> vec = {1, 2, 3, 4, 5};
	std::list<int> lst = {6, 7, 8, 9, 10};
	std::array<int, 5> arr = {11, 12, 13, 14, 15};

	displayElements(vec);
	displayElements(lst);
	displayElements(arr);

	return 0;
}
