//https://www.interviewbit.com/problems/atoi/

#include<bits/stdc++.h>

using namespace std;

int atoi(const string A){
    long counter = 0;
    int sign = 1;
    bool set = false;
    for(char a: A){
        if (sign * counter > INT_MAX) return INT_MAX;
        else if (sign * counter < INT_MIN) return INT_MIN;
        if(a=='-'){
            sign = -1;
            set = true;
        } else if(a=='+'){
            sign = 1;
            set = true;
        } else if(a >= '0' && a <= '9'){
            counter = 10 * counter + a - '0';
            set = true;
        } else if(set){
            break;
        } else {
            return 0;
        }
    }
    return sign * counter;
}