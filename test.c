#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

void printArray(int n);
void randomize(int n);


char* arr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight","nine"}; 

int main() 
{ 
    int n =9;
    randomize (n); 
    printArray(n); 
  
    return 0; 
}

void printArray(int n) 
{ 
    for (int i = 0; i < n; i++) 
        printf("%s ",arr[i]); 
    printf("\n"); 
} 
  
void randomize(int n ) 
{ 
    srand ( time(NULL) ); 
  
    for (int i = n-1; i > 0; i--) 
    { 
        int j = rand() % (i+1); 
  

    char* temp = arr[i]; 
    arr[i] = arr[j]; 
    arr[j] = temp; 



    } 
} 
