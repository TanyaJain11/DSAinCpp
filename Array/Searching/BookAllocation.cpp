#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
//     int page = 0;
//     int studentCount = 1;

//     for (int i = 0; i < n; i++)
//     {
//         if(page + arr[i] <= mid)
//         {
//             page += arr[i];
//         }
//         else
//         {
//             studentCount++;

//             if (studentCount > m || arr[i] > mid)
//             {
//                 return false;
//             }
//              page = arr[i];
//         }


//         if (studentCount > m)
//         {
//             return false;
//         }
//     }
//     return true;
// }

int studentCount = 1;
    int pageSum = 0;
    //cout << "checking for mid "<< mid <<endl;
    
    for(int i = 0; i<n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || arr[i] > mid ) {
            return false;
        }
        cout<<"sum "<<pageSum;
            pageSum = arr[i];
        }
        if(studentCount > m) {
            return false;
        }
        //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
    }
    return true;
}

int BookAllocation(int arr[], int n,int m)
{
    int s = 0, sum = 0;

    for (int i = 0; i < n ; i++)
    {
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{

    int n, m;
    cin >> n;
    cout<<"enter m"<<endl;
    cin>>m;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<BookAllocation(arr, n,m);


}