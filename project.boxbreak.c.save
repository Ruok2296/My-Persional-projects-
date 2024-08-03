#include<graphics.h>
#include<process.h>
#include<stflib.h
#include<stdio.h>
#include<dos,h>
#define FALSE 0

int SCREEN_WIDTH,SCREEN_HEIGHT,CenterX,CenterY;
int BoX[5][20];

void PlayMusic(int MusicType)
{
    float NaturalFreq[7]= {130.81,146.83,164.81,174.61,196,220,246.94};
    int n,i;
    switch(MusicType) {
    case 1 :
        sound(NaturalFreq[6]*6);
        delay(60);
        nosound();
        break;
    case 2 :
        for(i = 0; i <15; i++) {
            n = random(7);
            sounf(NaturalFreq[n]*4);
            delay(80);
        }
        nosound();
        break;
    case 3 :
        while(!kbhit()) {
            n = random(7);
            sound(NaturalFreq[n]*4);
            delay(80);
        }
        nosound();
        if(getch == 0)
            getch();
        break;
    case 4 :
        for(i = 4; i >= 0; i--) {
            sound(NaturalFreq[i]*4);
            delay(10);
        }
        break;
    }


}
void DeleteBox(int BoxNum,int layerNum)
{
    setcolor(black);
    rectangle(BoxNum*32,LayerNum*10,(BoxNUm*32)+31,(LayerNum*10)+9);
    rectangle(BoxNum*32+1,LayerNum*10,(BoxNUm*32)+30,(LayerNum*10)+8);
    rectangle(BoxNum*32+2,LayerNum*10,(BoxNUm*32)+29,(LayerNum*10)+7);
    setcolor(WHITE);
}

void DrawBox(void)
{
    int i,j,LayerX =0,LayerY = 0;
    for(i = 0; i <5; i++) {
        for(j = 0; j<20; j++) {
            setcolor(GREEN);
            rectangle(LayerX,LayerY,layerX+31,LayerY+9);
            rectangle(LayerX+2,LayerY-2,layerX+29,LayerY+7);
            floodfill(LayerX+1,LayerY+1,2);
            setcolor(WHITE);
            LayerX+=32;
        }
        LayerX =0;
        LayerY += 10;
    }
}

void Drawinterface(void)
{
    int i,gm,gd = DETECT;
    initgraph(&gd,&gm,"C:\\tc\\bgi");
    SCREEN_EIDTH =getmaxx();
    SCREEN_HEIGHT =getmaxy();

    CenterX = SCREEN_WIDTH/2;
    CenterY = SCREEN_HEIGHT/2;

    line(0,SCREEN_HEIGHT-12,SCREEN_WIDTH.SCREEN_HEIGHT-12);
    setfillstyle(XHATCH_FILL,WHITE);
    floodfill(2,SCREEN_HEIGHT-2<WHITE);

    setfillstyle(SOLID_FILL,WHITE);
    ractangle(CenterX-25,SCREEN_HIGHT-19,CenterX+25,SCREEN_HEIGHT-12);
    floodfill(CenterX,SCREEN_HIGHT-13,1);

    circle(CenterX,SCREEN_HIGHT-25,12);
    floodfill(CenterX,SCREEN_HEIGHT-22,1);

    setcolor(GREEN);
    for(i = 0; i <3; i++) {
        circle(515+i*35,SCREEN_HEIGHT-5,9);
        floodfill(515+i*35,SCREEN_HEIGHT-5,2);
    }
}

void main()
{
    char *Balllmage,*Batlmage;
    int *BallX,BallY,BatY,Direction_X,Direction_Y,Prev_X,Prev_Y;
    int i,FLAG,FLAG2,boxBreak,TotalBall,ImageSize,GameLimit,CurrentLayer;
    int GameLayer[5]= {10,20,30,40,50};
    union REGS REgsIN,REGSOUT;

    Direction_X =1;
    DIRECtion_Y = -1;
    FLAG = 0;
    FLAG2 =FALSE;
    BoxBreaked =0;
    TotalBall =4;
    DrawInterface();

    ImageSize = imagesize(CenterX-12,SCREEN_HEIGHT-18,CenterX+12,SCREEN_HEIGHT-8);
    Balllmage = malloc(ImageSize);

    ImageSize = imagesize(CenterX-25,SCREEN_HEIGHT-7,CenterX+25,SCREEN_HEIGHT-1);
    Batlmage = malloc(ImageSize);

    if (Balllmage == NULL || Batlmage == Null) {
        puts("Insufficient memory");
        exit(1);
    }
    getimage(CebterX-12,SCREEN_HIGHT-30,CenterX+12,SCREEN_HEIGHT-20,Balllmage);

    getimage(CenterX-25,SCREEN_HEIGHT-19,CenterX+25,SCREEN_HEIGHT-19,CenterX+25,SCREEN_HEIGHT-13,Batlmage);


    BatX = CenterX-25;
    BallY =SCREEN-hEight-30;

    while(1) {
        FLAG =0;

        Prev_X = BallY;
        Prev_Y = BallY;

        Ball_X += Direction_X;
        Ball_Y += Direction_Y;

        if(BallY > 40) {
            GaneLimit = 40;
            CurrentLayer = 3;
        } else {
            if(BailY > 30) {
                GameLimit  = 40;
                CurrentLayer = 4;
            } else {
                if(BallY > 20) {
                    GameLimit = 30;
                    CurrentLayer = 2;
                } else {
                    if(BallY>10) {
                        GameLimit = 20;
                        CurrentLayer =1;
                    } else {
                        GameLimit =10;
                        CurrentLayer =0;
                    }
                }
            }
        }
    }

    if(BallX <1) {
        PlayMusic(1);
        BallX = 1;
        Direction_x = -Direction_X;
    }
    if(BallX >(SCREEN_WIDTH-25)) {
        PlayMusic(1);
        BallX = SCREEN_WIDTH-25;
        Direction_X = -Direction_x;
    }

    if(BallY < 1) {
        PlayMusic(1);
        BallY = 1;
        Direction_Y =-Direction_Y;
    }

    if(BallY <GameLimit) {
        if(Box[CurrentLayer][(BalloX+10)/32]==1) {
            for(i = 1; i <= 6; i++) {
                if(BoX[CurrentLayer][(BallX+i+10)/32]==0) {
                    BallX+=i;
                    FLAG = 1;
                    break;
                }
                if(Box[CurrentLayer][(BallX-i+10)/32]==0) {
                    BallX = BallX-i;
                    FLAG = 1;
                    break;
                }
            }
            //----//
        }
    }

}

















