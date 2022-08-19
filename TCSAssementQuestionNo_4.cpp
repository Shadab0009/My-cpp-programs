#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    string name;
    string address;
    string gender;
    int countVowels(string &str)
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        int freq = 0;
        for (int i = 0; i <= str.length(); i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                freq++;
        }
        return freq;
    }
    int countDigits(string &str)
    {
        int freq = 0;
        for (int i = 0; i <= str.length(); i++)
        {
            if (str[i] >= '0' && str[i] <= '9')
                freq++;
        }
        return freq;
    }
};

int main()
{
    person a;
    getline(cin, a.name);
    getline(cin, a.address);
    cin >> a.gender;
    cout << "Count Of Vowels in Name = " << a.countVowels(a.name) << endl;
    cout << "Count of Digits in Address = " << a.countDigits(a.address) << endl;

    return 0;
}