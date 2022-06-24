#include<iostream>
using namespace std;
void printSubArray(int array[] , int n){
    int sum=0;
    int largestSum=0;

    for(int i = 0; i < n;i++){
        for(int j = i; j < n; j++){
            // cout<< "(" << i <<"," << j<< "),";
            for(int k = i; k < j; k++){
                cout<< array[k] << "," ;
                sum = sum+array[k];

            }
            cout<<"sum is :"<<sum;
            cout << endl;
            if(sum >largestSum){
                largestSum = sum;
            }
        }
        

    }
    cout<<largestSum;

}

int main(){
    
    int array[] = {10,20,30,40,50,60,};
    int n = sizeof(array)/sizeof(int);
    printSubArray(array, n);
    return 0;

}