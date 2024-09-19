#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int org_num, reversed_num = 0, num, num_length = 0;
    cout << "Enter any integer number: " << endl;
    cin >> num;
    org_num = num;

    for (int i = 0; i <= num_length; i++)
    {
        if (num == 0)
        {
            break;
        }
        else
        {
            num = num / 10;
            num_length++;
        }
    }
    // cout<<"The length of number is "<<num_length<<endl;
    num = org_num;
    int digits[num_length];

    for (int i = 0; i < num_length; i++)
    {
        digits[i] = num % 10;
        num = num / 10;
    }
    for (int i = 0; i < num_length; i++)
    {
        // checking all digits
        // cout<<digits[i]<<endl;

        reversed_num += digits[i] * int(pow(10, num_length - (i + 1)));

        // checking placevalues
        // cout<<int(pow(10,num_length-(i+1)))<<endl;
    }
    cout << reversed_num<<endl;
    if (org_num == reversed_num)
    {
        cout << "The given number " << org_num << " is a paleindrom number";
    }
    else
    {
        cout << "The given number " << org_num << " is not a paleindrom number";
    }
}