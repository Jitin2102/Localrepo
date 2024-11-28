#include <stdio.h>

int main() {
    int N;
    int cartons48 = 0, cartons24 = 0, cartons12 = 0, cartons6 = 0;

    // Accept the number of boxes from the user
    printf("Enter the number of boxes to be packed (up to 1000): ");
    scanf("%d", &N);

    // Pack using 48-box cartons
    if (N >= 48) {
        cartons48 = N / 48;
        N = N % 48;
    }

    // Pack using 24-box cartons
    if (N >= 24) {
        cartons24 = N / 24;
        N = N % 24;
    }

    // Pack using 12-box cartons
    if (N >= 12) {
        cartons12 = N / 12;
        N = N % 12;
    }

    // Pack using 6-box cartons
    if (N >= 6) {
        cartons6 = N / 6;
        N = N % 6;
    }

    // If there are any remaining boxes, use one more 6-box carton
    if (N > 0) {
        cartons6++;
    }

    // Display the breakdown of cartons used
    printf("Cartons used:\n");
    printf("48-box cartons: %d\n", cartons48);
    printf("24-box cartons: %d\n", cartons24);
    printf("12-box cartons: %d\n", cartons12);
    printf("6-box cartons: %d\n", cartons6);

    return 0;
}
int isPrime(int num);
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    if(isPrime(n)){
        printf("it is a prime no.");
    }
    else{
        printf("not a prime no.");
    }
    return 0;
}
int isPrime(int n){    
    if(n<2) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    if(n>2){
        for(int i=3;i*i<n;i+=2){
            if(n %i==0){
                return 0;
            }
        }
     return 1;
    }
    
}

 


 

