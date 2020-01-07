#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void *hilo(void *valor){
    char *texto = (char *) valor;
    struct timespec tiempo ={1,0};
    while(1){
           printf("%s \n",texto);
          pthread_delay_np(&tiempo);
            }
     }

int main(void){
pthread_t hola1;
pthread_t hola2;
pthread_create(&hola1, NULL, &hilo, "Proceso");
pthread_create(&hola2, NULL, &hilo, "Proceso");
pthread_join(hola1, NULL);
pthread_join(hola2, NULL);
return 0;
}

