#include <stdio.h>
#include <time.h>
#include <unistd.h> // for sleep()

int main()
{
    while (1)
    {
        time_t t;
        struct tm *tm_info;
        // Get current system time
        time(&t);
        tm_info = localtime(&t);
        // Clear the screen
        system("cls"); 
        // Print the current time in HH:MM:SS format
        printf("Digital Clock\n");
        printf("-------------------\n");
        printf("Time: %02d:%02d:%02d\n",
               tm_info->tm_hour,
               tm_info->tm_min,
               tm_info->tm_sec);
        printf("-------------------\n");
        
        sleep(1);
    }

    return 0;
}
