#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <dos.h>
#include <winbgim.h>
#include <Windows.h>
#include <mmsystem.h>


void simple_shapes(void);
void circle(void);
void square(void);
void triangle(void);
void right_triangle(void);
void multi_shapes(void);
void star(void);
void thuglife(void);
void rectangle(void);
void pentagon(void);
void noodles_cup(void);
void moving_car(void);
void house(void);
void emojis(void);
void diamond(void);
void boat(void);
void artistic(void);
void arrow_down(void);
void arrow_left(void);
void arrow_right(void);
void arrow_up(void);
void ahsan_special(void);
void special_shapes(void);
void loading(void);
void exit(void);
void menu(void);

void exit(void)
{
    printf("\n\n\n");
    printf("\t\t\t\tThank You for using Graphics Generator\n");
    printf("\t\t\t\tGood Bye!\n\n\n");
}


void thuglife(void)
{

initwindow(1280,720,"shape");
    line(300,294,1132,294);
    line(1132,294,1036,394);
    line(1036,394,836,394);
    line(836,394,786,327);
    line(786,327,684,327);
    line(684,327,627,385);
    line(627,385,508,385);
    line(508,385,444,321);
    line(444,321,307,321);
    line(1098,302,1057,343);
    line(1074,302,1032,344);
    settextstyle(2,0,15);
    outtextxy(536,330,"THUG");
    outtextxy(866,330,"LIFE !");
getch();
closegraph();
}
void triangle(void)
{
    int gd=0,gm;
    int pat=0,col=0;
    printf("\n\t\t\t\tENTER COLOR FOR SHAPE: ");scanf("%d",&col);
    printf("\n\t\t\t\tENTER PATTERN FOR SHAPE: ");scanf("%d",&pat);

        initwindow(1280,720,"shape");
        settextstyle(3,0,15);
        outtextxy(591,657,"Triangle");
        setfillstyle(pat,col);
        line(599,101,896,613);
        line(896,613,303,613);
        line(303,613,599,101);
        floodfill(600,111,WHITE);
        getch();
        closegraph();
}
void star (void)
{
    int gd=0,gm;


    int pat=0,col=0;
    printf("\n\t\t\t\tENTER COLOR FOR SHAPE: ");scanf("%d",&col);
    printf("\n\t\t\t\tENTER PATTERN FOR SHAPE: ");scanf("%d",&pat);
        initwindow(1280,720,"shape");
        setfillstyle(pat,col);
        settextstyle(3,0,20);
        outtextxy(127,147,"STAR");
       line(682,134,741,324);
        line(741,324,931,329);
        line(931,329,781,444);
        line(781,444,835,632);
        line(835,632,682,523);
        line(682,523,528,632);
        line(528,632,582,444);
        line(582,444,433,329);
        line(433,329,623,324);
        line(623,324,682,134);
        floodfill(683,144,WHITE);
        getch();
        closegraph();

}
void square(void)
{
     int gd=0,gm;
    int pat=0,col=0;
    printf("\n\t\t\t\tENTER COLOR FOR SHAPE: ");scanf("%d",&col);
    printf("\n\t\t\t\tENTER PATTERN FOR SHAPE: ");scanf("%d",&pat);

        initwindow(1280,720,"shape");
        setfillstyle(pat,col);
        rectangle(160,160,600,600);
        floodfill(161,301,WHITE);
        settextstyle(3,0,12);
        outtextxy(700,500,"SQUARE");
        getch();
        closegraph();
}
void right_triangle(void)
{
    int pat=0,col=0;
     printf("\n\t\t\t\tENTER COLOR FOR SHAPE: ");scanf("%d",&col);
    printf("\n\t\t\t\tENTER PATTERN FOR SHAPE: ");scanf("%d",&pat);

    initwindow(1280,720,"shape");
        setfillstyle(pat,col);
        line(484,177,484,533);
        line(484,533,839,533);
        line(839,533,484,177);
        settextstyle(3,0,12);
        outtextxy(100,550,"RIGHT ANGLE TRIANGLE");
        floodfill(485,188,WHITE);
        getch();
        closegraph();
}
void rectangle(void)
{
    int gd=0,gm;
    int pat=0,col=0;
    printf("\n\t\t\t\tENTER COLOR FOR SHAPE: ");scanf("%d",&col);
    printf("\n\t\t\t\tENTER PATTERN FOR SHAPE: ");scanf("%d",&pat);

        initwindow(1280,720,"shape");
        setfillstyle(pat,col);
        line(139,117,1146,117);
        line(1146,117,1146,617);
        line(1146,617,139,617);
        line(139,617,139,117);
        floodfill(140,118,WHITE);
        getch();
        closegraph();
}
void pentagon(void)
{
     int gd=0,gm;
    int pat=0,col=0;
    printf("\n\t\t\t\tENTER COLOR FOR SHAPE: ");scanf("%d",&col);
    printf("\n\t\t\t\tENTER PATTERN FOR SHAPE: ");scanf("%d",&pat);

        initwindow(1280,720,"shape");
        setfillstyle(pat,col);
        settextstyle(3,0,60);
        outtextxy(600,55,"Pentagon");
        line(683,132,926,318);
        line(926,318,926,318);
        line(926,318,834,618);
        line(834,618,532,618);
        line(532,618,440,318);
        line(440,318,683,132);
        floodfill(684,142,WHITE);
        getch();
        closegraph();
}
void noodles_cup(void)
{
     int pat=0,col=0;
     initwindow(1280,720,"shape");
        setfillstyle(pat,col);
       line(683,132,782,382);
        line(782,382,926,318);
        line(926,318,834,618);
        line(782,382,1030,20);
        line(782,382,1064,41);
        line(782,382,1050,34);
        line(782,382,1030,20);
        line(782,382,1064,41);
        line(782,382,1050,34);
        line(782,382,1030,20);
        line(782,382,1064,41);
        line(782,382,1050,34);
        line(834,618,532,618);
        line(532,618,440,318);
        settextstyle(3,0,7);
        outtextxy(600,454,"Noodles");
        line(440,318,683,132);
        floodfill(683,132,WHITE);
        getch();
        closegraph();
}
void multi_shapes(void)
{
    int c=0,s=0,r=0,t=0,cp=0,sp=0,rp=0,tp=0;
    printf("\n\t\t\t\t ======== COLOR MENU =======");
    printf("\n\t\t\t\t 1. ENTER CIRCLE COLOR: ");scanf("%d",&c);
    printf("\n\t\t\t\t 1. ENTER CIRCLE PATTERN: ");scanf("%d",&cp);

    printf("\n\t\t\t\t 2. ENTER SQURARE COLOR: ");scanf("%d",&s);
    printf("\n\t\t\t\t 2. ENTER SQURARE PATTERN: ");scanf("%d",&sp);
    printf("\n\t\t\t\t 3. ENTER RECTANGLE COLOR: ");scanf("%d",&r);
    printf("\n\t\t\t\t 3. ENTER RECTANGLE PATTERN: ");scanf("%d",&rp);
    printf("\n\t\t\t\t 4. ENTER TRIANGE COLOR: ");scanf("%d",&t);
    printf("\n\t\t\t\t 4. ENTER TRIANGE PATTERN: ");scanf("%d",&tp);
    initwindow(1280,720,"shape");
    //outer grids
    line(591,1,591,791);
    line(3,337,1279,337);
    //circle
    setfillstyle(cp,c);
    circle(332,173,150);
    floodfill(332,173,WHITE);
    //square
    setfillstyle(sp,s);
    line(806,56,1040,56);
    line(1040,56,1040,289);
    line(1040,289,806,289);
    line(806,289,806,56);
    floodfill(807,57,WHITE);
    //rectangle
    setfillstyle(rp,r);
    line(89,432,89,628);
    line(89,628,527,628);
    line(527,628,527,432);
    line(527,432,89,432);
    floodfill(90,433,WHITE);
    //triangle
    setfillstyle(tp,t);
    line(935,400,816,639);
    line(816,639,1054,639);
    line(1054,639,935,400);
    floodfill(936,410,WHITE);
getch();
closegraph();

}
void moving_car(void)
{
    int i, j = 0;


	initwindow(1280, 720,"Shapes");

	for (i = 0; i <= 1000; i = i + 10) {


		setcolor(15);


		// body of car
		line(0 + i, 300, 210 + i, 300);
		line(50 + i, 300, 75 + i, 270);
		line(75 + i, 270, 150 + i, 270);
		line(150 + i, 270, 165 + i, 300);
		line(0 + i, 300, 0 + i, 330);
		line(210 + i, 300, 210 + i, 330);

		// For left wheel of car
		circle(65 + i, 330, 15);
		circle(65 + i, 330, 2);

		// For right wheel of car
		circle(145 + i, 330, 15);
		circle(145 + i, 330, 2);

		// Line left of left wheel
		line(0 + i, 330, 50 + i, 330);

		// Line middle of both wheel
		line(80 + i, 330, 130 + i, 330);

		// Line right of right wheel
		line(210 + i, 330, 160 + i, 330);

		delay(100);

		// To erase previous drawn car, draw
		// the whole car at same possition
		// but color using black
		setcolor(BLACK);

		// Lines for bonnet and body of car
		line(0 + i, 300, 210 + i, 300);
		line(50 + i, 300, 75 + i, 270);
		line(75 + i, 270, 150 + i, 270);
		line(150 + i, 270, 165 + i, 300);
		line(0 + i, 300, 0 + i, 330);
		line(210 + i, 300, 210 + i, 330);

		// For left wheel of car
		circle(65 + i, 330, 15);
		circle(65 + i, 330, 2);

		// For right wheel of car
		circle(145 + i, 330, 15);
		circle(145 + i, 330, 2);

		// Line left of left wheel
		line(0 + i, 330, 50 + i, 330);

		// Line middle of both wheel
		line(80 + i, 330, 130 + i, 330);

		// Line right of right wheel
		line(210 + i, 330, 160 + i, 330);
	}

	getch();

	closegraph();
}
void house(void)
{
    int cone_col=0,cone_pat=0,ot_col=0,ot_pat=0,ft_col=0,ft_pat=0,sc_col=0,sc_pat=0,dc=0,dp=0,dkp=0,dkc=0;

    printf("\t\t\t\t============== COLOR MENU =============");
    printf("\n\t\t\t\tEnter cone color: ");scanf("%d",&cone_col);
    printf("\n\t\t\t\tEnter cone pattern: ");scanf("%d",&cone_pat);
    printf("\n\t\t\t\tEnter outer walls color: ");scanf("%d",&ot_col);
    printf("\n\t\t\t\tEnter outer walls pattern: ");scanf("%d",&ot_pat);
    printf("\n\t\t\t\tEnter first window color: ");scanf("%d",&ft_col);
    printf("\n\t\t\t\tEnter first window pattern: ");scanf("%d",&ft_pat);
    printf("\n\t\t\t\tEnter second window color: ");scanf("%d",&sc_col);
    printf("\n\t\t\t\tEnter second window pattern: ");scanf("%d",&sc_pat);
    printf("\n\t\t\t\tEnter door color: ");scanf("%d",&dc);
    printf("\n\t\t\t\tEnter door pattern: ");scanf("%d",&dp);
    printf("\n\t\t\t\tEnter door knob color: ");scanf("%d",&dkc);
    printf("\n\t\t\t\tEnter door knob pattern: ");scanf("%d",&dkp);
initwindow(1280,720,"Shape");
settextstyle(3,0,17);
outtextxy(721,471,"MY HOUSE");

//Cone
setfillstyle(cone_pat,cone_col);
line(350,6,523,353);
line(523,353,176,353);
line(176,353,350,6);
line(350,6,523,353);
line(523,353,176,353);
line(176,353,350,6);
floodfill(351,16,WHITE);
//outer shape
setfillstyle(ot_pat,ot_col);
line(176,353,176,701);
line(176,701,523,701);
line(523,701,523,353);
line(523,353,176,353);
line(176,353,176,701);
line(176,701,523,701);
line(523,701,523,353);
line(523,353,176,353);

floodfill(178,354,WHITE);
//first window
setfillstyle(ft_pat,ft_col);
line(204,370,204,469);
line(204,469,487,469);
line(487,469,487,370);
line(487,370,204,370);
line(250,379,212,417);
line(270,384,238,416);
line(474,410,423,461);
line(473,424,443,455);
line(204,370,204,469);
line(204,469,487,469);
line(487,469,487,370);
line(487,370,204,370);
line(250,379,212,417);
line(270,384,238,416);
line(474,410,423,461);
line(473,424,443,455);

floodfill(205,371,WHITE);
//second window
setfillstyle(sc_pat,sc_col);
line(443,520,481,558);
line(458,522,477,541);
line(486,509,486,658);
line(486,658,384,658);
line(384,658,384,509);
line(384,509,486,509);
line(443,520,481,558);
line(458,522,477,541);
line(486,509,486,658);
line(486,658,384,658);
line(384,658,384,509);
line(384,509,486,509);

floodfill(444,530,WHITE);
//door
setfillstyle(dp,dc);
line(208,523,308,523);
line(308,523,308,701);
line(308,701,208,701);
line(208,701,208,523);
line(208,523,308,523);
line(308,523,308,701);
line(308,701,208,701);
line(208,701,208,523);

floodfill(209,533,WHITE);
//door knob
setfillstyle(dkp,dkc);
line(232,602,232,617);
line(232,617,217,617);
line(217,617,217,602);
line(217,602,232,602);
line(232,602,232,617);
line(232,617,217,617);
line(217,617,217,602);
line(217,602,232,602);
line(232,602,232,617);
line(232,617,217,617);
line(217,617,217,602);
line(217,602,232,602);
line(232,602,232,617);
line(232,617,217,617);
line(217,617,217,602);
line(217,602,232,602);

floodfill(233,605,WHITE);



getch();
closegraph();


}
void emojis(void)
{
    initwindow(1280,720,"shape");
    //smiley face
    setfillstyle(1,14);
    circle(209,129,120);
    floodfill(209,129,15);
    //eyes

    setfillstyle(1,0);
    circle(176,84,20);
    circle(237,84,20);
    floodfill(176,84,WHITE);
    floodfill(237,84,WHITE);
    //expression
    setcolor(0);
    arc(209,174,180,360,40);
    //sad face
    setfillstyle(1,14);
    setcolor(WHITE);
    circle(463,129,120);
    floodfill(463,129,WHITE);
    //eyes
    setfillstyle(1,0);
    circle(491,84,20);
    circle(430,84,20);
    floodfill(491,84,WHITE);
    floodfill(430,84,WHITE);
    //expression
    setcolor(0);
    arc(463,174,180,360,-40);
    //wow
    setfillstyle(1,14);
    setcolor(WHITE);
    circle(772,129,120);
    floodfill(772,129,WHITE);
    //eyes
    setfillstyle(1,0);
    circle(739,84,20);
    circle(800,84,20);
    floodfill(738,84,WHITE);
    floodfill(800,84,WHITE);
    //expression
    setfillstyle(1,0);
    circle(772,168,40);
    floodfill(772,168,WHITE);

    //Hmmmm
    setfillstyle(1,14);
    setcolor(WHITE);
    circle(1032,132,120);
    floodfill(1032,132,WHITE);
    //eyes
    setfillstyle(1,0);
    circle(999,88,20);
    circle(1060,88,20);
    floodfill(999,88,WHITE);
    floodfill(1060,88,WHITE);
    //expression
    setcolor(0);
    line(981,172,1091,172);
    setcolor(WHITE);
    line(13,251,1274,251);
    line(14,267,1275,267);

//chill face
    setfillstyle(1,14);
    circle(208,404,120);
    floodfill(208,404,15);
    //glasses

    setfillstyle(1,0);
    line(148,340,148,379);
    line(148,379,202,379);
    line(202,379,202,340);
    line(202,340,148,340);
    line(214,340,214,379);
    line(214,379,269,379);
    line(269,379,269,340);
    line(148,340,269,340);
    floodfill(149,350,WHITE);
    floodfill(215,350,WHITE);
    setcolor(0);
    line(202,360,214,360);
    line(269,360,292,360);
    line(148,360,125,360);
    //expression
    setcolor(0);
    arc(208,424,180,360,49);

//EH! fine
    setfillstyle(1,14);
    setcolor(WHITE);
    circle(468,408,120);
    floodfill(468,408,WHITE);
    //eyes
    setfillstyle(1,0);
    circle(435,364,20);
    circle(496,364,20);
    floodfill(435,364,WHITE);
    floodfill(496,364,WHITE);
    //expression
    setcolor(0);
    line(418,462,520,435);
    setcolor(WHITE);
    //HAHAHA

 setfillstyle(1,14);
    setcolor(WHITE);
    circle(773,411,120);
    floodfill(773,411,WHITE);
    //eyes
    setfillstyle(1,0);
    circle(740,367,20);
    circle(801,367,20);
    floodfill(740,367,WHITE);
    floodfill(801,367,WHITE);
    //expression
    setcolor(0);
    line(714,432,834,432);
    setcolor(0);
    arc(775,432,180,360,60);
    setcolor(WHITE);

    //ANGRY FACE

 setfillstyle(1,14);
    setcolor(WHITE);
    circle(1033,415,120);
    floodfill(1033,415,WHITE);
    //eyes
    setfillstyle(1,0);
    circle(1000,371,20);
    circle(1061,371,20);
    floodfill(1000,371,WHITE);
    floodfill(1061,371,WHITE);
    //expression
    setcolor(0);
    line(983,339,1020,352);
    line(1041,352,1083,339);
    setcolor(15);
    settextstyle(3,0,13);
    outtextxy(970,450,"$#4%###");
settextstyle(3,0,30);
    outtextxy(470,600,"EMOJIS");
getch();
closegraph();
}
void diamond(void)
{
    int gd=0,gm;

        initwindow(1290,720,"shape");
        settextstyle(1,0,25);
        outtextxy(570,60,"Diamond");
        line(634,168,360,441);
        line(360,441,634,716);
        line(634,716,907,441);
        line(907,441,634,168);
        getch();
        closegraph();
}
void circle(void)
{
       int gd=0,gm;
    int col=0,pat=0;
printf("\n\t\t\t\tENTER CIRCLE FILL COLOUR: ");scanf("%d",&col);
printf("\n\t\t\t\tENTER CIRCLE FILL PATTERN: ");scanf("%d",&pat);
initwindow(1280,720,"Shape");
settextstyle(3,0,13);
outtextxy(280,145,"CIRCLE");
setfillstyle(col,pat);
circle(500,400,150);
setcolor(WHITE);
floodfill(500,400,WHITE);
getch();
closegraph();
}
void boat(void)
{
    initwindow(1280,720,"shape");
//boat wings
line(599,67,599,445);
line(599,384,283,384);
line(283,384,599,67);
line(604,136,604,445);
line(604,427,895,427);
line(895,427,604,136);
//boat body

line(1143,445,57,445);
line(82,470,1118,470);
line(1143,445,1007,581);
line(1007,581,193,581);
line(193,581,57,445);
//sun
circle(1016,129,70);
line(1016,47,1015,11);
line(925,130,876,130);
line(1020,202,1020,249);
line(1103,130,1153,130);
line(969,191,921,224);
line(963,63,906,46);
line(1133,42,1082,67);
line(1073,194,1114,227);
settextstyle(3,0,40);
outtextxy(528,600,"BOAT");
getch();
closegraph();
}
void artistic(void)
{
    initwindow(1280,720,"Shape");
settextstyle(3,0,15);
outtextxy(853,482,"Artistic Shape");

//first shape
line(470,46,250,266);
line(478,51,255,273);
line(255,273,490,507);
line(490,507,490,311);
line(490,311,419,241);
line(478,301,478,46);

//second shape
line(506,177,741,414);
line(741,414,518,638);
line(518,638,518,387);
line(577,446,506,376);
line(506,376,506,177);
//balls
circle(606,194,40);
circle(698,279,40);
getch();
closegraph();
}
void arrow_up(void)
{
    int gd=0,gm;
    int pat=0,col=0;
    printf("\n\t\t\t\tENTER COLOR FOR SHAPE: ");scanf("%d",&col);
    printf("\n\t\t\t\tENTER PATTERN FOR SHAPE: ");scanf("%d",&pat);

        initwindow(1280,720,"shape");
        setfillstyle(pat,col);

       settextstyle(3,0,13);
        outtextxy(617,25,"ARROW UP");
        line(388,350,628,110);
        line(628,110,868,350);
        line(868,350,747,350);
        line(747,350,747,587);
        line(747,587,508,587);
        line(508,587,508,350);
        line(508,350,388,350);
        floodfill(635,169,WHITE);
        getch();
        closegraph();
}
void arrow_right(void)
{
     int pat=0,col=0;
    printf("\n\t\t\t\tENTER COLOR FOR SHAPE: ");scanf("%d",&col);
    printf("\n\t\t\t\tENTER PATTERN FOR SHAPE: ");scanf("%d",&pat);

     initwindow(1280,720,"shape");
        setfillstyle(pat,col);
        settextstyle(3,0,13);
        outtextxy(613,633,"Right Arrow");
        line(831,227,610,227);
        line(610,227,610,117);
        line(610,117,389,338);
        line(389,338,610,559);
        line(610,559,610,449);
        line(610,449,831,449);
        line(831,449,831,227);
        floodfill(832,237,WHITE);
        getch();
        closegraph();
}
void arrow_left(void)
{
    int gd=0,gm;
    int pat=0,col=0;
    printf("\n\t\t\t\tENTER COLOR FOR SHAPE: ");scanf("%d",&col);
    printf("\n\t\t\t\tENTER PATTERN FOR SHAPE: ");scanf("%d",&pat);

        initwindow(1280,720,"shape");
        setfillstyle(pat,col);
        settextstyle(3,0,14);

        outtextxy(613,663,"Arrow left");
        line(448,270,669,270);
        line(669,270,669,161);
        line(669,161,890,381);
        line(890,381,669,602);
        line(669,602,669,492);
        line(669,492,448,492);
        line(448,492,448,270);
        floodfill(449,280,WHITE);
        getch();
        closegraph();

}
void arrow_down(void)
{

    int gd=0,gm;
    int pat=0,col=0;
    printf("\n\t\t\t\tENTER COLOR FOR SHAPE: ");scanf("%d",&col);
    printf("\n\t\t\t\tENTER PATTERN FOR SHAPE: ");scanf("%d",&pat);
        initwindow(1280,720,"shape");
        settextstyle(3,0,13);
        outtextxy(617,25,"ARROW DOWN");

        setfillstyle(pat,col);
        line(782,149,782,382);
        line(782,382,901,382);
        line(901,382,664,619);
        line(664,619,427,382);
        line(427,382,546,382);
        line(546,382,546,149);
        line(546,149,782,149);
        floodfill(635,169,WHITE);
        getch();
        closegraph();
}
void ahsan_special(void)
{
    char a[50];
    printf("\n\t\t\t\tENTER YOUR NAME/ANYTHING: ");scanf("%s",&a);
    initwindow(1280,720,"shapes");
    //first art
    line(658,98,534,62);
    line(534,62,375,223);
    line(375,223,561,223);
    line(561,223,561,139);
    line(561,139,699,139);
    line(699,139,829,269);
    line(829,269,829,58);
    line(829,58,658,58);
    line(658,58,658,98);
    //text
    settextstyle(3,0,15);
    outtextxy(610,338,a);
    //second art
    line(427,395,557,524);
    line(557,524,695,524);
    line(695,524,695,440);
    line(695,440,883,440);
    line(883,440,722,601);
    line(722,601,598,565);
    line(598,565,598,605);
    line(598,605,427,605);
    line(427,605,427,395);

getch();
closegraph();
}
void loading(void)
{
    int x,y,i;
 int g=DETECT, d;
 initwindow(1280,720);
 cleardevice();
 x=500;
 y=200;
 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);
 setbkcolor(rand());
 setcolor(4);
 int c=150;
 for(int e=0;e<15;e++)
 {
   for(int i=50; i<100;i++)
    {
      setcolor(3);
      settextstyle(COMPLEX_FONT, HORIZ_DIR, 20);
      outtextxy(x,y,"Loading...");
      settextstyle(COMPLEX_FONT, HORIZ_DIR, 15);
      outtextxy(x-20,y-20,"Please Wait...");
      circle(x,y,i);
      c--;
      cleardevice();
}
}
setcolor(6);
settextstyle(COMPLEX_FONT, HORIZ_DIR, 5);
settextjustify(x,y);
outtextxy(x,y,"Welcome");
delay(150);
outtextxy(x+10,y+70,"To");
delay(150);
outtextxy(x+20,y+140,"Graphics Generator");
delay(150);
outtextxy(x+80,y+380,"Developed By Muhammad Ahsan");
delay(150);
outtextxy(x+80,y+420,"Version 1.0 Alpha");
getch();
closegraph();
}
void simple_shapes(void)
{
    int a;
    printf("\t\t\t\t1. Circle\n");
    printf("\t\t\t\t2. Square\n");
    printf("\t\t\t\t3. Right Angled Triangle\n");
    printf("\t\t\t\t4. Rectangle\n");
    printf("\t\t\t\t5. Triangle\n");
    printf("\t\t\t\t6. Diamond\n");
    printf("\t\t\t\t7. Star\n");
    printf("\t\t\t\tEnter the number you want to select: ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        circle();
        break;

        case 2:
        square();
        break;

        case 3:
        right_triangle();
        break;

        case 4:
        rectangle();
        break;

        case 5:
        triangle();
        break;

        case 6:
        diamond();
        break;

        case 7:
        star();
        break;

        default:
        printf("\t\t\t\tInvalid Number\n");
        break;

    }
    int num;
    printf("\n\t\t\t\tDo you want to use Graphics Generator again?\n");
    printf("\t\t\t\t1. YES");
    printf("\n\t\t\t\t2. NO");
    printf("\n\t\t\t\tEnter the number you want to select: ");
    scanf("%d",&num);
    if(num==1)
       {
        system("CLS");
        menu();
       }
    else if(num ==2)
        exit();
    else
        printf("\t\t\t\tInvalid Number\n");
}
void special_shapes(void)
{
    int a;
    printf("\t\t\t\t1. Noodles Cup\n");
    printf("\t\t\t\t2. Arrow Down\n");
    printf("\t\t\t\t3. Arrow Up\n");
    printf("\t\t\t\t4. Arrow Right\n");
    printf("\t\t\t\t5. Arrow Left\n");
    printf("\t\t\t\t6. Pentagon\n");
    printf("\t\t\t\t7. Moving Car\n");
    printf("\t\t\t\t8. House\n");
    printf("\t\t\t\t9. Emojis\n");
    printf("\t\t\t\t10. Boat\n");
    printf("\t\t\t\t11. Artistic\n");
    printf("\t\t\t\t12. Ahsan's Special\n");
    printf("\t\t\t\t13. Multi Simple Shapes\n");
    printf("\t\t\t\t14. Thug Life\n");
    printf("\t\t\t\tEnter the option you want to select: ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        noodles_cup();
        break;

        case 2:
        arrow_down();
        break;

        case 3:
        arrow_up();
        break;

        case 4:
        arrow_right();
        break;

        case 5:
        arrow_left();
        break;

        case 6:
        pentagon();
        break;

        case 7:
        moving_car();
        break;

        case 8:
        house();
        break;

        case 9:
        emojis();
        break;

        case 10:
        boat();
        break;

        case 11:
        artistic();
        break;

        case 12:
        ahsan_special();
        break;

        case 13:
        multi_shapes();
        break;

        case 14:
        thuglife();
        break;

        default:
        printf("\t\t\t\tInvalid Number\n");
        break;
    }
    int num;
    printf("\n\t\t\t\tDo you want to use Graphics Generator again?\n");
    printf("\t\t\t\t1. YES");
    printf("\n\t\t\t\t2. NO");
    printf("\n\t\t\t\tEnter the number you want to select: ");
    scanf("%d",&num);
    if(num==1)
        {
        system("CLS");
        menu();
        }
    else if(num ==2)
        exit();
    else
        printf("\t\t\t\tInvalid Number\n");
}

void menu(void)
{

    int option;
    printf("\t\t\t\tWELCOME TO GRAPHIICS GENERATOR\n");
    printf("\t\t\t\t______________________________\n");
    printf("                                      \n");
    printf("\t\t\t\t\tMENU\n");
    printf("\t\t\t\t\t____\n");
    printf("\t\t\t\tWhich shapes would you like to see:\n");
    printf("\t\t\t\t1. Simple shapes\n");
    printf("\t\t\t\t2. Special Shapes\n");
    printf("\t\t\t\t                 \n");
    printf("\t\t\t\tPress 1 or 2: ");
    PlaySound(TEXT("sound1.wav"),NULL,SND_ASYNC);
    scanf("%d",&option);
    if(option == 1)
        simple_shapes();
    else if(option == 2)
        special_shapes();
    else
            printf("\t\t\t\tInvalid Number\n");

}

int main()
{

    loading();
    menu();
}
