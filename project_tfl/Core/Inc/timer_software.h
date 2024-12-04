/*
 * timer_software.h
 *
 *  Created on: Oct 31, 2024
 *      Author: hoang
 */

#ifndef INC_TIMER_SOFTWARE_H_
#define INC_TIMER_SOFTWARE_H_

extern int timer_flag[];

void timer_set(int index, int duration);
void timer_run();

#endif /* INC_TIMER_SOFTWARE_H_ */
