#ifndef SR_IGAMESTATE_H
#define SR_IGAMESTATE_H

class IGameState
{
	private:
	public:
		virtual ~IGameState() { }
		virtual void OnStartup() { }
		virtual void OnExit() { }
		virtual void Update()=0;
};
#endif
