#include <iostream>
#include <set>

//link: https://vjudge.net/problem/CodeForces-236A

using namespace std;

int main()
{
    set <char> data;
    string input;

    cin >> input;

    for(int i=0; input[i] != '\0'; i++)
        data.insert(input[i]);
    if(data.size() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}
