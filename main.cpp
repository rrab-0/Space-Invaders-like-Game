#include <iostream>
#include <windows.h>
#include <graphics.h>
#include <MMsystem.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
// #pragma comment(lib, "winmm.lib")

void menu();
void controls();
void game();
void round2();
void round3();
void wonr1();
void wonr2();
void victory();

void awan1(float xp, float yp, float scale){
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    float x[12], y[12];
    x[0]=0;y[0]=-4;
    x[1]=1;y[1]=-4;
    x[2]=1;y[2]=-3;
    x[3]=2;y[3]=-3;
    x[4]=2;y[4]=-2;
    x[5]=3;y[5]=-2;
    x[6]=3;y[6]=0;
    x[7]=0;y[7]=0;
        for(int i=0;i<7;i++){
            line(x[i]*scale+xp,y[i]*scale+yp,x[i+1]*scale+xp,y[i+1]*scale+yp);
        }
        for(int i=0;i<7;i++){
            line(-x[i]*scale+xp,y[i]*scale+yp,-x[i+1]*scale+xp,y[i+1]*scale+yp);
        }
    floodfill(2.99*scale+xp,-0.01*scale+yp,WHITE);
    floodfill(-2.9*scale+xp,-0.01*scale+yp,WHITE);
}

void awan2(float xp, float yp, float scale){
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    float x[12], y[12];
    x[0]=0;y[0]=-4;
    x[1]=1;y[1]=-4;
    x[2]=1;y[2]=-3;
    x[3]=3;y[3]=-3;
    x[4]=3;y[4]=-1;
    x[5]=4;y[5]=-1;
    x[6]=4;y[6]=0;
    x[7]=0;y[7]=0;
        for(int i=0;i<7;i++){
            line(x[i]*scale+xp,y[i]*scale+yp,x[i+1]*scale+xp,y[i+1]*scale+yp);
        }
        for(int i=0;i<7;i++){
            line(-x[i]*scale+xp,y[i]*scale+yp,-x[i+1]*scale+xp,y[i+1]*scale+yp);
        }
    floodfill(3.9*scale+xp,-0.1*scale+yp,WHITE);
    floodfill(-3.9*scale+xp,-0.1*scale+yp,WHITE);
}

void orang(float xp, float yp, float scale){
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,DARKGRAY);
    float x[30], y[30],xa,ya;
    x[0]=7;y[0]=-9;
    x[1]=12;y[1]=-6;
    x[2]=7;y[2]=-3;
    x[3]=3;y[3]=-6;
    x[4]=3;y[4]=-8;
    x[5]=7;y[5]=-9;
    //mata
    x[6]=7;y[6]=-8;
    x[7]=11;y[7]=-6;
    x[8]=9;y[8]=-5;
    x[9]=7;y[9]=-7;
    x[10]=7;y[10]=-8;
    //mulut
    x[11]=7;y[11]=-4;
    x[12]=6;y[12]=-5;
        for(int i=0;i<5;i++){
            line(x[i]*scale+xp,y[i]*scale+yp,x[i+1]*scale+xp,y[i+1]*scale+yp);
        }
        for(int i=6;i<10;i++){
            line(x[i]*scale+xp,y[i]*scale+yp,x[i+1]*scale+xp,y[i+1]*scale+yp);
        }
        for(int i=11;i<12;i++){
            line(x[i]*scale+xp,y[i]*scale+yp,x[i+1]*scale+xp,y[i+1]*scale+yp);
        }
}

