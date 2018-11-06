#include <vector>
using namespace std;
#include <string>
#include <unordered_map>
using namespace std;
#include <iostream>

int removeDuplicates(vector<int>& nums) {

	unordered_map<int, int> mymap;
	int size = nums.size();
	for (int i = 0; i < nums.size(); i++) {
		mymap[nums[i]]++;
		if (mymap[nums[i]] > 1) {
			nums.erase(nums.begin() + i);
			mymap[nums[i]] = 1;
			i--;
			size--;
		}
	}
	return size;
}

int main()
{
	vector<int> vec{ 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
	cout << removeDuplicates(vec) << endl;
}