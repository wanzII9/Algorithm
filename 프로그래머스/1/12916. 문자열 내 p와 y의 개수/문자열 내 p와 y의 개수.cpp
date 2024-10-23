#include <string>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p = 0;
    int y = 0;
    
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    for(int i=0; i<s.length(); i++)
        
    {
        if(s[i] == 'P') {
            p++;
        }
        else if(s[i] == 'Y') {
            y++;
        }
    }
    
    if(p != y) {
        answer = false;
    }

    return answer;
}