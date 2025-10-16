#include "toralize.h"

int main(int argc, char *argv[])
{
    char *host; //host name to connect to
    int port;

    if (argc < 3){
        fprintf(stderr, "Usage: %s <host> <port>\n", argv[0]);

        return -1;
    }

    host = argv[1];
    port = atoi(argv[2]);
}