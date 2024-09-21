#include <iostream>
#include <string>

using namespace std;

int main()
{
	int alphabet[26] = {0};

	string word;
	cin >> word;

	for(int i=0; i<word.length(); i++)
	{
		char ch = tolower(word[i]);
		alphabet[ch - 'a']++;
	}

	
	int max = 0;	
	int max_index = 0;
	bool max_tie = false;

	for(int i=0; i<26; i++)
	{
		if(alphabet[i] > max)
		{
			max = alphabet[i];
			max_index = i;
            max_tie = false;
		}
		else if(alphabet[i] == max && max>0)
		{
			max_tie = true;
		}
	}

	if(max_tie)
	{
		cout << "?" << endl;
	}
	else
	{
		char max_word = 'A' + max_index;
		cout << max_word << endl;
	}
	return 0;
}
