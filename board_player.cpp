class Board{
	public��
	int score_player1,score_player2;//��ҷ��� 
	int time;//������ʱ�� 
	Block *block;//����ķ��� 
	char map_player1[][],map_player2[][];//�����ͼ��Ϣ������λ�� 	
	Board();//��ͼ��ʼ�� 
	void confirm();//����������ͼ���� 
	bool is_end();//�ж���Ϸ�Ƿ����	
};//��Ϸ��ͼ��Ϣ�� 
class Player{
	public:
	int key;//��¼������Ϣ 
	int score;//��¼���� 
	Player();//��ʼ�� 
};
