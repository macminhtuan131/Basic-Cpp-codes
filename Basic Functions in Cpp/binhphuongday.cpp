#include<iostream>
#include<math.h>
using namespace std;
void binhphuong(int a[1000], int n){
	for (int i = 0; i<n; i++){
		a[i] = a[i]*a[i];
	}
	for (int i = 0; i<n; i++){
		cout << a[i] << " ";
	}
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i<n; i++){
		cin >> a[i];
	}
	binhphuong(a, n);
	return 0;
}
