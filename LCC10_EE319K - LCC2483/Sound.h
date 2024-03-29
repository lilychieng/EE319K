// Sound.h
// Runs on TM4C123 or LM4F120
// Prototypes for basic functions to play sounds from the
// original Space Invaders.
// Jonathan Valvano
// 1/17/2020

#include <stdint.h>
void SoundTask(void);
void Sound_Init(void);
void Sound_Play(const uint8_t *pt, uint32_t count);
void Sound_Shoot(void);
void Sound_Killed(void);
void Sound_Explosion(void);

void Sound_Fastinvader1(void);
void Sound_Fastinvader2(void);
void Sound_Fastinvader3(void);
void Sound_Fastinvader4(void);
void Sound_Highpitch(void);
void Game_Over(void);
void Vic_Tory(void);
void Sound_Pause(void);
void Sound_Menu(void);

