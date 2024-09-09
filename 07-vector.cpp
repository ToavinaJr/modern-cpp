// 07-vector.cpp : read integers from user, sort them and then output

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    vector<int> v;
    for (;;)
    {
        cout << "Please enter a number (99 to quit): ";
        int i{};
        cin >> i;
        if (i == 99)
        {
            break;
        }
        v.push_back(i);
    }

    sort(begin(v), end(v));
    copy(begin(v), end(v), ostream_iterator<int>(cout, " "));
    cout << '\n';

    string book = "a hobbit";

    book = "In " + book;
    // book is now "In a hobbit"
    book.insert(5, "hole in the ground, there lived a ");
    // book is now "In a hole in the ground, there lived a hobbit"
    book.erase(10, 21);
    // book is now "In a
    cout << book;
}