#include <iostream>
using namespace std;
int SquareRoot(int n)
{
    int s = 0, e = n;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        int square = mid * mid;

        if (square == n)
        {
            return mid;
        }

        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

double MorePrecision(int n, int precision, int temp)
{
    double factor = 1;
    double ans = temp;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter element"
         << " ";
    cin >> n;
    cout << SquareRoot(n) << endl;

    int temp = SquareRoot(n);

    cout << "with precisiomn" << MorePrecision(n, 3, temp);
}