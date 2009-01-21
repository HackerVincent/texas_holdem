
#include "player.h"

#ifndef TABLE_H
#define TABLE_H

enum TABLE_STATE
{
	WAITING_FOR_PLAYERS,
	IN_PROGRESS,
	FINISHED
};

typedef struct table_
{
	char *name;
	enum TABLE_STATE state;
	player **players;
	int num_players;
	int current_player;
} table;

table *table_new(char *name);
void table_add_player(table *t, player *p);
void table_state_changed(table *t, player *p);

#endif
