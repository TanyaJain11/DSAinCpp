#include<iostream>
using namespace std;

void multiply(int **a,int**b,int r1,int c1,int r2 ,int c2){
    
    int **arr = new int*[r1];

    for(int i=0;i<r1;i++){
        arr[i] = new int[c2];
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            arr[i][j]=0;
            for(int k=0;k<r2;k++){
                arr[i][j]+=a[i][k] * b[k][j];
            }
        }
    }

        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
       

    

    for(int i=0;i<r1;i++){
        delete arr[i];
    }


    delete[] arr;
}

// void multiply(int **a,int **b,int r1,int c1,int r2,int c2){
//     int **arr = new int*[r1];

//     for(int i=0;i<r1;i++){
//         arr[i]= new int[c2];
//     }

//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//                arr[i][j]=0;
//             for(int k=0;k<r2;k++){
//                 arr[i][j]+= a[i][k]*b[k][j];
//             }
//         }
//     }

//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }


//     for(int i=0;i<r1;i++){
//         delete arr[i];
//     }


//     delete[] arr;

// }

void takeInput(int **a,int r1,int c1){
        for(int i=0;i<r1;i++){
            a[i] = new int[c1];
        }

        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cin>>a[i][j];
            }
        }

        cout<<"your array";

         for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }


}

int main(){
    int r1,c1;
    cout<<"enter for 1st array";
    cin>>r1;
    cin>>c1;
    int **a = new int *[r1];
    cout<<"enter elemnts of 1st";
    int r2,c2;
    cin>>r2>>c2;
    
    takeInput(a,r1,c1);

    int **b = new int *[r2];

    cout<<"enter elements of second ";
    takeInput(b,r2,c2);

    multiply(a,b,r1,c1,r2,c2);

    for(int i=0;i<r1;i++){
        delete a[i];
    }


    delete[] a;

     for(int i=0;i<r1;i++){
        delete b[i];
    }


    delete[] b;

}