#include <stdio.h>
  
int main(){ 
    int arr[] = {1,-4,30,15,20,98,3,6}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    
    if (n<3) 
        printf("Array Size less than 3"); 
    else{
        int first = INT_MIN,third = INT_MIN,second = INT_MIN;  
        for(int i=0;i<n;i++){  
         
            if (arr[i] > first) {  
                third = second;  
                second = first;  
                first = arr[i];  
            }else if (arr[i] > second){ 
                third = second;  
                second = arr[i];  
            }else if (arr[i] > third)  
                third = arr[i];  
            }  
            printf("Three largest elements are %d %d %d\n", first, second, third);
        }     
  
    return 0; 
} 
