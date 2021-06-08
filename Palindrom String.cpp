//https://www.interviewbit.com/problems/palindrome-string/

#include<bits/stdc++.h>

using namespace std;

int isPalindrome(string A) {
    int i = 0, j = A.size() -1;
    while(j >= i+1){
        if(!isalnum(A[i])){
            i++;
            continue;
        } else if (!isalnum(A[j])){
            j--;
            continue;
        } else {
            if (tolower(A[i]) != tolower(A[j]))
                return 0;
            i++;
            j--;
        }
    }
    return true;
}