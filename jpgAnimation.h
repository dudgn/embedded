#ifndef _JPGANIMATION_H_
#define _JPGANIMATION_H_

#define GAME1MSG_ID 5555
#define GAME2MSG_ID 7777


typedef struct
{
long int messageType_jpg1;
int game1Space;
} structgame1Msg;


typedef struct
{
long int messageType_jpg;
int pressThisButton;
} structgame2Msg;




int AnimationInit(void);

int AnimationPrint(char *jpg,int count_jpg);

int AnimationPrint_2(char *jpg,int count_jpg);

int AnimationPrint_bath(char *jpg, int numberOfJpg);

int AnimationPrint_walk();

int AnimationExit(void);

	
#endif