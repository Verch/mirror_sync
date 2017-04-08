#pragma once

#include "MyUtiles.h"

#include "GameObject_List.h"

#include <boost/shared_ptr.hpp>



#include <functional>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <map>

class cPed
{
public:
	cPed(float x, float y, float z, float	fInterior, float fSpeed, int keyID, bool bInitPlayerPos);
	cPed();

	void set(float x, float y, float z, float fInterior, float fSpeed);

	float	m_fX = -1.0f;
	float	m_fY = -1.0f;
	float	m_fZ = -1.0f;
	float	m_fInterior = -1.0f;
	float	m_fSpeed = -1.0f;

	int		m_iKeyID = -1;;
	bool	m_bInitPlayerPos = false;

public:
	std::string getHexInfo();
};
 
class c_PlayerManager
{
public:
	c_PlayerManager();

	//void refreshPlayerActorPos(std::stringstream& UnBoxBytePos, int messagaSize, int ByClientRemotePortKey);

	cPed createPlayer(std::stringstream& byteArr, int messagaSize, int ByClientRemotePortKey);

	//int getCountPlayerActor();

private:

	void printInfo(std::map <int, cPed>::iterator &it);

	std::string getInfoByAllPlayersInRadius(cPed StreamDistance)
	{


	}
public:
 
	std::shared_ptr	<GameobjectDataBase> m_PlayerActorServIDList;
private:
	std::map <int, cPed> m_map_player;
};







