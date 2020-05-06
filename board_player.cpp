class Board{
	public：
	int score_player1,score_player2;//玩家分数 
	int time;//下落间隔时间 
	Block *block;//下落的方块 
	char map_player1[][],map_player2[][];//保存地图信息，方块位置 	
	Board();//地图初始化 
	void confirm();//方块下落后地图更新 
	bool is_end();//判断游戏是否结束	
};//游戏地图信息类 
class Player{
	public:
	int key;//记录按键信息 
	int score;//记录分数 
	Player();//初始化 
};
