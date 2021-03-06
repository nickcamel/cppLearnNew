#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <sys/time.h>
#include "defines.h"
#include "LearnNew.h"




// Declare an array of object to learn
class sigaction;
LearnNew obj[N_OF_OBJECTS+1];
char arrint[5000][5000];


// Create objects
void create_object(char*);

// Sort attributes of object according to 
// * most recently used
// * mostly used in general
void sort_recent();

// Signal interrupt handler
void handle_ui(int);

void loop_to_connect();

// Convert char array to int, by summing char's
int c2i(char * charint);

// Number of initalized objects 
int n_obj = 0;

// Object index
int i = 0;

bool do_loop = true;
struct timeval tic, toc;

// Signal interrupt handle
struct sigaction sigIntHandler;

#endif // MAIN_H_INCLUDED
