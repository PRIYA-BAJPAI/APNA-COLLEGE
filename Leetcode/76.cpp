#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
string minWindow(string s, string t)
{
    int n = s.length();
    if (n < t.length())
        return "";
    unordered_map<char, int> mp;
    // setting values in map
    for (char c : t)
    {
        mp[c]++;
    }
    int count = t.length();
    int minWindow = INT16_MAX;
    int i = 0, j = 0;
    int start = 0;
    while (j < n)
    {
        char ch = s[j];
        if (mp[ch] > 0)
        {
            count--;
        }
        mp[ch]--;
        while (count == 0)
        {
            int currWindow = j - i + 1;
            if (currWindow < minWindow)
            {
                minWindow = currWindow;
                start = i;
            }
            mp[s[i]]++;
            if (mp[s[i]] > 0)
            {
                count++;
            }
            i++;
        }
        j++;
    }
    return minWindow == INT16_MAX ? "" : s.substr(start, minWindow);
}

int main()
{
    string s = "ADOBECODEBANC";
    string t = "ABC";
    // string s="a";
    // string t="aa";
    cout << minWindow(s, t);
    return 0;
}