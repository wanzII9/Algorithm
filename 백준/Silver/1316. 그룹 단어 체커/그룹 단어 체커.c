#include <stdio.h>
#include <string.h>

int main()
{
	int count;
	scanf("%d", &count);

	int group_word_count = 0;
	char word[101];

	for(int i=0; i<count; i++)
	{
		scanf("%s", word);
		int is_group_word = 1;
		int alphabet[26] = {0};

		for(int j=0; j<strlen(word); j++)
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
	printf("%d\n", group_word_count);
	return 0;
}
