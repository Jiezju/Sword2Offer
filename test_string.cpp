//
// Created by Bright on 2022/4/1.
//
#include <iostream>

using namespace std;

int main() {
    char str1[] = "hello world!";
    char str2[] = "hello world!";

    if (str1 == str2)
        cout << "str1 == str2" << endl;
    else
        cout << "str1 != str2" << endl;

    char *str3 = "hello world!";
    char *str4 = "hello world!";

    if (str3 == str4)
        cout << "str3 == str4" << endl;
    else
        cout << "str3 != str4" << endl;

    return 0;
}
