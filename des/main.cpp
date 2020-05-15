#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    while (true)
    {
        getline(cin, s);
        if (s == "end")
            break;
        int length = s.length();
        for (char c:s)
        {
            if (c >= 'A' && c <= 'z')
            {
                c = toupper(c);
                cout << (char) ((c - 'A' - 3 + 26) % 26 + 'A');
            } else cout << c;
        }
        cout << endl;
    }
}
