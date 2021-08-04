#include<bits/stdc++.h>
using namespace std;

bool ispoweroftwo(int n){
    return n && (!(n&(n-1)));
}

int main(){
    int n,input; cin >> n;
    long sum = 0;
    for(int i = 0; i < n; i++){
        cin >> input;
        int temp = input, ind = 0, flag = 1;
        while(temp){
            if(temp%2 && !ispoweroftwo(ind)){
                flag = 0;
                break;
            } 
            ind++;
            temp /= 2;
        }
        if(flag) sum += input;
    }
    cout << sum;
}