/*a code to determine how many year a particulation population to reach certain amount of people*/
#include<stdio.h>
#include<math.h>

int main(){
    int start_pop = 2000;
    int target_pop = 2000000;
    float growth_rate = 0.15; 
    int half_year = 0;
    int years = 0;

    while (start_pop < target_pop) {
        start_pop += start_pop * growth_rate ;
        half_year++;
    }
    years = half_year / 2;

    printf("years needed to reach 2 million population is: %d\n", years);




}