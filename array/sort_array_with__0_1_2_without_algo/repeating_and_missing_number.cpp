// C++ program to Find the repeating and missing elements
//Using XOR property(Most optimal approach)
//Other approaches -hashing,summation of n element approach
//Time complexity O(5n)

#include <bits/stdc++.h>
using namespace std;

void repeatAndMissing(int arr[], int n,
                      int b[])
{
    int xor1;

    int bit;

    int i;

    xor1 = arr[0];

    for (i = 1; i < n; i++)
        xor1 = xor1 ^ arr[i];

    for (i = 1; i <= n; i++)
        xor1 = xor1 ^ i;

 
    bit = xor1 & ~(xor1 - 1);  //To get the right most bit

    for (i = 0; i < n; i++)
    {
        if (arr[i] & bit)

            b[0] = b[0] ^ arr[i];

        else

            b[1] = b[1] ^ arr[i];
    }
    for (i = 1; i <= n; i++)
    {
        if (i & bit)

            b[0] = b[0] ^ i;

        else

            b[1] = b[1] ^ i;
    }
}

int main()
{
    int arr[] = {4, 3, 6, 2, 1, 1};
    int b[] = {0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    repeatAndMissing(arr, n, b);
    cout << " Repeating element is " << b[1] << " and the missing element is " << b[0];
    getchar();
}
