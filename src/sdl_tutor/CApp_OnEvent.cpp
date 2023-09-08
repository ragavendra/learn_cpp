#include "CApp.h"
 
void CApp::OnEvent(SDL_Event* Event) {
	    CEvent::OnEvent(Event);
}
 
void CApp::OnExit() {
	    Running = false;
}

/*
void CApp::OnEvent(SDL_Event* Event) {
	CEvent::OnEvent(Event);
	    if(Event->type == SDL_QUIT) {
		          Running = false;
				  }
}

void CApp::OnExit() {
	Running = false;
}*/
