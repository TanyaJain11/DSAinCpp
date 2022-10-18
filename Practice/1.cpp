#include<iostream>
#include<vector>
#include<set>
using namespace std;

void unionArr(int *arr,int *arr2,int n,int m){
          vector<int> temp;
          int i=0;
          int j=0;
          while(i<n && j<m){
            if(arr[i]<arr2[j]){
                temp.push_back(arr[i++]);
            }
            else if(arr2[j]<arr[i]){
                temp.push_back(arr2[j++]);
            }else{
                temp.push_back(arr[i++]);
                j++;
            }
          }

          while(i<n){
            temp.push_back(arr[i]);
            i++;
          }

          while(j<m){
            temp.push_back(arr2[j++]);
          }

          
    set<int> s;
    for(int i=0;i<temp.size();i++){
        s.insert(temp[i]);
    }
    for(auto i=s.begin();i!=s.end();++i){
        cout<<*i<<" ";
        
    }
          
}


void intersectionArr(int *arr,int *arr2,int n ,int m){
    int i=0;
    int j=0;
    vector<int> temp;
    while(i<n && j<m){
        if(arr[i]<arr2[j]){
            i++;
        }else if(arr[i]>arr2[j]){
            j++;
        }else{
            temp.push_back(arr[i++]);
            j++;
        }
    }

    set<int> s;
    for(int i=0;i<temp.size();i++){
           s.insert(temp[i]);
    }

    for(auto i =s.begin();i!=s.end();i++){
        cout<<*i<<" ";
    }
}
// void printUnion(int arr1[],int arr2[],int m,int n){
//     int i=0;
//     int j=0;
//     vector<int> v;
//     while(i<m && j<n){
//         if(arr1[i]<arr2[j]){
//         v.push_back(arr1[i++]);
//         }
//         else if(arr2[j]<arr1[i]){
//         v.push_back(arr2[j++]);
//         }
    
//     else{
//         v.push_back(arr2[j++]);
//         i++;
//     }
//     }
//     while(i<m){
//         v.push_back(arr1[i++]);
//     }
//     while(j<n){
//         v.push_back(arr2[j++]);
//     }

//     set<int> s;
//     for(int i=0;i<v.size();i++){
//         s.insert(v[i]);
//     }
//     for(auto i=s.begin();i!=s.end();++i){
//         cout<<*i<<" ";
        
//     }
// }

int main(){
    int n,m;
    cout<<"first";
    cin>>n;
    cout<<"second";
    cin>>m;
    int *arr= new int[n];
    int *arr2 = new int[m];

    cout<<"enter elements of second";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  

  cout<<"enter elements of second";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    unionArr(arr,arr2,n,m);
    cout<<"intersection"<<endl;
    intersectionArr(arr,arr2,n,m);
    // printUnion(arr,arr2,n,m);
}
// UNION OF ELEMENTS 

