/*
	Beikoku
	Shitty Danmaku 
	
					 */

#ifndef TIA_H
#define TIA_H

#include <SDL/SDL2.h.>

typedef struct sound_file {
	FILE* pFile;
	SDL_AudioSpec audio;
	const char* filename;
	bool looping;
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

extern bool initSDL();
extern bool loadShaders(shader& gm_shader);
extern bool loadSound(sound& gm_sound);
extern bool loadStage(stage& gm_stage);

#endif
