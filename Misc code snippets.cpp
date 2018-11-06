//remove a certain character from a string
#include <algorithm>
#include <string>
int func1() {
	std::string str = "abcd";
	str.erase(std::remove(str.begin(), str.end(), 'a'), str.end());
	return 0;
}
//or
/*std::string output;
output.reserve(str.size()); // optional, avoids buffer reallocations in the loop
for(size_t i = 0; i < str.size(); ++i)
  if(str[i] != 'a') output += str[i];*/
/*reserve keyword:
we try to avoid all the automatic reallocations that the object str could suffer 
each time that inserting a new character would make its length surpass its capacity.*/

//find middle element of linked list
//Say you have a std::list<T> l.
#include <list>
std::list<int> l;
std::list<int>::iterator i = l.begin();
std::list<int>::iterator m = l.begin();
bool even = true;
//while (i != list.end())
/*{
	if (even) ++m;
	++i;
	even = !even;
}*/