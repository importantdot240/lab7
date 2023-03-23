#include <stdio.h>

void bubbleSort(int pArray[], int n){
    int i,j,temp;
    int iterationCount = 0;
    int swapCount;
    
    for (i = 0; i<n-1; i++){
        iterationCount=i+1;
        swapCount = 0;
        for (j=0;j<n-i-1;j++){
            if (pArray[j]>pArray[j+1]){
                //swap numbers
                temp = pArray[j];
                pArray[j] = pArray[j+1];
                pArray[j+1] = temp;
                //count number of swaps
                swapCount++;
            
            }
            else
                continue;  
        } 
        printf("Iteration# %d: %d swaps\n", iterationCount,swapCount);
    }
}

int main (){


    int array[]={97,16,45,63,13,22,7,58,72};
    int n = 9; 

    bubbleSort(array,n);

    return 0;
}
//count the number of swaps and print
//at the end of each pass the biggest remaining number is moved ot to the end of the array
//for each iteration count the number of swaps
//use malloc 
//call bubble sort
//count iterations right after
//for output:
//iteration number and amount
//push to github