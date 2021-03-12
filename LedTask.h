#ifndef LED_TASK_H
#define	LED_TASK_H

#include "SchedulerConfig.h"
#include "Led.h"

#define BLINK_Period ( 0 )

void LedTask_init( Id_t id, Id_t gpio_id, uint8_t pin );
void LedTask_setState( Id_t id, uint8_t state, uint16_t period );
void LedTask_update( void *paramter );

#endif	/* LED_TASK_H */
