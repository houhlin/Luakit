#pragma once
extern "C" {
#include "lua.h"
}
#define LUA_FILE_METATABLE_NAME "lua.file"

extern int luaopen_file(lua_State* L);