void musuh(float xp, float yp, float scale){
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    float x[20], y[20],xm1,ym1;
    //badan
    x[0]=6.91;y[0]=-11.14;
    x[1]=12;y[1]=-10;
    x[2]=8.19;y[2]=-7.29;
    x[3]=10.39;y[3]=-5.9;
    x[4]=12.6;y[4]=-6.3;
    x[5]=14.97;y[5]=-7.52;
    x[6]=16.77;y[6]=-8.97;
    x[7]=17;y[7]=-12.07;
    x[8]=14.86;y[8]=-13.75;
    x[9]=12.39;y[9]=-15.06;
    x[10]=10.28;y[10]=-14.85;
    x[11]=8.36;y[11]=-13.72;
    x[12]=7.2;y[12]=-12.51;
    x[13]=6.91;y[13]=-11.14;
    //mata
    x[14]=10.36;y[14]=-13.43;
    x[15]=9.06;y[15]=-12.59;
    x[16]=8.91;y[16]=-11.84;
    x[17]=10.36;y[17]=-12.39;
    x[18]=10.36;y[18]=-13.43;
        for(int i=0;i<13;i++){
            line(x[i]*scale+xp,y[i]*scale+yp,x[i+1]*scale+xp,y[i+1]*scale+yp);
        }
        for(int i=14;i<18;i++){
            line(x[i]*scale+xp,y[i]*scale+yp,x[i+1]*scale+xp,y[i+1]*scale+yp);
        }
}

void musuh2(float xp, float yp, float scale){
    setcolor(LIGHTCYAN);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    float x[40], y[40],xmm,ymm;
    x[0]=4.9;y[0]=-6.24;
    x[1]=3.24;y[1]=-5;
    x[2]=5.3;y[2]=-4.95;
    x[3]=6.02;y[3]=-4.24;
    x[4]=6.81;y[4]=-3.56;
    x[5]=7.66;y[5]=-3.24;
    x[6]=8.52;y[6]=-3.28;
    x[7]=9.57;y[7]=-3.5;
    x[8]=10.08;y[8]=-4.17;
    x[9]=10.5;y[9]=-4.97;
    x[10]=10.52;y[10]=-5.097;
    x[11]=10.34;y[11]=-7;
    x[12]=9.73;y[12]=-8.17;
    x[13]=8.88;y[13]=-8.81;
    x[14]=7.81;y[14]=-9.1;
    x[15]=6.81;y[15]=-8.81;
    x[16]=6;y[16]=-8;
    x[17]=5.44;y[17]=-7.17;
    x[18]=4.9;y[18]=-6.24;
    //mata
    x[19]=5.84;y[19]=-6.51;
    x[20]=6.53;y[20]=-7.24;
    //mulut
    x[21]=6.2;y[21]=-4.09;
    x[22]=6.57;y[22]=-4.38;
    //wingies
    x[23]=9.39;y[23]=-8.42;
    x[24]=10.45;y[24]=-9.04;
    x[25]=11;y[25]=-10;
    x[26]=11.94;y[26]=-9.21;
    x[27]=12.75;y[27]=-8.18;
    x[28]=12.88;y[28]=-7.27;
    x[29]=11.79;y[29]=-8.45;
    x[30]=11.25;y[30]=-8.8;
    x[31]=9.73;y[31]=-8.18;
    //2nd wing
    x[32]=9.18;y[32]=-8.58;
    x[33]=9.85;y[33]=-9.16;
    x[34]=10.2;y[34]=-10.17;
    x[35]=10.82;y[35]=-9.69;
    //2nd part of 2nd wing
    x[36]=11.25;y[36]=-8.8;
    x[37]=11.69;y[37]=-8;
    x[38]=11.63;y[38]=-7.53;
    x[39]=10.58;y[39]=-8.52;


        for(int i=0;i<18;i++){
            line(x[i]*scale+xp,y[i]*scale+yp,x[i+1]*scale+xp,y[i+1]*scale+yp);
        }
        for(int i=19;i<20;i++){
            line(x[i]*scale+xp,y[i]*scale+yp,x[i+1]*scale+xp,y[i+1]*scale+yp);
        }
        for(int i=21;i<22;i++){
            line(x[i]*scale+xp,y[i]*scale+yp,x[i+1]*scale+xp,y[i+1]*scale+yp);
        }
        for(int i=23;i<31;i++){
            line(x[i]*scale+xp,y[i]*scale+yp,x[i+1]*scale+xp,y[i+1]*scale+yp);
        }
        for(int i=32;i<35;i++){
            line(x[i]*scale+xp,y[i]*scale+yp,x[i+1]*scale+xp,y[i+1]*scale+yp);
        }
        for(int i=36;i<39;i++){
            line(x[i]*scale+xp,y[i]*scale+yp,x[i+1]*scale+xp,y[i+1]*scale+yp);
        }
}

