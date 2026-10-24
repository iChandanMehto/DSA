#include <bits/stdc++.h>
using namespace std;


/*
Selection sort : In Selection sort we take minimum and swap it.

Example  => 

 |13 | 46 | 24 | 52 | 20 | 9 | 

 1st Swap : 

  | 9 | 46 | 24 | 52 | 20 | 13 | 

   2nd Swap : 

  | 9 | 13 | 24 | 52 | 20 | 46 | 

   3rd Swap : 

  | 9 | 13 | 20 | 52 | 24 | 46 | 

   4th Swap : 

  | 9 | 13 | 20 | 24 | 52 | 46 | 

   5th Swap : 

  | 9 | 13 | 20 | 24 | 46 | 52 | 
 

Note  : Rememebe It should in ascending order.
 */

 void selection_sort(int arr[], int n){

    for(int i = 0; i<=n-2; i++){
        int mini = i;
        for(int j = i; j<=n-1; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini]  = arr[i];
        arr[i]  = temp;
    }

 }




int main(){

    int n;
    cin  >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    selection_sort(arr, n);
     for(int i = 0; i<n;i++){
        cout << arr[i]<< " ";
     }
    return 0;
}