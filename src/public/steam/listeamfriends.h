
//====== Copyright � 1996-2004, Valve Corporation, All rights reserved. =======
//
// Purpose: interface to friends data in Steam
//
//=============================================================================

#ifndef LISTEAMFRIENDS_H
#define LISTEAMFRIENDS_H
#ifdef _WIN32
#pragma once
#endif

/* type for ISteamFriends functions */
typedef ISteamFriends lua_ISteamFriends;



/*
** access functions (stack -> C)
*/

LUA_API lua_ISteamFriends     *(lua_tosteamfriends) (lua_State *L, int idx);


/*
** push functions (C -> stack)
*/
LUA_API void  (lua_pushsteamfriends) (lua_State *L, lua_ISteamFriends *pSteamFriends);



LUALIB_API lua_ISteamFriends *(luaL_checksteamfriends) (lua_State *L, int narg);


LUALIB_API int luaopen_ISteamFriends(lua_State *L);

#endif // LISTEAMFRIENDS_H
