#include <stdio.h>
#include <pthread.h>
#define NUM_THREAD 10000
int counter = 0;

void* increment_counter(void *arg) {
    counter++;
    return NULL;
}

int main() {
    pthread_t threads[NUM_THREAD];
    for (int i = 0; i < NUM_THREAD; i++) {
        pthread_create(&threads[i], NULL, increment_counter, NULL);
    }
    for (int i = 0; i < NUM_THREAD; i++) {
        pthread_join(threads[i], NULL);
    }
    printf("Result: %d\n", counter);
    return 0;
}