#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int> oned, int r,int **a){
    int size = oned.size();
    r=r%sizeof(a);
    if(r<0){
        r =r+ sizeof(a);
    }
    cout<<size-1;
    reverse(oned,0,size-r-1);
    reverse(oned,size-r,size-1);

    reverse(oned,0,sizeof(a)-1);

}

void reverse(vector<int>oned,int i ,int j){
    while(i<j){
        int temp = oned[i];
        oned[i]=oned[j];
        oned[j]=temp;
    }
}

vector<int> fillOnedFromShell(int **a,int s){
    int minr=0, maxr=sizeof(a)-1;
    int minc=0,maxc= sizeof(a[0])-1;
    int sz = 2*(maxr-minr + maxc - minc);

    vector<int>oned;
    //left wall

    for(int i=minr , j=minc;i<=maxr;i++){
        oned.push_back(a[i][j]);
    }

    //bottom wall 

     for(int i=maxr , j=minc+1;i<=maxc;j++){
        oned.push_back(a[i][j]);
    }

    //right wall

     for(int i=maxr , j=maxc;i>=minr;i--){
        oned.push_back(a[i][j]);
    }


    //top wall

     for(int i=minr , j=maxc-1;i>=minc+1;j--){
        oned.push_back(a[i][j]);
    }

    return oned;


}

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

    // int oned[1000000];
    vector<int> b;

    b=fillOnedFromShell(a,s);
    for(int i = 0; i < b.size(); i++)
        cout << b[i] << " ";
  
    rotate(b,r, a);
    // fillshellFromOned(a,s,oned);
 
    
    

    return 0;
}


// first converting shell to 1 d then reversing that one d array and th again
// converting that one d reverse array back into shell 

// after reversing we nare rotating array 

// rotae function 
// in that we are calling reverse function 3 times 

// rev erse 0 to length-r-1  then length-r to length -1 then 0 to length-1;


