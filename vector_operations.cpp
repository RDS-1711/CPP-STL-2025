#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

/*  
 *  Vector operations and method
 */


class Person {
	public:
		Person(const std::string &firstName, 
		       const std::string &lastName) : fullName(firstName + " " + lastName) {}
		const std::string &getName() const {return fullName;}
	private:
		std::string fullName;
};


int main ()
{

	std::vector<int> numbers = {1,2,3,4};

	/* SAFE OUT OF BOUNT ACCESS */
	try {
		const auto element = numbers.at(5);
		std :: cout << element << "\n";
	} catch (const std::out_of_range &e) {
		std :: cout << "Error : " << e.what() << "\n";
	}


	/* FIRST AND LAST */
	std :: cout << "First : " << numbers.front() << " Last : " << 
		" and " << numbers.back() << "\n";

	/* GET VETCTOR SIZE */
	std :: cout << "Current Size of vector is : " << numbers.size() << "\n";

	/*IS EMPTY ? */
	std :: vector<int> emptyVec;
	
	std :: cout << "Number Vector is " << 
		(numbers.empty() ? " " : "not ") << "empty" << "\n"; 
	
	std :: cout << "EmptyVec is " << 
		(emptyVec.empty() ? "" : "not ") << "empty" << "\n"; 

	/*ADDING ELEMENETS*/
	std::vector<int> scores;

	std :: cout << "score vector size : " << scores.size() << "\n"; 
	
	/*push_back add element to the end of the vector */
	scores.push_back(23); 
	scores.push_back(67);
	scores.push_back(98);

	std :: cout << "score vector size : " << scores.size() << "\n"; 

	/* insert() to add element at desired position */
	scores.insert(scores.begin() + 2, 70);

	for (auto ele : scores) { std :: cout << ele << " ";}

	std :: cout << "\n";

	/* emplace_back() and emplace */
	std ::  vector<Person> people; 

	/* Direct construction of object */
	people.emplace_back("Ritesh", "Sonawane");
	people.emplace(people.begin(),"Madhuri", "Sonawane");

	/* this way first create temp object */
	people.push_back(Person("Ritesh", "Maddy"));

	for (const auto &person : people) { 
		std :: cout << person.getName() << "\n";
	}

	/* REMOVING ELEMENT */
	std :: vector<std::string> week_days = {"sun", "mon", "tue", "wed", "thu", "fri", "sat"}; 

	for (const auto day : week_days) { std :: cout << day << " ";}

	/* old method start */
	auto end = std :: remove(week_days.begin(), week_days.end(), "sun");
	
	week_days.erase(week_days.begin() + 3, week_days.end());
	
	/* old method end */
	
	std :: cout << "\n";
	
	/*new way to delete */
	std::erase (week_days, "wed"); // compile with -std=c++20

	std :: erase_if (week_days, [] (const std::string &str) { return (str == "mon");}); 
	
	for (const auto day : week_days) { std :: cout << day << " ";}


	std :: cout << "\n";

	/* Get the vector  capacity */
	std:: vector<int> numbers_0;

	std :: cout << "vcetor actual size : " << numbers_0.capacity() << "\n";

	for (auto i = 1; i < 30; i++)
	{
		numbers_0.push_back(i);
		std :: cout << "vcetor actual size : " << numbers_0.capacity() << "\n";
	}

	std :: cout << "vcetor actual size : " << numbers_0.capacity() << "\n";

	/* Clear data from vector */

	std :: vector <std::string> months;

	months.push_back("Jan");

	for (const auto month: months)
	{
		std :: cout << month << " ";
	}
	
	std :: cout << "\n";
	
	std :: cout << "size of months vector : " << months.size();
	
	months.push_back("Feb");
	months.push_back("March");
	months.push_back("April");
	
	std :: cout << "\n";
	
	months.push_back("May");
	
	months.clear();
	std :: cout << "\n";
	
	std :: cout << "size of months vector : " << months.size();
	std :: cout << "\n";
	std :: cout << "capacity of months vector : " << months.capacity();

	std :: cout << "\n";

	/* pre allocate the memory */
	std :: vector<int> savings;

	savings.reserve(0xF000000000000);

	std :: cout << "size of saving vector : " << savings.size();
	std :: cout << "\n";
	savings.push_back(2);
	std :: cout << "capacity of saving vector : " << savings.capacity();
	
	std :: cout << "\n";

	return 0;
}




























