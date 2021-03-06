// ImGui Win32 + DirectX8 binding
// In this binding, ImTextureID is used to store a 'LPDIRECT3DTEXTURE8' texture identifier. Read the FAQ about ImTextureID in imgui.cpp.

// You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
#include <Windows.h>

struct IDirect3DDevice8;

void THRotatorImGui_RenderDrawLists(ImDrawData* drawData);

IMGUI_API LRESULT ImGui_ImplDX8_WndProcHandler(HWND, UINT msg, WPARAM wParam, LPARAM lParam);

void ImGui_ImplDX8_UpdateDevice(IDirect3DDevice8* device);

IMGUI_API bool        ImGui_ImplDX8_Init(void* hwnd, IDirect3DDevice8* device);
IMGUI_API void        ImGui_ImplDX8_Shutdown();
void THRotatorImGui_UpdateAndApplyFixedStates();
static bool ImGui_ImplWin32_UpdateMouseCursor();
IMGUI_API void        ImGui_ImplDX8_NewFrame();

// Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplDX8_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplDX8_CreateDeviceObjects();

// Handler for Win32 messages, update mouse/keyboard data.
// You may or not need this for your implementation, but it can serve as reference for handling inputs.
// Commented out to avoid dragging dependencies on <windows.h> types. You can copy the extern declaration in your code.
/*
IMGUI_API LRESULT   ImGui_ImplDX8_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
*/