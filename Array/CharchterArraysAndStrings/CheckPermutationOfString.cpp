/* Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
In other words, return true if one of s1's permutations is the substring of s2.
Example 1:
Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").

*/

#include<bits/stdc++.h>
using namespace std;

bool checkEqual(int arr[26],int arr2[26]){
    for(int i=0;i<26;i++){
        if(arr[i] != arr2[i]){
            return false;
        }
    }
    return true;
}

bool checkPermutation(string s1,string s2){
     // count arr to store index of s1
    int count1[26]={0};
    for(int i=0;i<s1.length();i++){
        int index=s1[i]-'a';
        count1[index]++;
    }

    //travers in window of size s1 and check permutation in s1
    int count2[26]={0};
    int windowSize=s1.length();
    int i=0;
    while(i<windowSize && i<s2.length()){
        int index2=s2[i]-'a';
        count2[index2]++;
        i++;
    }

    if(checkEqual(count1,count2)){
        cout<<"true";
        return 1;
    }

   // move window forward

    while(i<s2.length()){
        int newch=s2[i];
        int index2=newch-'a';
        count2[index2]++;

        int oldchar=s2[i-windowSize];
        index2=oldchar-'a';
        count2[index2]--;
        i++;

    if(checkEqual(count1,count2)){
        cout<<"true";
              return 1;
    }
    }

    cout<<"false";

    return false;

}

int main(){
    string s1,s2;
    cout<<"enter s1";
    cin>>s1;
    cout<<"enter s2";
    cin>>s2;


//     // count arr to store index of s1
//     int count1[26]={0};
//     for(int i=0;i<s1.length();i++){
//         int index=s1[i]-'a';
//         count1[index]++;
//     }

//     //travers in window of size s1 and check permutation in s1
//     int count2[26]={0};
//     int windowSize=s1.length();
//     int i=0;
//     while(i<windowSize && i<s2.length()){
//         int index2=s2[i]-'a';
//         count2[index2]++;
//         i++;
//     }

//     if(checkEqual(count1,count2)){
//         return true;
//     }

//    // move window forward

//     while(i<s2.length()){
//         int newch=s2[i];
//         int index2=newch-'a';
//         count2[index2]++;

//         int oldchar=s2[i-windowSize];
//         index2=oldchar-'a';
//         count2[index2]--;
//         i++;

//          if(checkEqual(count1,count2)){
//               return true;
//     }
//     }

    checkPermutation(s1,s2);

    
}
