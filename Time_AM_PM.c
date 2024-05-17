#include <stdio.h>
#include <unistd.h>

// Platform-specific includes and definitions
#ifdef _WIN32
#include <windows.h>

void setConsoleColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

#else

void setConsoleColor(const char* color) {
    printf("%s", color);
}

#endif

void resetColor() {
#ifdef _WIN32
    setConsoleColor(7);  // Default console color on Windows
#else
    setConsoleColor("\033[0m");  // Reset to default color on Unix/Linux
#endif
}

int main() {
    int hours, minutes, seconds;

    printf("Enter Hours, Minutes, Seconds: ");
    scanf("%d%d%d", &hours, &minutes, &seconds);

    for (; hours < 24; hours++) {
        for (; minutes < 60; minutes++) {
            for (; seconds < 60; seconds++) {
                if (hours < 12) {
#ifdef _WIN32
                    setConsoleColor(10);  // Green color for AM on Windows
#else
                    setConsoleColor("\033[1;32m");  // Green color for AM on Unix/Linux
#endif
                    printf("%02d:%02d:%02d AM\n", hours, minutes, seconds);
                } else {
#ifdef _WIN32
                    setConsoleColor(12);  // Red color for PM on Windows
#else
                    setConsoleColor("\033[1;31m");  // Red color for PM on Unix/Linux
#endif
                    printf("%02d:%02d:%02d PM\n", hours - 12, minutes, seconds);
                }

                sleep(1);
                resetColor();  // Reset to default color

                // Clear the current line (useful if you want to overwrite the same line)
                // printf("\r");  // Use "\r" to return the cursor to the beginning of the line
                // Alternatively, you can clear the screen for each update (optional)
                // system("clear");  // Use "clear" for Unix/Linux or "cls" for Windows
            }
            seconds = 0;  // Reset seconds for the next minute
        }
        minutes = 0;  // Reset minutes for the next hour
    }

    return 0;
}