void musuh3(float xp, float yp, float scale){
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    float x[40], y[40],xmmm,ymmm;
    x[0]=2.77;y[0]=-4.51;
    x[1]=2.35;y[1]=-3.76;
    x[2]=2.1;y[2]=-2.46;
    x[3]=1.85;y[3]=-2.04;
    x[4]=2.25;y[4]=-1.79;
    x[5]=2.8;y[5]=-1.68;
    x[6]=3.3;y[6]=-1.92;
    x[7]=3.03;y[7]=-1.49;
    x[8]=3.84;y[8]=-1.46;
    x[9]=4.52;y[9]=-1.51;
    x[10]=4.97;y[10]=-1.84;
    x[11]=5.42;y[11]=-2.04;
    x[12]=5.87;y[12]=-2.39;
    x[13]=6.25;y[13]=-2.88;
    x[14]=6.26;y[14]=-3.55;
    x[15]=6.08;y[15]=-4.17;
    x[16]=5.61;y[16]=-4.49;
    x[17]=4.78;y[17]=-4.47;
    x[18]=4.05;y[18]=-4.23;
    x[19]=3.65;y[19]=-3.91;
    x[20]=2.77;y[20]=-4.51;
    //mata
    x[21]=3.88;y[21]=-3.5;
    x[22]=4.15;y[22]=-3.71;
    x[23]=4.47;y[23]=-3.75;
    x[24]=4.71;y[24]=-3.66;
    x[25]=4.79;y[25]=-3.52;
    x[26]=4.69;y[26]=-3.39;
    x[27]=4.38;y[27]=-3.3;
    x[28]=4.07;y[28]=-3.27;
    x[29]=3.88;y[29]=-3.5;
        for(int i=0;i<20;i++){
            line(x[i]*scale+xp,y[i]*scale+yp,x[i+1]*scale+xp,y[i+1]*scale+yp);
        }
        for(int i=21;i<29;i++){
            line(x[i]*scale+xp,y[i]*scale+yp,x[i+1]*scale+xp,y[i+1]*scale+yp);
        }
}

void menu(){
    while(1){
        if(GetAsyncKeyState(VK_SPACE)<0){
            sndPlaySound("assets/sound-effect/coin.wav", SND_ASYNC);
            controls();
        }
        if(GetAsyncKeyState(VK_ESCAPE)<0){
            exit(0);
        }
        settextstyle(8,0,15);
        outtextxy(170, 200, "Space and Monsters");
        outtextxy(140, 400, "Press 'Space' to play");
        outtextxy(140, 450, "      'Esc' to exit");
        readimagefile("assets/images/fixx.jpg",0,0,1280,720);
    }
}

void controls(){
    int page=0;
    setactivepage(page);
    setvisualpage(page);
    cleardevice();
    while(1){
        settextstyle(8,0,15);
        setcolor(WHITE);
        outtextxy(90, 300, "'LMB' to shoot");
        outtextxy(100, 350, "Use your mouse to move");
        outtextxy(0, 10, "'Esc' to exit the game");
        outtextxy(95, 450, "Press 'Space' to continue");
        readimagefile("assets/images/fixx.jpg",0,0,1280,720);
        if(GetAsyncKeyState(VK_SPACE)<0){
            sndPlaySound("assets/sound-effect/coin.wav",SND_ASYNC);
            game();
        }
        if(GetAsyncKeyState(VK_ESCAPE)<0){
            exit(0);
        }
        page=1-page;
        delay(0.01);
    }
}

//victory atau wonr3
void victory(){
    int page=0;
    setactivepage(page);
    setvisualpage(page);
    cleardevice();
    while(1){
        settextstyle(8,0,15);
        setcolor(WHITE);
        outtextxy(280, 200, "VICTORY!");
        outtextxy(45, 350, "'Escape' to exit");
        outtextxy(45, 400, "'F1' to main menu");
        outtextxy(45, 450, "'Space' to restart your session!");
        readimagefile("assets/images/fixx.jpg",0,0,1280,720);
        if(GetAsyncKeyState(VK_SPACE)<0){
            sndPlaySound("assets/sound-effect/coin.wav",SND_ASYNC);
            game();
        }
        if(GetAsyncKeyState(VK_ESCAPE)<0){
            exit(0);
        }
        if(GetAsyncKeyState(VK_F1)<0){
            menu();
        }
        page=1-page;
        delay(0.01);
    }
}

