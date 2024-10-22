#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int min = 1;
    while(1) {
        if(n % min == 1) {
            break;
        }
        min++;
    }
    return min;
}