#include <string>

/*DOCUMENTATION & Q&A:
Year, Month, Week, Day, Hour, Minutes, Seconds, are pretty self explanitory, However...

Month_4YR, standing for Month_forYearRollover, is the amount of Months needed to increment the Year integer
D_4WR, Standing for Days_forWeekRollover, is the amount of days that make up a week.
H_ID, Standing for Hours_InDay, is the amount of Hours needed to increment the Day integer
M_IH, Standing for Minutes_InHours, is the amount of Minutes needed increment the Hour integer
S_IM, Standing for Seconds_InMinutes, is the amount of Seconds to increment the Minutes integer
DIM, standing for Days in Month, its the amount of days that have to pass to increment the Month integer
DOW, Stands for Day of week

sidenote about hours: Hope you like millitary time! ehh, you can program a am/pm bool logic it takes like an 
if statement and another int and bool at worst...I belive in you. :)

The reason I didn't want to tie anything to incrementing Seconds, is so you can control what does. If you want to plug this into a more complex system
for some reason, you can if...you want i guess. 

Q:What's this useful for?
A: Not having to write this basic as fuck file for tracking time past, it takes prescious minutes off your life everytime you forget where
you placed a file that did something to this affect.

Q:Why didn't you make the values by default work how this stuff works in the real world?
A: Because I care little for assmuning what you will use this for, I think this can also help poeple making creative works, and make them put thought into
how date and time works in said work and make the programers have to be not in a coma when importing stuff if they want it to work
in the way it does in the real world. 

Q:Why didn't you add millaseconds,microsecond,nanoseconds?
A: Do that yourself if you need to be that anal 'bout it. Seconds work just fine.

Q: Will you fix Problems.
A: I made this while have being up for 23 Hours, I dont feel bad if I missed something, I might, but don't hold me to it. :)
*/



int Year = 1;
int Month = 1;
int Month_4YR;
int Week = 1;
int Day = 1;
int DOW =1;
int DIM;
int D_4WR;
int Hour;
int H_ID;
int Minutes;
int M_IH;
int Seconds;
int S_IM;

void increase_Year(){
    Year++;
}

void increase_Month(){
    Month++;
    if (Month > Month_4YR)
    {
        increase_Year();
        Month = 1;
    }
}

void increase_Week(){
    Week++;
}

void increase_Day(){
    Day++;
    DOW++;

    if (DOW > D_4WR)
    {
        increase_Week();
        DOW = 1;
    }
    
    if (Day > DIM)
    {
        increase_Month();
        Day = 1;
        DOW = 1;
        Week = 1;
    }
}

void increase_Hour(){
    Hour++;
    if(Hour == H_ID ){
        increase_Day();
        Hour = 0;
    }
}

void increase_Min(){
    Minutes++;
    if (Minutes == M_IH)
    {
        increase_Hour();
        Minutes = 0;
    }
    
}

void increase_Seconds(){
    Seconds++;
    if(Seconds == S_IM){
        increase_Min();
        Seconds = 0;
    }
}

