#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    while (true) {
        int x;
        cout << "Сколько\n";
        cin >> x;
        char word;
        cout << "Чего?\n";
        cout << "r = рубль\na = попытка\nt = раз\nh = час\nw = целая\nn = купюра\n";
        cin >> word;

        cout << x << ending(x, word);
    }
    return 0;
}