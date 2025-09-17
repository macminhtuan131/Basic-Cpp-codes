#include<iostream>
#include<cmath>
using namespace std;
void nguyento(int n, int a[]){
    int index = 0;
    for(int i = 0; i<n; i++){
            if(a[i]==2 && a[i]==3){
                index = 1;
            }
            if(a[i]>2){
            for(int j = 2; j <= sqrt(n); j++){
                if(a[i]%j!=0){
                    index = 1;
                }
            }
        }
        if(index == 1){
            cout << a[i] << " ";
        }
    }
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i<n; i++){
        cin >> a[i];
    }
    nguyento(n, a);
    return 0;
}
