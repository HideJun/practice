#include <windows.h>

int CALLBACK WinMain(
  _In_ HINSTANCE hInstance,
  _In_ HINSTANCE hPrevInstance,
  _In_ LPSTR     lpCmdLine,
  _In_ int       nCmdShow
)
{
  int WINAPI MessageBox(
  NULL,
  "caption",
  "Hello",
  MB_OK
);
  return 0;

}
