// LeetCode_LongestCommonPrefix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {

	string result = strs[0]; // Hello

	for (int j = 0; j < result.length(); j++)
	{
		for (int i = 1; i < strs.size(); i++)
		{
			char c = strs[i][j];

			if (c != result[j])
			{
				result.erase(result.begin() + j, result.end());
				return result;
			}
		}
	}
	
	return result;
}

int main()
{
	vector<string> vec;
	vec.push_back("Hello World!");
	vec.push_back("Hi!");
	//longestCommonPrefix(vec);
	cout << "Hello World! \n" << longestCommonPrefix(vec) << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
