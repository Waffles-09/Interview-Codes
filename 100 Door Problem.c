There are 100 closed doors in a row. You make 100 passes. On the nth pass, 
  you toggle every nth door (open if closed, close if open). After all 100 passes, 
  How many doors stay open??

Soln:-
  #include <stdio.h>
#include <stdbool.h>
int main() {
    bool arr[100] = {0};
    int count=0;
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            if(j % i == 0){
                arr[j-1]= !arr[j-1];
                
            }
        }
        if(arr[i - 1]){
            printf(" %d \n", i);
            count++;
        }
    }
    printf("Total count of doors open is %d.", count);
    
    return 0;
}

Output:-
   1 
 4 
 9 
 16 
 25 
 36 
 49 
 64 
 81 
 100 
Total count of doors open is 10.
