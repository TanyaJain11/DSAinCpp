// C++ program to reverse a string
#include <bits/stdc++.h>
using namespace std;

// Function to reverse words*/
void reverseWords(string s)
{
	
	// temporary vector to store all words
	vector<string> tmp;
	string str = "";
	for (int i = 0; i < s.length(); i++)
	{
		
		// Check if we encounter space
		// push word(str) to vector
		// and make str NULL
		if (s[i] == ' ')
		{
            reverse(str.begin(),str.end());
			tmp.push_back(str);
			str = "";
		}

		// Else add character to
		// str to form current word
		else
			str += s[i];
	}

	// Last word remaining,add it to vector
    reverse(str.begin(),str.end());
	tmp.push_back(str);

	// Now print from last to first in vector
	int i;
	for (i =0; i<tmp.size(); i++)
		cout << tmp[i] << " ";
	// Last word remaining,print it
	// cout << tmp[0] << endl;
}

// Driver Code
int main()
{
	string s;
	getline(cin,s);
	reverseWords(s);
	return 0;
}
