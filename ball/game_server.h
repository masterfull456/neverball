#ifndef GAME_SERVER_H
#define GAME_SERVER_H

/*---------------------------------------------------------------------------*/

#define RESPONSE    0.05f              /* Input smoothing time               */
#define ANGLE_BOUND 20.0f              /* Angle limit of floor tilting       */
#define VIEWR_BOUND 10.0f              /* Maximum rate of view rotation      */

/*---------------------------------------------------------------------------*/

int   game_server_init(const char *, int, int);
void  game_server_free(const char *);
void  game_server_step(float);
float game_server_blend(void);

void  game_set_goal(void);

void  game_set_ang(float, float);
void  game_set_pos(int, int);
void  game_set_x  (float);
void  game_set_z  (float);
void  game_set_cam(int);
void  game_set_rot(float);

/*---------------------------------------------------------------------------*/
//jk
extern int returns_fall_state(void);
int fallswitch;

extern int returns_goal_state(void);
int goalswitch;

extern int returns_timeout_state(void);
int timeoutswitch;


// JK here i made a fn to return coins.
extern int returns_coins_collected(void);




#endif
