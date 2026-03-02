#include <stdio.h>

void bubbleSort(int arr[], int n) {
    // Traverse through all array elements
    for (int i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++) {
            // Traverse the array from 0 to n-i-1
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(int arr[],int n){
   for(int i=0;i<n;i++){
    printf("%d", arr[i]);
  }
 printf("\n");

}

void printArray(int arr[],int n){
   for(int i=0;i<n;i++){
    printf("%d", arr[i]);
  }
 printf("I value to be displayed\n");
}

int main(){
int  arr[]={64,34,25,12,22,11,90};
int n=sizeof(arr)/sizeof(arr[0]);

printf("Original array:\n");
printf(arr.n);

bubbleSort(arr,n);

printf("Sorted array using array:\n");
printArray(arr,n);

return 0;
}
