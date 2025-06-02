#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

#define NUM_THREADS 2
#define NUM_INCREMENTS 10000

int counter = 0; // 共有リソース

void* increment_counter(void* ptr){
    for(int i = 0; i < NUM_INCREMENTS; ++i) {
        counter++;
    }
    return NULL;
}

int main(){
    pthread_t threads[NUM_THREADS];

    // スレッドを作成し、それぞれでincrement_counter関数を実行する
    for (int i=0; i < NUM_THREADS; ++i) {
        pthread_create(&threads[i], NULL, increment_counter, NULL);
    }

    // 全てのスレッドが終了するまで待つ
    for (int i=0; i< NUM_THREADS; ++i) {
        pthread_join(threads[i], NULL);
    }

    printf("Expected: %d, Actual: %d\n", NUM_THREADS*NUM_INCREMENTS, counter);
    return 0;
}