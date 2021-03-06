#pragma once

enum OBJECT_TYPE {
	OBJECT_BUILDING,
	OBJECT_CHARACTER,
	OBJECT_BULLET,
	OBJECT_ARROW,
};

enum OBJECT_TEAM {
	TEAM_ALLY,
	TEAM_ENEMY,
};

class GameObject
{
private:
	float posX;
	float posY;
	float posZ;
	float Size;
	float R, G, B;
	float Alpha;
	float vX;
	float vY;
	float Speed;
	int dir;
	int charDIR;
	int MaxLife;
	int Life;
	int LifeTime;
	int Type;
	int Team;
	int Kind;
	float Level;
	float cumulatedTime=0; 

public:
	float getposX() { return posX; }
	float getposY() { return posY; }
	float getposZ() { return posZ; }
	float getSize() { return Size; }
	float getR() { return R; }
	float getG() { return G; }
	float getB() { return B; }
	float getAlpha() { return Alpha; }
	int getKind() { return Kind; }
	void minusLife(int minusValue) { Life -= minusValue;  }
	void setLife(int value) { Life = value; }
	int getDir() { return dir; }
	int getCharDir() { return charDIR; }
	int getType() { return Type; }
	int getTeam() { return Team; }
	int getMaxLife() { return MaxLife; }
	int getLife() { return Life; }
	int getLifeTIme() { return LifeTime; }
	int getLevel() { return Level; }
	float getcumulatedTime() { return cumulatedTime; }
	
public:
	GameObject(POS pos, int type, int team, int kind);
	void Update(float elapsedTIme, int type);

};
