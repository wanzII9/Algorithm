#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(int n) {
    vector<int>v;
    for(int i=1; i<=n; i++) {
        if(n % i == 0) {
            v.push_back(i);
        }
    }
    int sum = accumulate(v.begin(), v.end(), 0);
    return sum;
}