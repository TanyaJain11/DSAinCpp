/*You have been given a string 'STR' of words. You need to replace all the spaces between words with “@40”.
sample Input
Hello World
Sample Output 1:
Hello@40World
*/

string replaceSpaces(string &str){
	// Write your code here.
    string temp="";
    for(int i=0;i<str.length();i++){
        if(str[i]== ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}




//2nd approach
for(int i=0;i<str.length();i++){
         if(str[i]== ' '){
             str.replace(i,1,"@40");
         }
     }
    return str;
