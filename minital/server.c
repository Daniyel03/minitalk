#include "minitalk.h"


// void bin_to_char(int signum, char *c)
// {

// }



void sig_handler(int signum, siginfo_t *info, void* context)
// {
//     static int pid;
//     static int i;
//     static char c;
//     (void)context;
//     // pid = info->;
}

void caller(void)
{
    // struct sigaction sas;
    // sas->sa_sigaction = &sig_handler;
    // sas.sa_flags = SA_SIGINFO;
    // sigaction(SIGUSR1, &sas, NULL);
    // sigaction(SIGUSR2, &sas, NULL);
    
}

int main(void)
{
    struct sigaction sa_newsig;

    sa_newsig.sa_sigaction = sig_handler();
    sa_newsig.sa_flags = SA_SIGINFO;
    // sigaction(SIGUSR1, &sa_newsig, NULL);
    // sigaction(SIGUSR2, &sa_newsig, NULL);
    int pid;

    pid = getpid();
    ft_printf("PID: %d", pid);
    caller();
}