#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<netinet/in.h>

/*
socket() creates a socket
connect() connects to remote address
close() closes a socket
htons() convert 16-bit value (port number) from host byte to network byte
inet_addr() converts IPv4 address string to 32-bit binary network address
*/


#define PROXY "127.0.0.1"
#define PROXYPORT 9050

typedef unsigned char int8;
typedef unsigned short int int16;
typedef unsigned int int32;

//Proxy request structure:
// VN  CD  DSTPORT DSTIP     USERID   NULL
//  1   1     2      4      variable   1

struct proxy_request
{
   int8 vn;
   int8 cd;
   int16 dstport;
   int32 dstip;
   unsigned char userid[8];
};

typedef struct proxy_request Req;

//Proxy response struct
// VN  CD  DSTPORT   DSTIP
//  1   1     2        4

struct proxy_response
{
    int8 vn;
    int8 cd;
    int16 _;  //not important
    int32 __; //not important
};

typedef struct proxy_response Res;