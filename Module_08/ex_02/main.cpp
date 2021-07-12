#include "mutantStack.hpp"
#include "mutantStack.cpp"

#include <list>

void	printStack(std::stack<int> s)
{
	if(!s.empty())
	{
		int x = s.top();
		s.pop();
		printStack(s);
		std::cout << x << " ";
		s.push(x);
	}
}

int main()
{
	std::cout << "MUTANT " << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it1 = mstack.begin();
	MutantStack<int>::iterator it2 = mstack.end();

	++it1;
	--it1;
	while (it1 != it2)
	{
		std::cout << *it1 << " ";
		++it1;
	}
	std::cout << std::endl;

	std::cout << "Reverse: " << std::endl;
	MutantStack<int>::riterator rit1 = mstack.rbegin();
	MutantStack<int>::riterator rit2 = mstack.rend();
	 while (rit1 != rit2)
	 {
		 std::cout << *rit1 << " ";
		 rit1++;
	 }
	std::cout << std::endl << std::endl;

	 
	 std::cout << "LIST" << std::endl;

	 std::list<int>		lst;

	 lst.push_back(5);
	 lst.push_back(17);
	 std::cout << "Empty list: " << lst.empty() << std::endl;
	 std::cout << "List back: " << lst.back() << std::endl;
	 lst.pop_back();
	 std::cout <<"Size: " << lst.size() << std::endl;
	 lst.push_back(3);
	 lst.push_back(5);
	 lst.push_back(737);
	 //[...]
	 lst.push_back(0);

	 std::list<int>::iterator lit = lst.begin();
	 std::list<int>::iterator lite = lst.end();

	 ++lit;
	 --lit;
	 while(lit != lite)
	 {
	 	std::cout << *lit << " ";
	 	++lit;
	 }
	 std::cout << std::endl;	 

	 std::cout << "STACK" << std::endl;
	
	 std::stack<int> s(mstack);
	 s.push(10);
	 printStack(s);
	 std::cout << std::endl;
	}