void wonr1(){
    int page=0;
    setactivepage(page);
    setvisualpage(page);
    cleardevice();
    while(1){
        settextstyle(8,0,15);
        setcolor(WHITE);
        outtextxy(50, 250, "You won first round!");
        outtextxy(45, 350, "'Escape' to exit");
        outtextxy(45, 400, "'Space' to go to the next round!");
        readimagefile("assets/images/fixx.jpg",0,0,1280,720);
        if(GetAsyncKeyState(VK_SPACE)<0){
            sndPlaySound("assets/sound-effect/coin.wav",SND_ASYNC);
            round2();
        }
        if(GetAsyncKeyState(VK_ESCAPE)<0){
            exit(0);
        }
        page=1-page;
        delay(0.01);
    }
}

void wonr2(){
    int page=0;
    setactivepage(page);
    setvisualpage(page);
    cleardevice();
    while(1){
        settextstyle(8,0,15);
        setcolor(WHITE);
        outtextxy(50, 250, "You won second round!");
        outtextxy(45, 350, "'Escape' to exit");
        outtextxy(45, 400, "'Space' to go to the next round!");
        readimagefile("assets/images/fixx.jpg",0,0,1280,720);
        if(GetAsyncKeyState(VK_SPACE)<0){
            sndPlaySound("assets/sound-effect/coin.wav",SND_ASYNC);
            round3();
        }
        if(GetAsyncKeyState(VK_ESCAPE)<0){
            exit(0);
        }
        page=1-page;
        delay(0.01);
    }
}

void game(){
    srand(time(0));
    int page=0;
    float darahm=100;
    float sc,xp3,yp3,xp4,yp4,xh,yh,xa,ya,
            xm,ym;
    float kenapeluru[100],xpeluru[100],ypeluru[100];
    float kills=0;
    char score[999];
    char darahmm[100];

    xp3=getmaxx();yp3=140;
    xp4=170;yp4=200;
    xh=200;yh=200;
    xa=1000;ya=100;
    //musuh
    xm=400;ym=450;
    for(int i=0;i<10;i++)
    {
        kenapeluru[i]=0;
    }
    //sndPlaySound("OST.wav",SND_ASYNC|SND_LOOP);
    while(1){
        //double buffering
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();
        //background
        readimagefile("assets/images/fixx.jpg",0,0,1280,720);
        //awan
        xp3 = xp3-4;
        if  (xp3<-120)
        {
            xp3=840;
        }
        xp4 = xp4-4;
        if  (xp4<-120)
        {
            xp4=840;
        }
        //musuh
        xm = xm-12;
        if  (xm<-10)
        {
            ym=rand()%300+380;
            xm=730;
        }
        //batas mouse
        xa=0;
        ya=mousey();
        if(ya<360){
            ya=360;
        }
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            for(int i=0;i<10;i++){
                if(kenapeluru[i]==0)
                {
                    sndPlaySound("assets/sound-effect/fixbangetCOPIUM.wav",SND_ASYNC);
                    xpeluru[i]=xa+23;
                    ypeluru[i]=ya-27;
                    kenapeluru[i]=1;
                    clearmouseclick(WM_LBUTTONDOWN);
                    break;
                }
            }
        }
            for(int i=0;i<10;i++){
                if(kenapeluru[i]==1)
                {
                    xpeluru[i]=xpeluru[i]+50;
                    circle(xpeluru[i],ypeluru[i],6);
                    setcolor(WHITE);
                    if (xpeluru[i]>=670)
                    {
                        kenapeluru[i]=0;
                    }
                }
        }
        for(int i=0;i<10;i++){
             //hitbox musuh1
             if(darahm<=0){
                    xm=-120;
                    darahm=100;
                    kills=kills+1;
                }
             if((xpeluru[i]>7+xm)&&(xpeluru[i]<17*5+xm)&&(ypeluru[i]>-15.06*5+ym)&&(ypeluru[i]<-5.9*5+ym)&&xm>0)
             {
                kenapeluru[i]=0;
                darahm=darahm-10;
                 //sndPlaySound("HitMarkerSE.wav",SND_ASYNC);
             }
        }
        //player,enivornment
        awan1(xp3,yp3,20);
        awan2(xp4,yp4,20);
        orang(xa,ya,5);
        //musuh
        musuh(xm,ym,5);
        //score
        sprintf(score,"%.f Points", kills);
        setcolor(WHITE);
        settextstyle(8,0,1);
        outtextxy(10, 5, "Get points to win!");
        outtextxy(10,30,score);
        //darahmusuh
        sprintf(darahmm,"%.f health",darahm);
        setcolor(WHITE);
        settextstyle(8,0,1);
        outtextxy(600,5,darahmm);
        //victory
        if(kills>=10){
            cleardevice();
            wonr1();
        }
        //exit
        if(GetAsyncKeyState(VK_ESCAPE)<0){
            exit(0);
        }
        page=1-page;
        delay(0.1);
    }
}

