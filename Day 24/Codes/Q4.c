/*Q4).Create two threads where one thread increments a global counter 100 times
and other thread decrements the same counter 100 times.
Print the final value of the counter after both threads finish.*/

#include <stdio.h>
#include <pthread.h>

int counter = 0;               // Global counter
pthread_mutex_t lock;         // Mutex for synchronization

void* increment(void* arg) {
    for (int i = 0; i < 100; i++) {
        pthread_mutex_lock(&lock);   // Lock before modifying counter
        counter++;
        pthread_mutex_unlock(&lock); // Unlock after modification
    }
    return NULL;
}

void* decrement(void* arg) {
    for (int i = 0; i < 100; i++) {
        pthread_mutex_lock(&lock);
        counter--;
        pthread_mutex_unlock(&lock);
    }
    return NULL;
}

int main() {
    pthread_t t1, t2;

    pthread_mutex_init(&lock, NULL);  // Initialize mutex

    pthread_create(&t1, NULL, increment, NULL);  // Create increment thread
    pthread_create(&t2, NULL, decrement, NULL);  // Create decrement thread

    pthread_join(t1, NULL);  // Wait for both threads to finish
    pthread_join(t2, NULL);

    pthread_mutex_destroy(&lock);  // Destroy the mutex

    printf("Final counter value: %d\n", counter);  // Should be 0

    return 0;
}
