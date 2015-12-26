#ifndef _PLAYER__H__
#define __PLAYER_H__

typedef struct{
    int x;
    int y;
    int points;
}Player;


Player * newPlayer(int y, int x, int points);

typedef struct{
    int x;
    int y;
    int points;
}Enemy;


Enemy * newEnemy(int y, int x, int speed);

#endif //__PLAYER_H__
