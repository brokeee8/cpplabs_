#include "AlMonster.h"

void AlMonster::move(Monster* m) {
	if (m->health() > 0) cout << m->name() << " is moving..." << endl;
	else cout << m->name() << " is died" << endl;

}
