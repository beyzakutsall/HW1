#include <stdio.h>
int main(){
    
    float popularity, size, homeValue;
    printf("Enter popularity of the land:");
    scanf("%f",&popularity);
    printf("Enter the size of the house:");
    scanf("%f",&size);
    homeValue= (popularity*popularity*popularity+size*size)*1000;
     
    printf("This home calues: %f", homeValue);
    
    return 0;
    
    }
