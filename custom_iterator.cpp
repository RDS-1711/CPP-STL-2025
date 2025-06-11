#include<iostream>
#include<iterator>
#include<vector>

class SquareIterator {
	public :
		using iterator_category = std::random_access_iterator_tag;
		using value_type = int;
		using difference_type = std::ptrdiff_t;
		using pointer = int*;
		using reference = int &;
		explicit SquareIterator(pointer ptr) : ptr(ptr) {}
		value_type operator*() const {return (*ptr) * (*ptr);}
		pointer operator->() {return ptr;}

		/*Pre Increment. Here & mean we are retruning the reference*/
		SquareIterator &operator++() {
			++ptr;
			return *this;
		}

		/*Post Increment*/
		SquareIterator operator++(int) {
			SquareIterator tmp = *this;
			++ptr;
			return tmp;	
		}

		SquareIterator &operator+=(difference_type diff)
		{
			ptr += diff;
			return *this;
		}

		SquareIterator operator+(difference_type diff)
		{
			return SquareIterator(ptr + diff);
		}

		value_type operator[] (difference_type diff) const
		{
			return *(ptr + diff) * *(ptr + diff);
		}

		bool operator != (const SquareIterator & other) const 
		{
			return ptr != other.ptr;
		}
	

	private:
		pointer ptr;
	
};

int main()
{
	std :: vector<int> vec = {1, 2, 3, 4, 5};

	/*vector::data() return direct pointer to internal array */
	SquareIterator begin(vec.data());
	
	SquareIterator end(vec.data() + vec.size()); 

	for (auto it = begin; it != end; it++)
	{
		std :: cout << *it << " ";
	}
	
	std :: cout << "\n"; 
	
	std :: cout <<  (begin += 1)[0] << "\n"; 
	std :: cout <<  (begin++)[0] << "\n"; 
	std :: cout <<  (++begin)[0] << "\n"; 

	return 0;
}
