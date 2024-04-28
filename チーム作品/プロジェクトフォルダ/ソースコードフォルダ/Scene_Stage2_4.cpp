#include "Scene_Stage2_4.h"
#include "Timer.h"
#include "Game3D.h"
#include "Geometory.h"
#include "CameraDebug.h"
#include "DebugConsole.h"
#include "PileBankerBase.h"
#include "StageBase.h"
#include "Camera_Manager.h"
#include "CameraManager_Game.h"
#include "Input.h"
#include "Effect_Manager.h"
#include "CameraStartEvent.h"
#include "XboxKeyboard.h"
#include "BillBoard.h"

CStage2_4::CStage2_4()
{
	SetStageScene(SCENE::SCENE_STAGE2_4);

	const int X = 7, Y = 8;
	int BlockInfo[X * Y] =
	{
		4, 4, 4, 4, 4, 4, 4,
		1, 1, 1, 2, 1, 1, 8,
		2, 2, 2, 1, 2, 2, 2,
		2, 2, 2, 1, 2, 5, 2,
		2, 8, 2, 1, 8, 2, 2,
		2, 2, 2, 1, 2, 2, 2,
		2, 9, 2, 1, 9, 2, 2,
		1, 1, 1, 1, 1, 1, 1,
	};

	int JewelyInfo[X * Y] =
	{
		0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 1, 0, 0, 0,
		0, 0, 0, 0, 0, 1, 0,
		0, 1, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0,
	};

	int HeetInfo[X * Y] =
	{
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
	};


	CreateStage(X, Y, BlockInfo, JewelyInfo, HeetInfo, true);
	SetBGM("Assets/BGM/Stage2.wav");
	SetBackGround(BACKOBJECT::AREA_2);
	//操作説明画像
	SetTutorialImage("Assets/2D/tutorial/tutorial2.png");

	//ゲーム状態の設定
	SetState(GAME_STATE::STATE1_STARTEVENT);
}

CStage2_4::~CStage2_4()
{

}
