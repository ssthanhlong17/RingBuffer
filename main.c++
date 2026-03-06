#include <stdint.h>
#include <stdio.h>
#include "ringBuffer.h"

int main()
{
    ring_buffer_char_t rb;
    uint8_t buffer[8];

    ring_buffer_init(&rb, buffer, 8);

    while(true){
        int i;
        printf("1. put data\n");
        printf("choice: ");
        scanf("%d", &i);
        switch(i){
            case 1:
                printf("put data: ");
                int data;
                scanf("%d", &data);
                ring_buffer_put(&rb, data);
                // printf("tail: %d\n", rb.tail);
                // printf("head: %d\n", rb.head);
                // printf("count: %d\n", rb.count);
                break;

        }
    }
    return 0;
}