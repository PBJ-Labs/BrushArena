#ifndef CMDLIB_H
#define CMDLIB_H

//cmdlib.h programmed by PB&J(*this)->sandwich;

#include <list>
#include <vector>
#include <stack>
#include <string>

void sysprintf(const char * text, ...);//printf
void sys_sprintf(char * c, const char * format, int id);//sprintf

int g_ApplicationId;

typedef std::string CString;
CString Application_Title[];
std::vector<CString> AppArrayStr[];

#endif
