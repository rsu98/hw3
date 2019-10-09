#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <termios.h>
#include <sys/signal.h>
#include "job.h"

/*typedef struct {
  char* cmd;
  int argc;
  char **argv;
  pid_t pid;
  int status;
  struct process *next;
  struct termios* termios;
} process;

typedef struct {
    int job_id;
    struct process *proc_head;
    char *cmd;
    pid_t pgid;
    int mode;
    struct job *next;
    } job;*/

void parser();
void init();

job* job_list;
  
int main(int argc, char** argv) {
   init();
   char* line;
   job* temp_jobs;
   while(1) {
     print_promt();
     line = read_line();
     temp_jobs = parse_line(line);
     for job in temp_jobs:
        execute_job(job);
   }
}

void init() {
  // register sig handlers
}

void print_prompt() {
  printf(">mysh: \n");
}

char* read_line() {
}

job* parse_line(char* line) {
  // parse line into token_list;
  job* temp_jobs;
  for token in token_list:
  add(temp_jobs, parse_job(token, mode));
  return temp_jobs;
}

job* parse_job(char* token, int mode) {
  // parse by | into process
  job* this_job;
  add(this_job->process, parse_process());
}

process* parse_process(char* seg) {
  // delimiter by space only
}

int execute_job(job* cur_job) {
  remove_done_jobs(job_list);
  // 
}

int execute_process(process* cur_proc, job* cur_job) {
  //
}

bool check_builtin(process* proc) {}
int call_builtin(process* proc) {}

int built_in_fg(process* proc) {}
int built_in_bg(process* proc) {}
int built_in_kill(process* proc) {}
int built_in_jobs(process* proc) {}


