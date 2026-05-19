#ifndef ENCODER_H
#define ENCODER_H

#include "main.h"

/* ── 모터 방향 ── */
#define MOTOR_FORWARD  1
#define MOTOR_BACKWARD 0
#define MOTOR_STOP     2

/* ── PWM 범위 ── */
#define MOTOR_PWM_MAX  999
#define MOTOR_PWM_MIN  0

/* ── 사용자 입력 범위 ── */
#define MOTOR_USER_MAX  100   // 사용자 입력 최대값
#define MOTOR_PWM_MAX   999   // 실제 PWM 최대값 (내부용)

/* ── 함수 선언 ── */
void Encoder_Init(TIM_HandleTypeDef *htim_pwm);
void Motor_SetSpeed(uint16_t pwm, uint8_t direction);
void Motor_Stop(void);
uint16_t Motor_GetPWM(void);
uint8_t  Motor_GetDirection(void);

#endif /* ENCODER_H */