void round2(){
    srand(time(0));
    int page=0;
    float darahm=300;
    float sc,xp3,yp3,xp4,yp4,xh,yh,xa,ya,
            xmm,ymm;
    float kenapeluru[100],xpeluru[100],ypeluru[100];
    float kills=0;
    char score[999];
    char darahmm[300];

    xp3=getmaxx();yp3=140;
    xp4=170;yp4=200;
    xh=200;yh=200;
    xa=1000;ya=100;
    //musuh2
    xmm=850;ymm=550;
    for(int i=0;i<10;i++)
    {
        kenapeluru[i]=0;
    }
    //sndPlaySound("OST.wav",SND_ASYNC|SND_LOOP);
    while(1){
        //double buffering
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();
        //background
        readimagefile("assets/images/fixx.jpg",0,0,1280,720);
        //awan
        xp3 = xp3-4;
        if  (xp3<-120)
        {
            xp3=840;
        }
        xp4 = xp4-4;
        if  (xp4<-120)
        {
            xp4=840;
        }
        //musuh2
        xmm = xmm-8;
        if  (xmm<0)
        {
            ymm=rand()%250+390;
            xmm=730;
        }
        //batas mouse
        xa=0;
        ya=mousey();
        if(ya<360){
            ya=360;
        }
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            for(int i=0;i<10;i++){
                if(kenapeluru[i]==0)
                {
                    sndPlaySound("assets/sound-effect/fixbangetCOPIUM.wav",SND_ASYNC);
                    xpeluru[i]=xa+23;
                    ypeluru[i]=ya-27;
                    kenapeluru[i]=1;
                    clearmouseclick(WM_LBUTTONDOWN);
                    break;
                }
            }
        }
            for(int i=0;i<10;i++){
                if(kenapeluru[i]==1)
                {
                    xpeluru[i]=xpeluru[i]+50;
                    circle(xpeluru[i],ypeluru[i],6);
                    setcolor(WHITE);
                    if (xpeluru[i]>=600)
                    {
                        kenapeluru[i]=0;
                    }
                }
        }
        for(int i=0;i<10;i++){
             //hitbox musuh2
             if(darahm<=0){
                    xmm=-720;
                    darahm=300;
                    kills=kills+1;
                }
             if((xpeluru[i]>3.2+xmm)&&(xpeluru[i]<10.5*15+xmm)&&(ypeluru[i]>-9.1*15+ymm)&&(ypeluru[i]<-3.24*15+ymm)&&xmm>0)
             {
                 kenapeluru[i]=0;
                 darahm=darahm-5;
                 //sndPlaySound("HitMarkerSE.wav",SND_ASYNC);
             }
        }
        //player,enivornment
        awan1(xp3,yp3,20);
        awan2(xp4,yp4,20);
        orang(xa,ya,5);
        //musuh2
        musuh2(xmm,ymm,15);
        musuh2(xmm,ymm,15);
        musuh2(xmm,ymm,15);
        //score
        sprintf(score,"%.f Points", kills);
        setcolor(WHITE);
        settextstyle(8,0,1);
        outtextxy(10, 5, "Get points to win!");
        outtextxy(10,30,score);
        //darahmusuh
        sprintf(darahmm,"%.f health",darahm);
        setcolor(WHITE);
        settextstyle(8,0,1);
        outtextxy(600,5,darahmm);
        //victory
        if(kills>=5){
            cleardevice();
            wonr2();
        }
        //exit
        if(GetAsyncKeyState(VK_ESCAPE)<0){
            exit(0);
        }
        page=1-page;
        delay(0.1);
    }
}

