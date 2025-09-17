#include<iostream>
using namespace std;
void xoa(int n, int a[1000], int k){
    for (int i = k; i<n-1; i++){
        a[i] = a[i+1];
    }
    n--;
    for (int i = 0; i<n; i++){
        cout << a[i] << " ";
    }
}
int main(){
    int n;
    cin >> n;
    int a[1000];
    for (jnt i =0; i<n; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    xoa (n, a, k);
    return 0;
}
