#include <stdio.h>

void evaluarnumero (int n) {
 if (n > 0) {
    printf (" %d es positivo\n" ,n);
 }
    else if (n < 0){
        printf ("%d es negativo\n" ,n);
    }
else {
    printf("%d es cero\n", n);
}
 
}
int main (void) {
int tenoch;
int i;

for (i = 1; i <= 3; i++){
    printf ("ingresa un numero");
    scanf("%d", &tenoch);
    evaluarnumero(tenoch);
}

   return 0; 
}