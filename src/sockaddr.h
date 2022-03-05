#ifndef SOCKADDR_H
#define SOCKADDR_H

#include <stdint.h>
#include <sys/socket.h> // struct sockaddr
#include <linux/in.h>   // struct sockaddr_in
#include <linux/in6.h>  // struct sockaddr_in6

// information network layer
union inet_all
{
  uint32_t all[4];
  uint32_t ip;
  uint32_t ip6[4];
  struct in_addr in;
  struct in6_addr in6;
};

struct layer3
{
  union inet_all source;
  union inet_all dest;
};

// information transport layer (only port)
struct itran
{
  uint16_t port;
};

struct layer4
{
  struct itran source;
  struct itran dest;
};

// connection identify
struct conn
{
  struct layer3 l3;
  struct layer4 l4;
};

union sockaddr_all
{
  struct sockaddr sa;
  struct sockaddr_in in;
  struct sockaddr_in6 in6;
};

#endif  // SOCKADDR_H
