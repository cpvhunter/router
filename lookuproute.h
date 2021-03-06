#ifndef __FIND__
#define __FIND__

#include "defines.h"

struct nexthop
{
	char *ifname;
	uint32_t ifindex; // Nexthop address
	in_addr nexthopaddr;
};

struct route
{
	in_addr ip4prefix;
	uint32_t prefixlen;
	struct nexthop *nexthop;
};

struct Edge {
	uint32_t nxt, ip, mask;
	char* ifname;
	uint32_t ifindex, nexthop;
};

int32_t insert_route(uint32_t, uint32_t, char*, uint32_t);
int32_t modify_route(uint32_t, uint32_t, char*, uint32_t);
int32_t lookup_route(uint32_t, nexthop*);
int32_t delete_route(uint32_t, uint32_t);

#endif
