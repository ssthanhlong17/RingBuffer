#include "ringbuffer.h"
#include <stdint.h>
#include <stdio.h>

void ring_buffer_init(ring_buffer_char_t *rb, uint8_t* buffer, uint16_t size)
{
    rb->buffer = buffer;
    rb->size = size;
    rb->head = 0;
    rb->tail = 0;
    rb->count = 0;
}

void ring_buffer_put(ring_buffer_char_t *rb, uint8_t data) //tail tăng đến size thì quay về 0, head tăng khi buffer đầy
{
    rb->buffer[rb->tail] = data;
    rb->tail = (rb->tail + 1) % rb->size;
    if(rb->count == rb->size){
        rb->head = (rb->head + 1) % rb->size;
    } else {
        rb->count += 1;
    }
}

void ring_buffer_get(ring_buffer_char_t *rb) //head tăng đến size thì quay về 0, count giam sau mỗi lần gọi
{
    if(rb->count == 0){
        printf("buffer is empty\n");
    }
    else{
        rb->head = (rb->head + 1) % rb->size;
        rb->count - 1;
    }
}

