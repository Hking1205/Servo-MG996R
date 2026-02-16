#ifndef SERVO_H
#define SERVO_H

#include <stdint.h>

/* ============================================================================
 * Servo module
 * - Generates standard hobby-servo PWM (50 Hz, 1000..2000 us pulses)
 * - Arm servos: centered at 1500 us
 * - Gripper: limited range (example: 1000 us = 0°, 1500 us = 60°)
 *
 * NOTE:
 * - This module assumes timers are already initialized by CubeMX (MX_TIMx_Init).
 * - The module owns the timer/channel mapping internally (in Servo.c).
 * ============================================================================ */

/* ===== Pulse limits (microseconds) ===== */
#define SERVO_US_MIN          1000u
#define SERVO_US_MAX          2000u

/* ===== Initial / gripper presets (microseconds) ===== */
#define SERVO_ARM_INIT_US     1500u
#define SERVO_GRIP_0DEG_US    1000u
#define SERVO_GRIP_60DEG_US   1500u

/* ===== Setpoints (written by SLX / NRF decode)
 * Units: microseconds (us)
 */
extern volatile uint16_t servo1_count_us;   /* Arm1 */
extern volatile uint16_t servo2_count_us;   /* Arm2 */
extern volatile uint16_t servo3_count_us;   /* Gripper */

/* ===== High-level API ===== */
void Servo_Init(void);        /* start PWM outputs + write safe initial pulses */
void Servo_Apply(void);       /* apply current setpoints (clamped) */

/* ===== Optional convenience setters (keep main.c clean) ===== */
void Servo_SetArm1US(uint16_t us);
void Servo_SetArm2US(uint16_t us);
void Servo_SetGripperUS(uint16_t us);

#endif /* SERVO_H */
