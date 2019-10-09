#ifndef JOB_HEADER
#define JOB_HEADER

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <termios.h>
#include <sys/signal.h>
#include "process.h"

typedef struct {
    int job_id;
    struct process *proc_head;
    char *cmd;
    pid_t pgid;
    int mode;
    struct job *next;
} job;


void add(job*, job*) {};
void remove(job*, job*) {};
job* get_job_by_pgid(job*, pid_t) {};
job* get_job_by_jid(job*, int) {};
int proc_cnt(job*) {};
void remove_done_jobs(job*) {};
void free_job(job*) {};
void set_job_status(job*) {};

#endif



