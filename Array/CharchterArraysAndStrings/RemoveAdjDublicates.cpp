/* You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two
 adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

Input: s = "abbaca"
Output: "ca"
*/


class Solution {
public:
    string removeDuplicates(string s) {
//         stack<char>ch;
//         int i=0;
//         while(i<s.length()-1){
//             if(s[i]!=s[i+1]){
//                 ch.push(s[i]);
//                 i++;
//             }else{
//                 i=0;
                
//             }
//         }
        
        
//         int j=0;
//         string str=" ";
//          while (!ch.empty()){
//              str[j]=ch.top();
//              ch.pop();
//              j++;
//          }
       
//         return str;
//    }
        
        stack<char>st;
        for(int i=s.length()-1;i>=0;i--){
            if(st.empty()){
                st.push(s[i]);
            }else{
                if(st.top()==s[i]){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }

        }
        
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        return ans;
    }
};