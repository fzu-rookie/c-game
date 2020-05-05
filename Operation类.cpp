#include<iostream>
#include<windows.h> 
using namespace std;
//游戏界面类Operation
//使用Windows.h头文件
class Operation
{
	public:
		void GameStart(); //控制游戏开始
		void Init(); //初始化游戏,重置设置
		void Quit(); //退出游戏
		void NewGame();//开始新游戏；
		void GameOver();//结束游戏
		void StopGame();//暂停游戏
		void paintEvent();//绘制界面，加载背景、音频
		void keypressEvent();//键盘事件处理
	//方块操作
		void NewBlock();//随机生成新方块
		void Rotate(); //旋转方块
		void Left(); //左移方块
		void Right();//右移方块
		void Down();//下移方块
		void Sink();//沉底方块
		bool detect();//碰撞监测
		void clearBlocke();//判断、消除方块
		void createBlocke();//消除后对手多出方块
	private:
		//Board *board;//游戏的地图信息
		//Player *player1，*player2;//游戏的玩家
};
