#pragma once
#include "Module.h"
class Blink : public IModule {
private:
	std::vector<C_MovePlayerPacket*> MovePlayerPacketHolder;
	std::vector<PlayerAuthInputPacket*> PlayerAuthInputPacketHolder;

public:
	Blink();
	~Blink();

	// Inherited via IModule
	virtual void onTick(C_GameMode* gm);
	virtual const char* getModuleName() override;
	virtual const char* getRawModuleName() override;

	inline std::vector<C_MovePlayerPacket*>* getMovePlayerPacketHolder() { return &MovePlayerPacketHolder; };
	inline std::vector<PlayerAuthInputPacket*>* getPlayerAuthInputPacketHolder() { return &PlayerAuthInputPacketHolder; };
};
