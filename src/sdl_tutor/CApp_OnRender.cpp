#include "CApp.h"
 
void CApp::OnRender() {
	CSurface::OnDraw(Surf_Display, Surf_Test, 0, 0);
	CSurface::OnDraw(Surf_Display, Surf_Test, 100, 100, 0, 0, 60, 60);
	SDL_Flip(Surf_Display);
}
