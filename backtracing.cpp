// In backtracing we just try to remove  the changes we have so far done in a recursion before we proceed to the next
#include<bits/stdc++.h>
using namespace std ;
bool is_attacked(int x,int y,int board[][100],int N){
    for(int i=0;i<y;i++){
        if( board[x][i] == 1){
            return true ;
        }
       
    }
    for(int i=0;i<x;i++){
        if( board[i][y] == 1){
            return true ;
        }
        
    }
    int p = 0;
    int q =0 ;
    for(;;p++){
        for(;;q++){
            if (p+q = x+y && board[p][q] == 1){
                return true
            }
        }
    }
    for(;;p++){
        for(;;q++){
            if (p-q = x-y && board[p][q] == 1){
                return true
            }
        }
    }
    return false ;
}
void nqueens(int board[][100],int N){
    if (N==0){
        return true ;
        // Base condition
    }
    for(int i=0;i<N;i++){
        for(int j=0 ; j<N;j++){
            if( is_attacked(i,j,board[][100],N) == true){

            }
            board[i][j] = 1 ;
            if (nqueens(board[][N],N-1) == True){
                return true ;
                board[i][j] = 0 ;
            }
        }
    }
    return false ;
}
int main(){
    int N ;
    cin >> N ;
    int arr[N][N] ;
    nqueens(arr[N][N],N) ;
    for(int i =0 ;i<N;i++){
        cout << "/n" ;
        for(int j =0;j<N;j++){
            cout << arr[i][j] <<" " ;
        }
    }

}