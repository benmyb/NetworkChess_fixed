#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include "ofxAssimpModelLoader.h"
#include "board.h"

class player {
protected:
	string m_name;
	ofImage m_face;
	bool m_onTop = true;
	bool m_ishuman = true;
	bool m_isWhite = true;
	ofxAssimpModelLoader m_hand;
	ofxAssimpModelLoader m_bowl;
	ofxAssimpModelLoader m_chess_stack;
	unsigned m_wins = 0;
	unsigned m_loses = 0;	
public:
	int m_color;// 我的棋子是什么颜色的？？？
	int m_level=4;// 难度等级
	player() {}
	void init();
	void name_reset(const string& name);
	void face_reset(const string& name);
	void hand_reset(const string& name);
	void bowl_reset(const string& name);
	void stack_reset(const string& name);
	void data_reset();

	void settop(bool top);
	void sethuman(bool human);
	void setwhite(bool white);

	const string& name()const { return m_name; }
	ofImage& face() { return m_face; }
	ofxAssimpModelLoader& hand() { return m_hand; }
	bool ishuman() { return m_ishuman; }

	virtual bool step(int & p1, int & p2) { return 0; }
};

#endif // !PLAYER_H
