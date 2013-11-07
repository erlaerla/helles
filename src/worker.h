#ifndef _helles_workers_h
#define _helles_workers_h

#include <unistd.h>

struct worker {
  pid_t pid;
  int pipefd;
  int available;
  int count;
};

void worker_loop(int ipc_sock);

#endif
