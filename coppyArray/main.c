// This is a 'C' program to copy all elements of one array to another.
/*
 Example:
    Welcome this program will copy your array
    Enter your_array size : 10
    Input your_array elements : 10 1 95 30 45 12 60 89 40 -4
    ------------------------------------------------------------
    your array : 10 1 95 30 45 12 60 89 40 -4
    copied array : 10 1 95 30 45 12 60 89 40 -4
 
    ! ! ! THE PROGRAM ENDS ! ! !
 */

//Created by Mehmet Akif DURAN, January 12, 2024.

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10000


int arrayCopier(int arr1[], int arr1Size, int arr2[], int arr2Size); //function prototype.

int main(){ //beginnig of the main function
    
    //variable decleration(s)
    
    int your_array[MAX_SIZE];
    int copied_array[MAX_SIZE];
    int yourSize, copiedSize = 0;
    int count;
    
    //executable statment(s)
    
    printf("Welcome this program will copy your array \n");
    printf("Enter your array size: "); //getting users array size;
        scanf("%d", &yourSize);
    
    printf("Input your_array elements: \n");
    for(count=0; count<yourSize; count++) //putting users elements in to the array.
        scanf("%d", &your_array[count]);
    
    copiedSize = yourSize; //because of the copiying operation users arrays size and the copied array size must be equal.
    
    
    printf("------------------------------\n");
    
    //funciton call ;
    
    arrayCopier(your_array,yourSize,copied_array,copiedSize);
    
    return 0;
} // end of the main function



int arrayCopier(int arr1[], int arr1Size, int arr2[], int arr2Size) { //function definition
    
    //variable decleration(s)
    int count;
    
    
    //executable statement(s)
    
    if(arr1Size>arr2Size)
        return 0;
    
    for(count=0 ; count<arr1Size; count++)
    {
        arr2[count] = arr1[count];
    }
    
    printf("your array: ");
    for(count=0 ; count<arr1Size ; count++)
    {
        printf("%d ", arr1[count]);
    }
    
    
    printf("\n");
    
    
    printf("copied array: ");
    for(count = 0 ; count<arr2Size ; count++)
    {
        printf("%d ", arr2[count]);
    }
    
    printf("\n");
    printf("! ! ! THE PROGRAM ENDS ! ! !\n");
    
    return 1;
}//end of the function definition
