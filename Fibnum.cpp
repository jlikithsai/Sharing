#include <bits/stdc++.h>
using namespace std;
int fib(int a, int b, int n) ;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;
    cin >> n ;
    int a =0 ;
    int arr[3][n] ;
    for(;a<n;a++){
        for(int i =0 ; i<3;i++){
            cin >> arr[i][a] ;
        }
    }
    for(a=0;a<n;a++){
        cout << fib(arr[0][a],arr[1][a],arr[2][a]) << endl ;
    }
	// your code goes here
	return 0;
}
int fib(int a, int b, int n){
    if (n == 0 ){
        return(a);
    }
    if (n == 1){
        return(b);
    }
    else{
        return(fib(a,b,n-1)^fib(a,b,n-2)) ;
    }
}