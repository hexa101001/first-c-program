#include <stdio.h>
#include <unistd.h>

int main() {
    char spinner[] = {'|', '/', '-', '\\'};
    char ans;
    
    printf("DO YOU LOVE ME?\n");
    printf("(Y/N)\n");
    scanf(" %c", &ans);
    
    if (ans == 'Y' || ans == 'y') {
        printf("O really baby do you love me\n");
        fflush(stdout);
        sleep(1);
        printf("love you to baby \n");
    } else {
        printf("Fuck you witch\n");
        fflush(stdout);
        sleep(1);
        
        printf("YOU GONNA DIE BABY  ]:)\n");
        fflush(stdout);
        sleep(1);
        
        printf("💥 DETONATION IMMINENT 💥\n");  // Clean version!
        
        for (int i = 10; i >= 1; i--) {
            printf("\r💣 %d", i);
            fflush(stdout);
            sleep(1);
        }
        
        printf("\n💥 BOOOOOOOOOOM 💥\n");
        sleep(1);
        
        printf("Checking if she is alive\n");
        
        for (int i = 0; i < 20; i++) {
            printf("\rSearching %c", spinner[i % 4]);
            fflush(stdout);
            usleep(200000);
        }
        
        printf("\nALL CLEAR\n");
    }
    
    return 0;
}
