#include<iostream>
using namespace std;

void rotate(int oned[] , int r,int **a){
    r=r%sizeof(a);
    if(r<0){
        r =r+ sizeof(a);
    }
    cout<<sizeof(oned)-1;
    // reverse(oned,0,sizeof(oned)-r-1);
    // reverse(oned,sizeof(oned)-r,sizeof(oned)-1);

    // reverse(oned,0,sizeof(a)-1);

}

// void reverse(int oned,int i ,int j){
//     while(i<j){
//         int temp = oned[i];
//         oned[i]=oned[j];
//         oned[j]=temp;
//     }
// }

void takeInput(int **a,int n,int m){
    for(int i=0;i<n;i++){
        a[i]=new int[m];
    }

     cout<<endl;
    cout<<"enter Elements of array "<<"  ";

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int r1,c1;
    cin>>r1;
    cin>>c1;

    int r,s;

    cin>>s>>r;

    int **a = new int*[r1];
    
    takeInput(a,r1,c1);

    int oned[1000000];

    // int oned=fillOnedFromShell(a,s);
    rotate(oned,r, a);
    // fillshellFromOned(a,s,oned);
 
    
    

    return 0;
}


// first converting shell to 1 d then reversing that one d array and th again
// converting that one d reverse array back into shell 

// after reversing we nare rotating array 

// rotae function 
// in that we are calling reverse function 3 times 

// rev erse 0 to length-r-1  then length-r to length -1 then 0 to length-1;


