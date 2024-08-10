#include "FreeRTOS.h"
#include "queue.h"

#ifndef _KEYSTROKES_H
#define _KEYSTROKES_H

typedef struct keystroke_e {
    int split;
    unsigned char col;
    unsigned char row;
} keystroke_t;

QueueHandle_t keystroke_queue;

void keystrokes_task(void *pvParameters);

#endif // _KEYSTROKES_H
