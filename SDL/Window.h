#ifndef SR_SDL_WINDOW_H
#define SR_SDL_WINDOW_H

namespace SR
{
	namespace SDL
	{
		class Window
		{
			private:
			public:
				Window();
				~Window();
			
				void Init();	
				void CreateWindow();
				void Render();
		};
	}
}
#endif
