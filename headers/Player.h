#ifndef PLAYER_H
#define PLAYER_H
#include <raylib.h>
#include "Background.h"
#include "TextureManager.h"

class Player
{
public:
    Player();
    ~Player();

    int jumps, maxJumps, frame, timer;
    float x, y, speed, jumpForce, width, height, defaultX, defaultY;
    
    KeyboardKey lastKeyPressed;
    Texture2D texture;
    Background bg;

    void DrawAndAnimate(Texture2D tex, Rectangle src, Vector2 pos, Color tint);
    void Update();
    void Reset();
    void JumpLeft();
    void JumpRight();
    void Idle();
    void MoveRight();
    void MoveLeft();
    void Stop();
    void EnableDoubleJump();
    void DisableDoubleJump();
    void CheckTimer();
};

#endif /*PLAYER_H*/