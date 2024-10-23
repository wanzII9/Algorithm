#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

long long solution(long long n) {
    long long result = 0;
    vector<int> v;
    
    while(n)
    {
        v.push_back(n%10);
        n /= 10;
    }
    sort(v.begin(), v.end(), compare);
    for(int i : v) {
        result = result * 10 + i;
    }
    
    return result;
}