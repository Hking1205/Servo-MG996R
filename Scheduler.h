#ifndef SCHEDULER_H
#define SCHEDULER_H

#ifdef __cplusplus
extern "C" {
#endif

/* Initialize scheduler timebase (call once after HAL_Init()) */
void Scheduler_Init(void);

/* Run scheduler (call repeatedly from while(1)) */
void Scheduler_Run(void);

#ifdef __cplusplus
}
#endif

#endif /* SCHEDULER_H */
