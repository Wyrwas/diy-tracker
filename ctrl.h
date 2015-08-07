#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"

#ifdef WITH_SDLOG
extern xQueueHandle LogQueue;
inline void LogLine(char *Line, TickType_t Wait=2) { xQueueSend(LogQueue, &Line, Wait); }
#else
inline void LogLine(char *Line, TickType_t Wait=2) { }
#endif

#ifdef __cplusplus
  extern "C"
#endif
void vTaskCTRL(void* pvParameters);