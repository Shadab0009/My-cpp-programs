#include <bits/stdc++.h>
using namespace std;
void countVowels(string &str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    map<char, int> mpp;
    bool flage = false;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            mpp[str[i]]++;
            flage = true;
        }
    }
    if (flage)
    {
        int k = 0;
        cout << "{";
        for (auto it = mpp.begin(); it != mpp.end(); it++)
        {
            cout << "'" << it->first << "'"
                 << ": " << it->second;
            k++;
            if (k < mpp.size())
                cout << ",";
        }
        cout << "}";
    }
    else
        cout << "No vowels found.";
}

int main()
{
    string str;
    getline(cin, str);
    countVowels(str);
    return 0;
}