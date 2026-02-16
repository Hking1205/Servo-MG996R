#include "Scheduler.h"

#include "stm32f3xx_hal.h"   // HAL_GetTick(), __WFI()
#include "Servo.h"           // Servo_Apply()

/* ========================= Configuration ========================= */
#define SCHED_PERIOD_MS_100HZ   (10u)

/* ========================= Private state ========================= */
static uint32_t s_next_100Hz_ms = 0u;

/* ========================= Private tasks ========================= */
static void Run_100Hz_Tasks(void)
{
    /* Put ALL 100 Hz tasks here */
    Servo_Apply();

    /* Later you can add:
       NRF_Task100Hz();
       SLX_Step();
       Telemetry_Task100Hz();
       etc.
    */
}

/* ========================= Public API ========================= */
void Scheduler_Init(void)
{
    /* Start the schedule aligned to "now" */
    s_next_100Hz_ms = HAL_GetTick() + SCHED_PERIOD_MS_100HZ;
}

void Scheduler_Run(void)
{
    uint32_t now = HAL_GetTick();

    /* Run 100 Hz tasks when their time has arrived */
    if ((int32_t)(now - s_next_100Hz_ms) >= 0)
    {
        /* Catch up in fixed 10ms steps if we were delayed */
        do
        {
            s_next_100Hz_ms += SCHED_PERIOD_MS_100HZ;
            Run_100Hz_Tasks();
            now = HAL_GetTick();
        }
        while ((int32_t)(now - s_next_100Hz_ms) >= 0);
    }

    /* Reduce CPU load: SysTick (1ms) will wake us */
    __WFI();
}
