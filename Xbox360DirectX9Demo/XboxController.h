#pragma once
#define DPAD_UP 0x1
#define DPAD_DOWN 0x2
#define DPAD_LEFT 0x4
#define DPAD_RIGHT 0x8
#define BUTTON_START 0x10
#define BUTTON_BACK 0x20
#define LEFT_THUMB 0x40
#define RIGHT_THUMB 0x80
#define BUTTON_LB 0x100
#define BUTTON_RB 0x200
#define BUTTON_A 0x1000
#define BUTTON_B 0x2000
#define BUTTON_X 0x4000
#define BUTTON_Y 0x8000
struct ThumbStickState {
	short x, y;
};
unsigned short getControllerButtons();
ThumbStickState* getLeftThumbStick();
ThumbStickState* getRightThumbStick();