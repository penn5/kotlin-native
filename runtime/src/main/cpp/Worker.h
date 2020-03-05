#ifndef RUNTIME_WORKER_H
#define RUNTIME_WORKER_H

#include "Common.h"
#include "Types.h"

class Worker;

KInt GetWorkerId(Worker* worker);

Worker* WorkerInit(KBoolean errorReporting);
// Returns true if completed successfully.
bool WorkerDeinit(Worker* worker);
// Clean up all associated thread state, if this was a native worker.
void WorkerDestroyThreadDataIfNeeded(KInt id);

Worker* WorkerSuspend();
void WorkerResume(Worker* worker);

#endif // RUNTIME_WORKER_H