#include <iostream>
#include <string>

using namespace std;

int main()
{
	int count;
	cin >> count;

	int group_word_count = 0;
	string word;

	for(int i=0; i<count; i++)
	{
		cin >>  word;
		int is_group_word = 1;
		int alphabet[26] = {0};

		for(int j=0; j<word.length(); j++)
		{
			if(j>0 && word[j] != word[j-1])
			{
				if(alphabet[word[j] - 'a'] > 0)
				{
					is_group_word = 0;
					break;
				}
			}
			alphabet[word[j] - 'a'] = 1;
		}
		if(is_group_word)
		{
			group_word_count++;
		}
	}
	cout << group_word_count << endl;
	return 0;
}
