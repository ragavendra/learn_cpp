g++ CApp.cpp CApp_OnEvent.cpp CApp_OnInit.cpp CApp_OnLoop.cpp CApp_OnRender.cpp CApp_OnCleanup.cpp -o CApp -I/usr/include/SDL -D_GNU_SOURCE=1 -D_REENTRANT
-L/usr/lib -lSDL

g++ CApp.cpp CApp_OnEvent.cpp CApp_OnInit.cpp CApp_OnLoop.cpp CApp_OnRender.cpp CApp_OnCleanup.cpp -o CApp `sdl-config --cflags --libs`
