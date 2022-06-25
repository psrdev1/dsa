#include<iostream>
using namespace std;
void bubbleSort(int array[] , int n){
 

 for(int times = 1; times <= n-1;times++){
    for(int i = 0; i <= n-times-1;i++){
    if(array[i]> array[i+1]){
        swap(array[i],array[i+1]);
      
    }
 }
 }
 
 
}

int main(){
    
    int array[] = {50,0,33,212,1};
    int n = sizeof(array)/sizeof(int);
    bubbleSort(array, n);
    for(int i = 0; i < n; i++){
        cout << array[i] <<endl;
    }
    
    return 0;

}