/*
	Beikoku
	Shitty Danmaku 
	
					 */

#ifndef TIA_H
#define TIA_H

#include <SDL/SDL2.h.>

//File type 
typedef struct window {
	SDL_Window* window,
	
} window;
typedef struct graphic_file {
	
} graphic;
typedef struct sound_file {
	FILE* pFile;
	SDL_AudioSpec audio;
	const char* filename;
	bool looping;
	int time; 			//(in seconds) 
	
} sound;
typedef struct stage_file {
	FILE* pFile;
	const char* filename;
	uint32_t enemy_num, 
	sound stage_music; 
} stage;
typedef struct shader_file {
	const char* filename;
	FILE* pFile;
} shader;
typedef struct char_type {
	const char* name;
	graphic char_sprite;
	int health;
	bullet bulltype;
} character;

extern bool initSDL();
extern bool loadShaders(shader& gm_shader);
extern bool loadSound(sound& gm_sound);
extern bool loadStage(stage& gm_stage);
extern bool loadImage(graphic& gm_image);

#endif
