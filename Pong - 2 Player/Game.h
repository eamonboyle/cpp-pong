#pragma once
#include <SDL.h>

struct Vector2
{
	float x;
	float y;
};

#undef main
class Game
{
public:
	Game();
	bool Initialize();
	void RunLoop();
	void Shutdown();

private:
	void ProcessInput();
	void UpdateGame();
	void GenerateOutput();

	SDL_Window* mWindow;
	SDL_Renderer* mRenderer;
	Uint32 mTicksCount;

	bool mIsRunning;

	int mPaddleDir;
	Vector2 mPaddlePos;

	int mPaddle2Dir;
	Vector2 mPaddle2Pos;

	Vector2 mBallPos;
	Vector2 mBallVel;
};