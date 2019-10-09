#ifndef PROCESS_HEADER
#define PROCESS_HEADER

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <termios.h>
#include <sys/signal.h>

typedef struct {
  char* cmd;
  int argc;
  char **argv;
  pid_t pid;
  int status;
  struct process *next;
  struct termios* termios;
} process;


void add(process*, process*) {};
void set_status(process*) {};
void free_proc(process*) {};
