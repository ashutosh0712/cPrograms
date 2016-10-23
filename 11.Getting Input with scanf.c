#include <stdio.h>

int main(){
    
    char firstName[20];
    char wifeName[20];
    
    int numberOfBabies;
    
    printf("whats is the your name ? \n");
    scanf("%s",firstName);
    
    printf("whats is the name of your wife ? \n");
    scanf("%s",wifeName);
    
    printf("how many babies will you have? \n");
    scanf("%d",&numberOfBabies);
    
    printf("%s and %s are in love and will have %d babies\n",firstName,wifeName,numberOfBabies);
    
    
    return 0;
}
