
int Year = 1;
int Month = 1;
int Month_4YR;
int Week = 1;
int Day = 1;
int DOW =0;
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
        DOW = 0;
    }
    
    if (Day > DIM)
    {
        increase_Month();
        Day = 1;
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
