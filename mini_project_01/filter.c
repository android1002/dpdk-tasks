#include <rte_ether.h>
#include "filter.h"

/*
Port 0 -> Port 1
if  (src ip in black_list):
    pkt drop 
else
    forward 
*/
int in_black_list(struct rte_mbuf *m)
{
	struct rte_ether_hdr *eth;
	eth = rte_pktmbuf_mtod(m, struct rte_ether_hdr *);

	return 0;
}