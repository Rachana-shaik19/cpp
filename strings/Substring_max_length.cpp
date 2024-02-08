#include<unordered_set>
#include<iostream>
using namespace std;
int lengthOfLongestSubstring(string s)
{
    unordered_set<char> char_set;
    int i = 0, j = 0, max_length = 0;
    int length = s.size();
    while(j < length)
    {
        if(char_set.find(s[j]) == char_set.end())
        {
            char_set.insert(s[j]);
            max_length = max(max_length , j - i + 1);
            cout << "The max length each iteration is "<< max_length << endl;
            j++;
        }
        else
        {
            char_set.erase(s[i]);
            i++;
        }
    }
    return max_length;
}
int main()
{
    int length = lengthOfLongestSubstring("abcabcbb");
    cout << "The max length is "<< length << endl;
}