#ifndef RINGBUFFER_H
#define RINGBUFFER_H

#include <stdint.h>

typedef struct
{
    uint8_t* buffer;
    uint16_t size;
    uint16_t head;
    uint16_t tail;
    uint16_t count;

} ring_buffer_char_t;


// khởi tạo buffer
void ring_buffer_init(ring_buffer_char_t *rb, uint8_t* buffer, uint16_t size);

// thêm dữ liệu
void ring_buffer_put(ring_buffer_char_t *rb, uint8_t data);

// lấy dữ liệu

// kiểm tra buffer rỗng

// kiểm tra buffer đầy

#endif