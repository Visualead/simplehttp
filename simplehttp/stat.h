#ifndef _STAT_H
#define _STAT_H

#define STAT_WINDOW 1000

void simplehttp_stats_store(int index, unsigned int val);
void simplehttp_stats_init();
void simplehttp_stats_destruct();

#endif
