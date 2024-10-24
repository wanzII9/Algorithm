#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int sum = 0;
    int orgin = x;
    
    while(x) {
        sum += x % 10;
        x /= 10;
    }
    
    return orgin % sum == 0 ? true : false;
}