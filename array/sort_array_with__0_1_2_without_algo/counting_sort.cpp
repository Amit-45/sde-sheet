//This algorithm is used to sort an array of 0s 1s and 2s without the use of extra space or sorting algorithms
//Not the most optimal solution
//Other approaches-ARRAY SORTING or Dutch National flag algorithm
//O(2n) time comlexity
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int c0 = 0;//count of 0
    int c1 = 0;//count of 1
    int c2 = 0;//count of 2

    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            c0++;

        if (arr[i] == 1)
            c1++;

        else
            c2++;
    }

    int k=0;
    for (i = 0; i < c0; i++)
    {
        arr[k++]=0;
    }
    for (i = 0; i < c1; i++)
    {
        arr[k++]=1;
    }
    for (i = 0; i < c2; i++)
    {
        arr[k++]=2;
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