void round3(){
    srand(time(0));
    int page=0;
    float darahm=300;
    float sc,xp3,yp3,xp4,yp4,xh,yh,xa,ya,
            xmmm,ymmm;
    float kenapeluru[100],xpeluru[100],ypeluru[100];
    float kills=0;
    char score[999];
    char darahmm[300];

    xp3=getmaxx();yp3=140;
    xp4=170;yp4=200;
    xh=200;yh=200;
    xa=1000;ya=100;
    //musuh3
    xmmm=650;ymmm=450;
    for(int i=0;i<10;i++)
    {
        kenapeluru[i]=0;
    }
    //sndPlaySound("OST.wav",SND_ASYNC|SND_LOOP);
    while(1){
        //double buffering
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();
        //background
        readimagefile("assets/images/fixx.jpg",0,0,1280,720);
        //awan
        xp3 = xp3-4;
        if  (xp3<-120)
        {
            xp3=840;
        }
        xp4 = xp4-4;
        if  (xp4<-120)
        {
            xp4=840;
        }
        //musuh3
        xmmm = xmmm-4;
        if  (xmmm<0)
        {
            ymmm=rand()%250+430;
            xmmm=730;
        }
        //batas mouse
        xa=0;
        ya=mousey();
        if(ya<360){
            ya=360;
        }
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            for(int i=0;i<10;i++){
                if(kenapeluru[i]==0)
                {
                    sndPlaySound("assets/sound-effect/fixbangetCOPIUM.wav",SND_ASYNC);
                    xpeluru[i]=xa+23;
                    ypeluru[i]=ya-27;
                    kenapeluru[i]=1;
                    clearmouseclick(WM_LBUTTONDOWN);
                    break;
                }
            }
        }
            for(int i=0;i<10;i++){
                if(kenapeluru[i]==1)
                {
                    xpeluru[i]=xpeluru[i]+50;
                    circle(xpeluru[i],ypeluru[i],6);
                    setcolor(WHITE);
                    if (xpeluru[i]>=600)
                    {
                        kenapeluru[i]=0;
                    }
                }
        }
        for(int i=0;i<10;i++){
             //hitbox musuh3
             if(darahm<=0){
                    xmmm=-720;
                    darahm=300;
                    kills=kills+1;
                }
             if((xpeluru[i]>1.85+xmmm)&&(xpeluru[i]<6.26*20+xmmm)&&(ypeluru[i]>-4.51*20+xmmm)&&(ypeluru[i]<-1.46*20+xmmm)&&xmmm>0)
             {
                 kenapeluru[i]=0;
                 darahm=darahm-10;
                 //sndPlaySound("HitMarkerSE.wav",SND_ASYNC);
             }
        }
        //player,enivornment
        awan1(xp3,yp3,20);
        awan2(xp4,yp4,20);
        orang(xa,ya,5);
        //musuh3
        musuh3(xmmm,ymmm,30);
        //score
        sprintf(score,"%.f Points", kills);
        setcolor(WHITE);
        settextstyle(8,0,1);
        outtextxy(10, 5, "Get points to win!");
        outtextxy(10,30,score);
        //darahmusuh
        sprintf(darahmm,"%.f health",darahm);
        setcolor(WHITE);
        settextstyle(8,0,1);
        outtextxy(600,5,darahmm);
        //victory
        if(kills>=3){
            cleardevice();
            victory();
        }
        //exit
        if(GetAsyncKeyState(VK_ESCAPE)<0){
            exit(0);
        }
        page=1-page;
        delay(0.1);
    }
}

int main(){
    initwindow(720,720,"Hello",-3,-3);
    menu();
    return 0;
}
