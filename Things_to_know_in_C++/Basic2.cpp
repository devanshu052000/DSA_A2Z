#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Your code goes here
    int age;
    cin >> age;
    if (age >= 18)
    {
        if (age > 57)
        {
            cout << "retirement time";
        }
        else if (age >= 55)
        {
            cout << "eligible for job but retirement soon.";
        }
        else
        {
            cout << "eligible for job";
        }
    }
    else
    {
        cout << "not eligible for job";
    }
    return 0;
}