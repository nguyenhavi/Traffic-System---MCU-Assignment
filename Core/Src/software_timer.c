/*
 * software_timer.c
 *
 *  Created on: Nov 4, 2022
 *      Author: Phuc
 */


#include "software_timer.h"

void setTimer(int index, int duration) {
	timer_flag[index] = 0;
	timer_counter[index] = duration;
}

void deleteTimer(int index) {
	timer_flag[index] = 0;
	timer_counter[index] = 0;
}
void timerRun() {
	for (int i = 0; i < NUM_TIMERS; i++) {
		if (timer_counter[i] > 0) {
			timer_counter[i]--;
			if (timer_counter[i] == 0) {
				timer_flag[i] = 1;
			}
		}
	}
}


//int timer1_flag = 0;
//int timer2_flag = 0;
//int timer3_flag = 0;
//
//
//int timer1_counter = 0;
//int timer2_counter = 0;
//int timer3_counter = 0;
//
//
//void setTimer1(int duration) {
//	timer1_counter = duration;
//	timer1_flag = 0;
//}
//void setTimer2(int duration) {
//	timer2_counter = duration;
//	timer2_flag = 0;
//}
//void setTimer3(int duration) {
//	timer3_counter = duration;
//	timer3_flag = 0;
//}
//
//void timerRun() {
//	if (timer1_counter > 0) {
//		timer1_counter--;
//		if (timer1_counter <= 0) {
//			timer1_flag = 1;
//		}
//	}
//	if (timer2_counter > 0) {
//		timer2_counter--;
//		if (timer2_counter <= 0) {
//			timer2_flag = 1;
//		}
//	}
//
//	if (timer3_counter > 0) {
//		timer3_counter--;
//		if (timer3_counter <= 0) {
//			timer3_flag = 1;
//		}
//	}
//}
