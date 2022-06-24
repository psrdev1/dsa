#include<iostream>
using namespace std;

void reverseArray(int arr[] ,int n){

int s = 0;
int e = n-1;
while(s<e){
    int temp = arr[e];
    arr[e] = arr[s];
    arr[s]= temp;
    
    s +=1;
    e-=1;
}
}

int main(){
    int arr[] = {10,20,30,40,50,60,80,90};
    int n = sizeof(arr)/sizeof(int);
    reverseArray(arr,n);
    
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;

}