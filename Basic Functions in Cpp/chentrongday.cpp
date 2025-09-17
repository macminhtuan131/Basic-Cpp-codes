#include<iostream>
using namespace std;
void chen(int n, int a[1000], int k, int x){
    for (int i = n; i>k; i--){
        a[i] = a[i-1];
    }
    a[k] = x;
    for (int i = 0; i<=n; i++){
        cout << a[i] << " ";
    }
}
int main(){
    int n;
    cin >> n;
    int a[1000];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    int k, x;
    cin >> k >> x;
    chen(n, a, k, x);
    return 0;
}
