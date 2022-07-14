/*You are given a string 'S'. Your task is to check whether the string is palindrome or not. For checking palindrome, 
consider alphabets and numbers only and ignore the symbols and whitespaces.

Let S = “c1 O$d@eeD o1c”.
If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get 
S = “c1odeedo1c”, which is a palindrome. Hence, the given string is also a palindrome.

*/

bool isValid(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return true;
    }else{
        return false;
    }   
}

char toLowerCase(char ch){
    if((ch<='z' && ch>='a') || (ch>='0' && ch<='9')){
        return ch;
    }else{
        return(ch-'A'+'a');
    }
}

bool checkPalindrome(string s)
{
    int strt=0;
    int e=s.size()-1;
    while(strt<=e){
        if(!isValid(s[strt])){
            strt++;
        }else if(!isValid(s[e])){
            e--;
        }else{
            if(toLowerCase(s[strt])!=toLowerCase(s[e])){
                return false;
            }else{
                strt++;
                e--;
            }
        }
      }
    return true;
    // Write your code here.
}