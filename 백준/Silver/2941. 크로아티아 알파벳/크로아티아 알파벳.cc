#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word;
	int is_crotia = 0;
	int i=0;

	cin >> word;

	for(i=0; i<word.length(); i++)
	{
		if(word.substr(i,2) == "c=" || word.substr(i,2) == "c-" || word.substr(i,2) == "d-" ||
		   word.substr(i,2) == "lj" || word.substr(i,2) == "nj" ||
		   word.substr(i,2) == "s=" || word.substr(i,2) == "z=")
		{
			is_crotia++;
			i++;
		}
		else if(word.substr(i,3) == "dz=")
		{
			is_crotia++;
			i += 2;
		}
		else
		{
			is_crotia++;
		}
	}
	
	cout << is_crotia << endl;
	return 0;
}
