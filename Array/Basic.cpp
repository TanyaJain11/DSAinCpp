#include<iostream>
using namespace std;

int main(){
    //######## To initialize an array with the same value  ########//

   //int num[  ]={ [0 . . . 4 ] = 3 };    with gcc compiler we can do this we can write [first....last]=value
    int arr[50];
    fill_n(arr,50,10);
    cout<<arr[11]<<endl;
    for(int i =0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}