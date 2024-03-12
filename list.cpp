#include <iostream>
#include <list>
using namespace std;

void show(list<int>& _lst)
{
    for (auto i : _lst) {
        cout << i << ' ';
    }
}

int main()
{
    list<int> lst{};

    int i = 0;

    for (i; i < 100; i++)
    {
        int tmp = rand() % 200;
        lst.push_back(tmp);
    }

    lst.push_front(202);
    lst.push_front(201);
    lst.push_back(203);
    show(lst);


    cout << endl;


}

