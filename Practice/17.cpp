#include<iostream>
using namespace std;

int TOH(int n, char source, char des, char rem, int num)
{
    static int cnt=0;

    if(n>0){
    TOH(n - 1, source, rem, des,num);
//  cout << "Move disk " << n << " from stack " << source<< " to stack " << des << endl;
    TOH(n - 1, rem, des, source,num);
}
    if(n==num && des=='B'){cnt++;}
    return cnt;
}

int main()
{
    int num_disks;
    cin>>num_disks;
    int num;
    cin>>num;
    cout<<TOH(num_disks, 'A', 'C', 'B',num_disks-num+1);
    return 0;
}



int main(){
    int 
}