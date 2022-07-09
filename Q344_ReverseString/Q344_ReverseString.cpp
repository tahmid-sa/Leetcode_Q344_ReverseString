#include <iostream>
#include <vector>

using namespace std;

void reverseString(vector<char>& s) {
    if (s.size() == 1) {
        return;
    }

    for (int i = 0, j = s.size() - 1; i <= (s.size() - 1) / 2; i++, j--) {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
}

int main()
{
    vector<char> s = { 'a', 'b', 'c' };

    reverseString(s);

    return 0;
}