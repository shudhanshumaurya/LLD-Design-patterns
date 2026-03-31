#include <execinfo.h>  // backtrace
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void segfault_handler(int sig) {
    fprintf(stderr, "\n=== CRASH DETECTED: Signal %d (SIGSEGV) ===\n", sig);
    
    // Capture stack frames
    void *array[20];
    int size = backtrace(array, 20);
    
    // Print frames to stderr (logs in prod)
    fprintf(stderr, "Stack trace (%d frames):\n", size);
    backtrace_symbols_fd(array, size, STDERR_FILENO);
    
    fprintf(stderr, "=== END CRASH REPORT ===\n");
    
    // Exit or abort for core dump
    abort();  // Triggers core dump if enabled
}

void trigger_segfault() {
    int *ptr = nullptr;
    *ptr = 42;  // Boom!
}

void level3() {
    trigger_segfault();
}

void level2() {
    level3();
}

void level1() {
    level2();
}

int main(int argc, char **argv) {
    // Install handler
    signal(SIGSEGV, segfault_handler);
    signal(SIGABRT, segfault_handler);  // Also catch abort
    
    printf("Segfault demo running... (symbols enabled)\n");
    printf("Run 'ulimit -c unlimited' for core dumps.\n");
    
    level1();  // Trigger chain
    
    return 0;
}