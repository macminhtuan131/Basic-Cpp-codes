/*Your task is to make a function that can take any non-negative integer as an argument and return it with its digits in descending order. Essentially, rearrange the digits to create the highest possible number.

Examples:
Input: 42145 Output: 54421

Input: 145263 Output: 654321

Input: 123456789 Output: 987654321*/
/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string my_to_string(int n){
    string s;
    while(n>0){
    s = s + (char)(n%10 + '0');
    n /= 10;
    }
    return s;
}
int reorder(int n){
    if(n == 0){
        return 0;
    }
    string s = my_to_string(n);
    sort(s.begin(), s.end(), greater<char>());
    long long result = stoll(s);
    return result;
}
int main(){
    int n;
    cin>>n;
    cout<<reorder(n);
    return 0;
}*/
//Internet idea:
#include<bits/stdc++.h>
using namespace std;
uint64_t descendingorder(uint64_t n){
    int a[10];
    uint64_t result = 0;
    memset(a, 0, sizeof(a));
    while(n > 0){
        a[n%10]++;
        n/=10;
    }
    for(int i = 9; i>=0; i--){
        while(a[i]> 0){
            result = result*10 + i;
            a[i]--;
        }
    }
    return result;
}
int main(){
    uint64_t n;
    cin>>n;
    cout<<descendingorder(n);
    return 0;
}
