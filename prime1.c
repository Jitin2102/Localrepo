#include<stdio.h>
#include<stdbool.h>

int main(){
    int i, n = 56;
    bool isprime = true;

    for(i = 2; i * i <= n; i++){
        if (n % i == 0){
            isprime = false;
            break;
        }
    }    

    if(isprime){
        printf("prime");
    } else {
        printf("not prime");
    }

    return 0;
}
 
 //                                 PART 2
#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}
