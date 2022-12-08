#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
#include <stack>
#include <set>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{

	public:
		typedef typename Container::iterator iterator;
		MutantStack(){};
		MutantStack(MutantStack const & src):std::stack<T>(src){};
		~MutantStack(){};
		MutantStack &operator=(MutantStack const & rhs){new (this) MutantStack(rhs);};
		iterator begin() { return std::begin(c); }
    	iterator end() { return std::end(c); }
    	iterator begin() const { return std::begin(c); }
    	iterator end() const { return std::end(c); }
	private:
		using std::stack<T, Container>::c;
};

#endif