#include <iostream>
using namespace std;

void del(int* a, int n){
    int val = a[1];
    a[1] = a[n];
    a[n] = val;
    int i = 1;
    int j = i*2;
    while(j < n-1){
        if(a[j+1] > a[j]) j++;
        if(a[i] < a[j]) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i = j;
            j = 2*j;
        } else break;
    }
}

void heapsort(int *a, int n){
    for(int i = n; i >= 2; i--){
        del(a,i);
    }
}
void insert(int* a, int n){
    int temp = a[n];
    int i = n;
    while(i > 1 && temp > a[i/2]){
        a[i] = a[i/2];
        i = i/2;
    }
    a[i] = temp;
}
void createheap(int* a, int n){
    for(int i = 2; i <= n; i++){
        insert(a,i);
    }
}
int main() {
    int n; cin >> n;
	int a[n+1];
	for(int i =1; i <= n; i++){
	    cin >> a[i];
	}
	createheap(a, n);
	heapsort(a, n);
	for(int i = 1; i <= n; i++){
	    cout << a[i] <<" ";
	}
	return 0;
}