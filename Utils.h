#pragma once
#include <windows.h>
#include <timeapi.h>
#include <string>
#include <utility>
#include "imgui\imgui.h"

void LogError(std::string msg);
void LogInfo(std::string msg);

int CalTimePeriod(LARGE_INTEGER start, LARGE_INTEGER end);
void GetTime(LARGE_INTEGER* t);
void InitUtils();
void Delay(int millisec);

ImVec2 GetStageFromClient(ImVec2 client, ImVec2 client_sz, bool is_1P);
ImVec2 GetClientFromStage(ImVec2 stage, ImVec2 client_sz, bool is_1P);

constexpr int c_no_port = -1;
bool test_is_ipv6(const std::string& addr);
std::tuple<std::string, int, bool> get_addr_and_port(const std::string& addr);

#define VALUED(x)  (*(DWORD*)(x))
#define VALUEF(x)  (*(float*)(x))
#define VALUEW(x)  (*(WORD*)(x))
#define VALUEV(x,T)  (*(T*)(x))