/*Q5).Implement a thread function that takes an integer argument, squares it,
and returns the result to the main thread using pthread_exit and pthread_join.*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* square(void* arg) {
    int num = *((int*)arg);
    int* result = malloc(sizeof(int));  // allocate memory for result
    *result = num * num;
    pthread_exit(result);  // return result
}

int main() {
    pthread_t thread;
    int number = 7;
    int* result;

    pthread_create(&thread, NULL, square, &number);
    pthread_join(thread, (void**)&result);

    printf("Square of %d is %d\n", number, *result);

    free(result);  // free allocated memory

    return 0;
}


