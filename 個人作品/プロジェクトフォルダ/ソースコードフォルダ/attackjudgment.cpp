#include <stdlib.h>
#include "attackjudgment.h"
#include "enemy.h"
#include "player.h"

bool AttackJudgment::Judgment(Enemy *enemy)
{
	// プレイヤーが索敵範囲内に入ったら追いかける
	if (enemy->AttackJudg())
	{
		return true;
	}

	return false;
}
