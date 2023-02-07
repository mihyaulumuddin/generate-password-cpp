#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const char alphanum[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+=";
int string_length = sizeof(alphanum);

int main()
{
    int length = 0;
    cout << "Enter length of password : ";
    cin >> length;
    srand(time(0));
    cout << "Password : ";

    for (int i = 0; i < length; i++)
    {
        cout << alphanum[rand() % string_length];
    }

    return 0;
}