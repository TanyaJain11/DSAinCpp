/*
You are given two numbers 'A' and 'B' in the form of two arrays (A[] and B[]) of lengths 'N' and 'M' respectively, 
where each array element represents a digit. You need to find the sum of these two numbers and return this sum in the
 form of an array.

 */

vector<int> reverse(vector<int> v){
    int s=0;
    int e= v.size()-1;
    while(s<e){
       swap(v[s++],v[e--]);
    }
    return v;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
    int i=n-1;
    int j=m-1;
    vector<int> ans;
    int carry=0,sum=0;
    
    while(i>=0 && j>=0){
        int val1=a[i];
        int val2=b[j];
        sum=val1+val2+carry;
        carry=sum/10;
        sum =sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    
    while(i>=0){
        sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
        sum=b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    if(carry!=0){
        sum=carry;
        carry=carry/10;
        sum=sum%10;
        ans.push_back(sum);
    }
    
   return reverse(ans); 
}