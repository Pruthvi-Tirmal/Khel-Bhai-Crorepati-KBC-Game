#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
#include<string.h>
#include<stdlib.h>
void main()
{
char ch[100],h[100],s[100],s1[100],s2[100],s3[100],s4[100];
char e[10],r[10];
int m,n,y,i,w;
clrscr();
m=4;
n=127;
y=174;
i=175;
w=158;
p("\n\t\tPHOENIX81(%c) PRESENTs\n\n\t\t\t ...%c%cKHEL BHAI CROREPATI(KBC)%c%c...\n\n\t\t\t\tPOWERED BY  %cTIRMAL%c GROUP OF COMPANY. ",w,i,i,y,y,m,m);
p("\n\n%c SIGN UP PLAYER NAME : ",n);
fflush(stdin);
gets(h);
p("\n\nAPKA SWAGAT HAI '%s' ",h);
p(" ");
p("\n------------------------------------------------------------------\n----------------------------------------------------\n**********************************");
gets(e);
p("\n\nNORMS REGARDING KHEL BHAI CROREPATI(KBC)..........");
p("\nREAD IT CAREFULLY>..");
p("");
gets(e);
p("\n");
p("\nKHEL BHI CROREPATI BASED ON THE FACT OF WINNING EXCITING MONEY UPTO 10 CRORE INR.START ANSWERING A SERIES OF MULTIPLE-CHOICE QUESTIONS ON THEIR WAY TO WIN THE TOP CASH PRIZE AS OUTLINED IN THE TABLE BELOW((DHAAN----DHANALE))------> \nTHE CONTEST IS FREE TO WALK AWAY WITG NOTHING UNLESSTHEY CORRECTLY ANSWERED A MILESTONE QUESTION\n\t\t\t\t\t\t\t17.10,00,00,000\nTHERE ARE 4 LIFELINE : \t\t\t\t%c16.5,00,00,000\n1.AUDIENCE POLL\t\t\t\t\t\t15.1,00,00,000\n2.50:50\t\t\t\t\t\t\t14.50,00,000\n3.FILP THE QUESTION\t\t\t\t\t13.25,00,000\n4.EXPERT ADVICE\t\t\t\t\t\t12.12,50,000\n\t\t\t\t\t\t\t11.6,40,000\n\t\t\t\t\t\t%c10.3,20,000\n\t\t\t\t\t\t\t9.1,60,000\n\t\t\t\t\t\t\t8.80,000\n\t\t\t\t\t\t\t7.40,000\n\t\t\t\t\t\t\t6.20,000\n\t\t\t\t\t\t%c5.10,000\n\t\t\t\t\t\t\t4.5,000\n\t\t\t\t\t\t\t3.3,000\nOUR TODAYS EXPERT ADVICER IS MR.SAURAV CHAUDHARY\t2.2,000\n\t\t\t\t\t\t\t1.1,000 ",m,m,m);
gets(e);
p("\n\n\nTHERE ONLY 3 TOPICES WHICH CAN CHOOSE FOR FLIPING THE QUESTION ..\n1.ENTERTAINMENT\n2.CURRENT AFFAIRS\n3.SPORTS");
gets(e);
p("\n\nLET US PLAY .........");
gets(e);
p("\n\n APKA PHELA SAVAL APKE COMPUTER SCREEN PE YE......\n\t\tFOR RUPEES 1,000 INR.");
gets(e);
p("\n\n1.WHO BUILD THE TAJ MAHAL ?\n\nA. SHAH JAHAN\t\t\t\tB. SHER SHAH SURI\n\nC. AKBAR\t\t\t\tD. AURANZEB");
p("\n\nENTER YOUR ANSWER :---> ");
fflush(stdin);
gets(ch);
 if (strcmp(ch,"A")==0||strcmp(ch,"a")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 1,000 INR ");
}

else if(strcmp(ch,"NO IDEA")==0||strcmp(ch,"no idea")==0)
{
p("TAKE LIFELINE :\nAUDIENCE POLL\n50:50\nFLIP THE QUESTION\nEXPERT ADVICE ");
p("\n\nCHOOSE YOUR LIFELINE : ");
fflush(stdin);
gets(s);
 if(strcmp(s,"AUDIENCE POLL")==0||strcmp(s,"audience poll")==0)
 {
  p("\n\nLOADING THE DATA ............\n");
 gets(r);
 p("\nA----->90%\nB----->5%\nC----->3%\nD----->2%");
 p("\n\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"A")==0||strcmp(s1,"a")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 1,000 INR ");
}
if(strcmp(s1,"B")==0||strcmp(s1,"b")==0||strcmp(s1,"C")==0||strcmp(s1,"c")==0||strcmp(s1,"d")==0||strcmp(s1,"D")==0)
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <SHAH JAHAN>");
exit(0);
 }
 }
else if(strcmp(s,"50:50")==0)
{
p("\n\nLOADING THE DATA ............\n");
 gets(r);
p("\n\nA. SHAH JAHAN\t\t\t\t\n\nC. AKBAR\t\t\t\t\t");
p("\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"A")==0||strcmp(s1,"a")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 1,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <SHAH JAHAN>");
exit(0);
}
}
else if(strcmp(s,"flip the question")==0||strcmp(s,"FLIP THE QUESTION")==0)
{
p("\n\nENTER YOUR CHOICED TOPIC : ");
fflush(stdin);
gets(s2);

if(strcmp(s2,"entertainment")==0||strcmp(s2,"ENTERTAINMENT")==0)
{
p("\nLASTEST MOVIE OF PRABHAS ?\n\nA. REBEL\t\t\t\tB. A...Aa\n\nC. SAAHO\t\t\t\tD. BAHUBALI");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"C")==0||strcmp(s3,"c")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 1,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <SAAHO>");
//exit(0);
}
}
else if(strcmp(s2,"sports")==0||strcmp(s2,"SPORTS")==0)
{
p("\nWHICH BATSMAN SCORE 3 DOUBLE CENTURIES IN ODI CRICKET ?\n\nA. SACHIN TENDULKAR\t\t\t\tB. ROHIT SHARMA\n\nC. VIRAT KOHLI\t\t\t\tD. YUVRAJ SINGH");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"B")==0||strcmp(s3,"b")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 1,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <ROHIT SHARMA>");
//exit(0);
}
}
else if(strcmp(s2,"current affairs")==0||strcmp(s2,"CURRENT AFFAIRS")==0)
p("\nWHICH COUNTRY HAS BIGGEST MILITRY BUDGET ?\n\nA. CHINA\t\t\t\tB. USA\n\nC. INDIA\t\t\t\tD. FRANCE");
p("\n\nENTER  YOUR ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"B")==0||strcmp(s3,"b")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 1,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <USA>");
//exit(0);
}
}
else if(strcmp(s,"EXPERT ADVICE")==0||strcmp(s,"expert advice")==0)
{
p("\nMUJHE SAHI OPTION LAGTA HAI (A) SHAH JAHAN");
p("\n\n KYA KARNA HAI ? '%s'",h);
p("\nENTER YOUR ANSWER : ");
fflush(stdin);
gets(s4);
if (strcmp(s4,"A")==0||strcmp(s4,"a")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 1,000 INR ");
//exit(0);
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <SHAH JAHAN>");
exit(0);
}
}

}

else if(strcmp(ch,"quit")==0||strcmp(ch,"QUIT")==0)
{
p("\n(%s) HAVE QUIT THE GAME",h);
p("\n\nBETTER LUCK NEXT TIME......");
p("\n\n...(CONGRATULATION)...YOU WON 0 INR");
p("\n\nCORRECT ANSWER : <SHAH JAHAN>");
exit(0);
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <SHAH JAHAN>");
exit(0);
}
gets(e);
p("\n\n APKA 2 SAVAL APKE COMPUTER SCREEN PE YE......\n\t\tFOR RUPEES 2,000 INR.");
gets(e);
p("\n\n2.THE INTERNATIONAL LITERACY DAY OBSERVED ON ?\n\nA. SEP 8\t\t\t\tB. NOV 28\n\nC. MAY 2\t\t\t\tD. SEP 22");
p("\n\nENTER YOUR ANSWER :---> ");
fflush(stdin);
gets(ch);
 if (strcmp(ch,"A")==0||strcmp(ch,"a")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 2,000 INR ");
}

else if(strcmp(ch,"NO IDEA")==0||strcmp(ch,"no idea")==0)
{
p("TAKE LIFELINE :\nAUDIENCE POLL\n50:50\nFLIP THE QUESTION\nEXPERT ADVICE ");
p("\n\nCHOOSE YOUR LIFELINE : ");
fflush(stdin);
gets(s);
 if(strcmp(s,"AUDIENCE POLL")==0||strcmp(s,"audience poll")==0)
 {
  p("\n\nLOADING THE DATA ............\n");
 gets(r);
 p("\nA----->55%\nB----->25%\nC----->5%\nD----->25%");
 p("\n\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"A")==0||strcmp(s1,"a")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 2,000 INR ");
}
if(strcmp(s1,"B")==0||strcmp(s1,"b")==0||strcmp(s1,"C")==0||strcmp(s1,"c")==0||strcmp(s1,"d")==0||strcmp(s1,"D")==0)
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <SEP 8>");
exit(0);
 }
 }
else if(strcmp(s,"50:50")==0)
{
p("\n\nLOADING THE DATA ............\n");
 gets(r);
p("\n\nA. SEP 8\t\t\t\t\n\t\t\tD. SEP 28");
p("\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"A")==0||strcmp(s1,"a")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 2,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <SEP 8>");
exit(0);
}
}
else if(strcmp(s,"flip the question")==0||strcmp(s,"FLIP THE QUESTION")==0)
{
p("\n\nENTER YOUR CHOICED TOPIC : ");
fflush(stdin);
gets(s2);

if(strcmp(s2,"entertainment")==0||strcmp(s2,"ENTERTAINMENT")==0)
{
p("\nWHO IS THE LEADING ARTIST IN MANIKARNIKA ?\n\nA. KATRINA KALF\t\t\t\tB. ANUSHKA SHARMA\n\nC. LARA DUTT\t\t\t\tD. KANGANA RANAULT");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"D")==0||strcmp(s3,"d")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 2,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <KANGANA RANAULT>");
//exit(0);
}
}
else if(strcmp(s2,"sports")==0||strcmp(s2,"SPORTS")==0)
{
p("\nWHAT IS THE NATIONAL GAME OF ENGLAND ?\n\nA. HOCKEY\t\t\t\tB. CRICKET\n\nC. VOLLEY-BALL\t\t\t\tD. TENNIS");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"B")==0||strcmp(s3,"b")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 2,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <CRICKET>");
//exit(0);
}
}
else if(strcmp(s2,"current affairs")==0||strcmp(s2,"CURRENT AFFAIRS")==0)
p("\nTHE GOVERNMENT OF INDIA WILL OPEN HOW MANY COLLEGES IN J&K ?\n\nA. 30\t\t\t\tB. 40\n\nC. 50\t\t\t\tD. 20");
p("\n\nENTER  YOUR ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"C")==0||strcmp(s3,"c")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 2,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <50>");
//exit(0);
}
}
else if(strcmp(s,"EXPERT ADVICE")==0||strcmp(s,"expert advice")==0)
{
p("\nMUJHE SAHI OPTION LAGTA HAI (A) SHAH JAHAN");
p("\n\n KYA KARNA HAI ? '%s'",h);
p("\nENTER YOUR ANSWER : ");
fflush(stdin);
gets(s4);
if (strcmp(s4,"A")==0||strcmp(s4,"a")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 2,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <SEP 8>");
exit(0);
}
}

}

else if(strcmp(ch,"quit")==0||strcmp(ch,"QUIT")==0)
{
p("\n(%s) HAVE QUIT THE GAME",h);
p("\n\nBETTER LUCK NEXT TIME......");
p("\n\n...(CONGRATULATION)...YOU WON 1,000 INR");
p("\n\nCORRECT ANSWER : <SEP 8>");
exit(0);
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <SEP 8>");
exit(0);
}
gets(e);
p("\n\n APKA 3 SAVAL APKE COMPUTER SCREEN PE YE......\n\t\tFOR RUPEES 3,000 INR.");
gets(e);
p("\n\n3.WHAT IS  THE LANGAUGE OF LAKSHADWEEP ?\n\nA. TAMIL\t\t\t\tB. HINDI\n\nC. TELGU\t\t\t\tD. MALAYALAM");
p("\n\nENTER YOUR ANSWER :---> ");
fflush(stdin);
gets(ch);
 if (strcmp(ch,"D")==0||strcmp(ch,"d")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 3,000 INR ");
}

else if(strcmp(ch,"NO IDEA")==0||strcmp(ch,"no idea")==0)
{
p("TAKE LIFELINE :\nAUDIENCE POLL\n50:50\nFLIP THE QUESTION\nEXPERT ADVICE ");
p("\n\nCHOOSE YOUR LIFELINE : ");
fflush(stdin);
gets(s);
 if(strcmp(s,"AUDIENCE POLL")==0||strcmp(s,"audience poll")==0)
 {
  p("\n\nLOADING THE DATA ............\n");
 gets(r);
 p("\nA----->10%\nB----->25%\nC----->20%\nD----->45%");
 p("\n\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"D")==0||strcmp(s1,"d")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 3,000 INR ");
}
if(strcmp(s1,"B")==0||strcmp(s1,"b")==0||strcmp(s1,"C")==0||strcmp(s1,"c")==0||strcmp(s1,"A")==0||strcmp(s1,"a")==0)
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <MALAYALAM>");
 exit(0);
 }
 }
else if(strcmp(s,"50:50")==0)
{
p("\n\nLOADING THE DATA ............\n");
 gets(r);
p("\n\nA. TAMIL\t\t\t\t\n\t\t\tD.  MALAYALAM");
p("\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"D")==0||strcmp(s1,"d")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 3,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI < MALAYALAM>");
exit(0);
}
}
else if(strcmp(s,"flip the question")==0||strcmp(s,"FLIP THE QUESTION")==0)
{
p("\n\nENTER YOUR CHOICED TOPIC : ");
fflush(stdin);
gets(s2);

if(strcmp(s2,"entertainment")==0||strcmp(s2,"ENTERTAINMENT")==0)
{
p("\nWHO IS THE LEADING ARTIST IN MANIKARNIKA ?\n\nA. KATRINA KALF\t\t\t\tB. ANUSHKA SHARMA\n\nC. LARA DUTT\t\t\t\tD. KANGANA RANAULT");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"D")==0||strcmp(s3,"d")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 3,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <KANGANA RANAULT>");
//exit(0);

}
}
else if(strcmp(s2,"sports")==0||strcmp(s2,"SPORTS")==0)
{
p("\nWHAT IS THE NATIONAL GAME OF ENGLAND ?\n\nA. HOCKEY\t\t\t\tB. CRICKET\n\nC. VOLLEY-BALL\t\t\t\tD. TENNIS");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"B")==0||strcmp(s3,"b")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 3,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <CRICKET>");
//exit(0);
}
}
else if(strcmp(s2,"current affairs")==0||strcmp(s2,"CURRENT AFFAIRS")==0)
p("\nTHE GOVERNMENT OF INDIA WILL OPEN HOW MANY COLLEGES IN J&K ?\n\nA. 30\t\t\t\tB. 40\n\nC. 50\t\t\t\tD. 20");
p("\n\nENTER  YOUR ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"C")==0||strcmp(s3,"c")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 3,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <50>");
//exit(0);
}
}
else if(strcmp(s,"EXPERT ADVICE")==0||strcmp(s,"expert advice")==0)
{
p("\nMUJHE SAHI OPTION LAGTA HAI (D) MALAYALAM");
p("\n\n KYA KARNA HAI ? '%s'",h);
p("\nENTER YOUR ANSWER : ");
fflush(stdin);
gets(s4);
if (strcmp(s4,"D")==0||strcmp(s4,"d")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 3,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <MALAYALAM>");
exit(0);
}
}

}

else if(strcmp(ch,"quit")==0||strcmp(ch,"QUIT")==0)
{
p("\n(%s) HAVE QUIT THE GAME",h);
p("\n\nBETTER LUCK NEXT TIME......");
p("\n\n...(CONGRATULATION)...YOU WON 2,000 INR");
p("\n\nCORRECT ANSWER : <MALAYALAM>");
exit(0);
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <MALAYALAM>");
exit(0);
}

gets(e);
p("\n\n APKA 4 SAVAL APKE COMPUTER SCREEN PE YE......\n\t\tFOR RUPEES 5,000 INR.");
gets(e);
p("\n\n4.DOUGLAS ENGELBERT,WHO PASSED AWAY IN 2013, IS CREDITED AS THE INVENTOR OF WHICH OF THESE PRODUCTS ?\n\nA. MOBILE PHONE\t\t\t\tB. COMPUTER MOUSE\n\nC. BLUETOOTH MOUSE\t\t\tD. DIGITAL CAMERA");
p("\n\nENTER YOUR ANSWER :---> ");
fflush(stdin);
gets(ch);
 if (strcmp(ch,"B")==0||strcmp(ch,"b")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 5,000 INR ");
}

else if(strcmp(ch,"NO IDEA")==0||strcmp(ch,"no idea")==0)
{
p("TAKE LIFELINE :\nAUDIENCE POLL\n50:50\nFLIP THE QUESTION\nEXPERT ADVICE ");
p("\n\nCHOOSE YOUR LIFELINE : ");
fflush(stdin);
gets(s);
 if(strcmp(s,"AUDIENCE POLL")==0||strcmp(s,"audience poll")==0)
 {
  p("\n\nLOADING THE DATA ............\n");
 gets(r);
 p("\nA----->10%\nB----->45%\nC----->20%\nD----->25%");
 p("\n\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"B")==0||strcmp(s1,"b")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 5,000 INR ");
}
if(strcmp(s1,"a")==0||strcmp(s1,"A")==0||strcmp(s1,"C")==0||strcmp(s1,"c")==0||strcmp(s1,"D")==0||strcmp(s1,"d")==0)
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <COMPUTER MOUSE>");
 exit(0);
 }
 }
else if(strcmp(s,"50:50")==0)
{
p("\n\nLOADING THE DATA ............\n");
 gets(r);
p("\n\nA. MOBILE PHONE\t\t\t\tB. COMPUTER MOUSE");
p("\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"B")==0||strcmp(s1,"b")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 5,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <COMPUTER MOUSE>");
exit(0);
}
}
else if(strcmp(s,"flip the question")==0||strcmp(s,"FLIP THE QUESTION")==0)
{
p("\n\nENTER YOUR CHOICED TOPIC : ");
fflush(stdin);
gets(s2);

if(strcmp(s2,"entertainment")==0||strcmp(s2,"ENTERTAINMENT")==0)
{
p("\nWHO IS THE LEADING ARTIST IN MANIKARNIKA ?\n\nA. KATRINA KALF\t\t\t\tB. ANUSHKA SHARMA\n\nC. LARA DUTT\t\t\t\tD. KANGANA RANAULT");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"D")==0||strcmp(s3,"d")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 5,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <KANGANA RANAULT>");
//exit(0);

}
}
else if(strcmp(s2,"sports")==0||strcmp(s2,"SPORTS")==0)
{
p("\nWHAT IS THE NATIONAL GAME OF ENGLAND ?\n\nA. HOCKEY\t\t\t\tB. CRICKET\n\nC. VOLLEY-BALL\t\t\t\tD. TENNIS");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"B")==0||strcmp(s3,"b")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 5,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <CRICKET>");
//exit(0);
}
}
else if(strcmp(s2,"current affairs")==0||strcmp(s2,"CURRENT AFFAIRS")==0)
p("\nTHE GOVERNMENT OF INDIA WILL OPEN HOW MANY COLLEGES IN J&K ?\n\nA. 30\t\t\t\tB. 40\n\nC. 50\t\t\t\tD. 20");
p("\n\nENTER  YOUR ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"C")==0||strcmp(s3,"c")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 5,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <50>");
//exit(0);
}
}
else if(strcmp(s,"EXPERT ADVICE")==0||strcmp(s,"expert advice")==0)
{
p("\nMUJHE SAHI OPTION LAGTA HAI (B) COMPUTER MOUSE");
p("\n\n KYA KARNA HAI ? '%s'",h);
p("\nENTER YOUR ANSWER : ");
fflush(stdin);
gets(s4);
if (strcmp(s4,"b")==0||strcmp(s4,"B")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 5,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <COMPUTER MOUSE>");
exit(0);
}
}

}

else if(strcmp(ch,"quit")==0||strcmp(ch,"QUIT")==0)
{
p("\n(%s) HAVE QUIT THE GAME",h);
p("\n\nBETTER LUCK NEXT TIME......");
p("\n\n...(CONGRATULATION)...YOU WON 3,000 INR");
p("\n\nCORRECT ANSWER : <COMPUTER MOUSE>");
exit(0);
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <COMPUTER MOUSE>");
exit(0);
}

gets(e);
p("\n\n APKA 5 SAVAL APKE COMPUTER SCREEN PE YE......\n\t\tFOR RUPEES 10,000 INR.");
gets(e);
p("5.WHICH OF THESE PERSONALITIES IS CREDITED WITH THE CREATION OF THE ADVERTISING ICON'AMUL GIRL' ?\n\nA. ALYQUE PADAMSE\t\t\t\tB. SYLVESTER DA CUNHA\n\nC. BHARAT DABHALKAR\t\t\t\tD. BOBBY KOOKA");
p("\n\nENTER YOUR ANSWER :---> ");
fflush(stdin);
gets(ch);
 if (strcmp(ch,"B")==0||strcmp(ch,"b")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 10,000 INR ");
}

else if(strcmp(ch,"NO IDEA")==0||strcmp(ch,"no idea")==0)
{
p("TAKE LIFELINE :\nAUDIENCE POLL\n50:50\nFLIP THE QUESTION\nEXPERT ADVICE ");
p("\n\nCHOOSE YOUR LIFELINE : ");
fflush(stdin);
gets(s);
 if(strcmp(s,"AUDIENCE POLL")==0||strcmp(s,"audience poll")==0)
 {
  p("\n\nLOADING THE DATA ............\n");
 gets(r);
 p("\nA----->10%\nB----->35%\nC----->30%\nD----->25%");
 p("\n\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"B")==0||strcmp(s1,"b")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 10,000 INR ");
}
if(strcmp(s1,"a")==0||strcmp(s1,"A")==0||strcmp(s1,"C")==0||strcmp(s1,"c")==0||strcmp(s1,"D")==0||strcmp(s1,"d")==0)
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <SYLVESTER DA CUNHA>");
 exit(0);
 }
 }
else if(strcmp(s,"50:50")==0)
{
p("\n\nLOADING THE DATA ............\n");
 gets(r);
p("\n\n \n\nC.BHARAT DABHOLKAR \t\t\t\tB. SYLVESTER DA CUNHA");
p("\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"B")==0||strcmp(s1,"b")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 10,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <SYLVESTER DA CUNHA>");
exit(0);
}
}
else if(strcmp(s,"flip the question")==0||strcmp(s,"FLIP THE QUESTION")==0)
{
p("\n\nENTER YOUR CHOICED TOPIC : ");
fflush(stdin);
gets(s2);

if(strcmp(s2,"entertainment")==0||strcmp(s2,"ENTERTAINMENT")==0)
{
p("\nWHO IS THE LEADING ARTIST IN MANIKARNIKA ?\n\nA. KATRINA KALF\t\t\t\tB. ANUSHKA SHARMA\n\nC. LARA DUTT\t\t\t\tD. KANGANA RANAULT");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"D")==0||strcmp(s3,"d")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 10,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <KANGANA RANAULT>");
//exit(0);

}
}
else if(strcmp(s2,"sports")==0||strcmp(s2,"SPORTS")==0)
{
p("\nWHAT IS THE NATIONAL GAME OF ENGLAND ?\n\nA. HOCKEY\t\t\t\tB. CRICKET\n\nC. VOLLEY-BALL\t\t\t\tD. TENNIS");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"B")==0||strcmp(s3,"b")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 10,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <CRICKET>");
//exit(0);
}
}
else if(strcmp(s2,"current affairs")==0||strcmp(s2,"CURRENT AFFAIRS")==0)
p("\nTHE GOVERNMENT OF INDIA WILL OPEN HOW MANY COLLEGES IN J&K ?\n\nA. 30\t\t\t\tB. 40\n\nC. 50\t\t\t\tD. 20");
p("\n\nENTER  YOUR ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"C")==0||strcmp(s3,"c")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 10,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <50>");
//exit(0);
}
}
else if(strcmp(s,"EXPERT ADVICE")==0||strcmp(s,"expert advice")==0)
{
p("\nMUJHE SAHI OPTION LAGTA HAI (B) SYLVESTER DA CUNHA");
p("\n\n KYA KARNA HAI ? '%s'",h);
p("\nENTER YOUR ANSWER : ");
fflush(stdin);
gets(s4);
if (strcmp(s4,"b")==0||strcmp(s4,"B")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 10,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <SYLVESTER DA CUNHA>");
exit(0);
}
}

}

else if(strcmp(ch,"quit")==0||strcmp(ch,"QUIT")==0)
{
p("\n(%s) HAVE QUIT THE GAME",h);
p("\n\nBETTER LUCK NEXT TIME......");
p("\n\n...(CONGRATULATION)...YOU WON 5,000 INR");

exit(0);
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <SYLVESTER DA CUNHA>");
exit(0);
}

gets(e);
p("\n\n APKA 6 SAVAL APKE COMPUTER SCREEN PE YE......\n\t\tFOR RUPEES 20,000 INR.");
gets(e);
p("6.WHO WAS THE FIRST DEAF-BLIND PERSON TO EARN A BACHELOR OF ARTS DEGREE ?\n\nA. HELEN KELLER\t\t\t\tB. ALICE BETTERIDGE\n\nC. BHARATI NOOYI\t\t\tD. MORRIS MAXWELL");
p("\n\nENTER YOUR ANSWER :---> ");
fflush(stdin);
gets(ch);
 if (strcmp(ch,"A")==0||strcmp(ch,"a")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 20,000 INR ");
}

else if(strcmp(ch,"NO IDEA")==0||strcmp(ch,"no idea")==0)
{
p("TAKE LIFELINE :\nAUDIENCE POLL\n50:50\nFLIP THE QUESTION\nEXPERT ADVICE ");
p("\n\nCHOOSE YOUR LIFELINE : ");
fflush(stdin);
gets(s);
 if(strcmp(s,"AUDIENCE POLL")==0||strcmp(s,"audience poll")==0)
 {
  p("\n\nLOADING THE DATA ............\n");
 gets(r);
 p("\nA----->45%\nB----->10\nC----->20%\nD----->25%");
 p("\n\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"A")==0||strcmp(s1,"a")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 20,000 INR ");
}
if(strcmp(s1,"b")==0||strcmp(s1,"B")==0||strcmp(s1,"C")==0||strcmp(s1,"c")==0||strcmp(s1,"D")==0||strcmp(s1,"d")==0)
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <HELEN KELLER>");
 exit(0);
 }
 }
else if(strcmp(s,"50:50")==0)
{
p("\n\nLOADING THE DATA ............\n");
 gets(r);
p("\n\nA. HELEN KELLER \t\t\t\tB. ALICE BETTERIDGE");
p("\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"A")==0||strcmp(s1,"a")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 20,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <HELEN KELLER>");
exit(0);
}
}
else if(strcmp(s,"flip the question")==0||strcmp(s,"FLIP THE QUESTION")==0)
{
p("\n\nENTER YOUR CHOICED TOPIC : ");
fflush(stdin);
gets(s2);

if(strcmp(s2,"entertainment")==0||strcmp(s2,"ENTERTAINMENT")==0)
{
p("\nWHO IS THE LEADING ARTIST IN MANIKARNIKA ?\n\nA. KATRINA KALF\t\t\t\tB. ANUSHKA SHARMA\n\nC. LARA DUTT\t\t\t\tD. KANGANA RANAULT");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"D")==0||strcmp(s3,"d")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 20,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <KANGANA RANAULT>");
//exit(0);

}
}
else if(strcmp(s2,"sports")==0||strcmp(s2,"SPORTS")==0)
{
p("\nWHAT IS THE NATIONAL GAME OF ENGLAND ?\n\nA. HOCKEY\t\t\t\tB. CRICKET\n\nC. VOLLEY-BALL\t\t\t\tD. TENNIS");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"B")==0||strcmp(s3,"b")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 20,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <CRICKET>");
//exit(0);
}
}
else if(strcmp(s2,"current affairs")==0||strcmp(s2,"CURRENT AFFAIRS")==0)
p("\nTHE GOVERNMENT OF INDIA WILL OPEN HOW MANY COLLEGES IN J&K ?\n\nA. 30\t\t\t\tB. 40\n\nC. 50\t\t\t\tD. 20");
p("\n\nENTER  YOUR ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"C")==0||strcmp(s3,"c")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 20,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <50>");
//exit(0);
}
}
else if(strcmp(s,"EXPERT ADVICE")==0||strcmp(s,"expert advice")==0)
{
p("\nMUJHE SAHI OPTION LAGTA HAI (A) HELEN KELLER");
p("\n\n KYA KARNA HAI ? '%s'",h);
p("\nENTER YOUR ANSWER : ");
fflush(stdin);
gets(s4);
if (strcmp(s4,"a")==0||strcmp(s4,"A")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 20,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <HELEN KELLER>");
exit(0);
}
}

}

else if(strcmp(ch,"quit")==0||strcmp(ch,"QUIT")==0)
{
p("\n(%s) HAVE QUIT THE GAME",h);
p("\n\nBETTER LUCK NEXT TIME......");
p("\n\n...(CONGRATULATION)...YOU WON 20,000 INR");
p("\n\nCORRECT ANSWER : <HELEN KELLER>");
p(".....(CONGRATULATION).....");
p("\n....................................................................................\n************************************\n");
p("\n\nBANK OF KBC WINNERS..\n\t\t\t\t\tDATE :9|10|2019 \n\nPAY : %s\n\nRUPEES :  TEN THOUSANDS ONLY\n\nA.C no.xxxx xxxx xxxx\t\t\tRs 10,000/-\n\n\t\t\t\t\t\t\t\t\t\tPRUTHVI TIRMAL(AUTHORISE)\t\t(COMPUTERIZED SIGNATURE)\n\t\t\t\t\t\t\t%c..",h,w);
exit(0);
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <HELEN KELLER>");
p(".....(CONGRATULATION).....");
p("\n....................................................................................\n************************************\n");
p("\n\nBANK OF KBC WINNERS..\n\t\t\t\t\tDATE :9|10|2019 \n\nPAY : %s\n\nRUPEES :  TEN THOUSANDS ONLY\n\nA.C no.xxxx xxxx xxxx\t\t\tRs 10,000/-\n\n\t\t\t\t\t\t\t\t\t\tPRUTHVI TIRMAL(AUTHORISE\t\t(COMPUTERIZED SIGNATURE)\n\t\t\t\t\t\t\t%c..",h,w);
exit(0);
}
gets(e);
p("\n\n APKA 7 SAVAL APKE COMPUTER SCREEN PE YE......\n\t\tFOR RUPEES 40,000 INR.");
gets(e);
p("7.ACCORDING TO W.H.O,WHICH CONUTRY AT 2012 WAS REMOVED FROM POLIO-ENDEMIC COUNTRY  ?\n\nA. PAKISTAN\t\t\t\tB. NIGERIA\n\nC. INDIA\t\t\t\tD. NEPAL");
p("\n\nENTER YOUR ANSWER :---> ");
fflush(stdin);
gets(ch);
 if (strcmp(ch,"C")==0||strcmp(ch,"c")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 40,000 INR ");
}

else if(strcmp(ch,"NO IDEA")==0||strcmp(ch,"no idea")==0)
{
p("TAKE LIFELINE :\nAUDIENCE POLL\n50:50\nFLIP THE QUESTION\nEXPERT ADVICE ");
p("\n\nCHOOSE YOUR LIFELINE : ");
fflush(stdin);
gets(s);
 if(strcmp(s,"AUDIENCE POLL")==0||strcmp(s,"audience poll")==0)
 {
  p("\n\nLOADING THE DATA ............\n");
 gets(r);
 p("\nA----->2%\nB----->3%\nC----->90%\nD----->5%");
 p("\n\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"C")==0||strcmp(s1,"c")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 40,000 INR ");
}
if(strcmp(s1,"b")==0||strcmp(s1,"B")==0||strcmp(s1,"A")==0||strcmp(s1,"a")==0||strcmp(s1,"D")==0||strcmp(s1,"d")==0)
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <INDIA>");
 exit(0);
 }
 }
else if(strcmp(s,"50:50")==0)
{
p("\n\nLOADING THE DATA ............\n");
 gets(r);
p("\n\nA. PAKISTAN\t\t\t\t\n\nC.INDIA");
p("\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"C")==0||strcmp(s1,"c")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 40,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <INDIA>");

exit(0);
}
}
else if(strcmp(s,"flip the question")==0||strcmp(s,"FLIP THE QUESTION")==0)
{
p("\n\nENTER YOUR CHOICED TOPIC : ");
fflush(stdin);
gets(s2);

if(strcmp(s2,"entertainment")==0||strcmp(s2,"ENTERTAINMENT")==0)
{
p("\nWHO IS THE LEADING ARTIST IN MANIKARNIKA ?\n\nA. KATRINA KALF\t\t\t\tB. ANUSHKA SHARMA\n\nC. LARA DUTT\t\t\t\tD. KANGANA RANAULT");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"D")==0||strcmp(s3,"d")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 40,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <KANGANA RANAULT>");
//exit(0);

}
}
else if(strcmp(s2,"sports")==0||strcmp(s2,"SPORTS")==0)
{
p("\nWHAT IS THE NATIONAL GAME OF ENGLAND ?\n\nA. HOCKEY\t\t\t\tB. CRICKET\n\nC. VOLLEY-BALL\t\t\t\tD. TENNIS");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"B")==0||strcmp(s3,"b")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 40,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <CRICKET>");
//exit(0);
}
}
else if(strcmp(s2,"current affairs")==0||strcmp(s2,"CURRENT AFFAIRS")==0)
p("\nTHE GOVERNMENT OF INDIA WILL OPEN HOW MANY COLLEGES IN J&K ?\n\nA. 30\t\t\t\tB. 40\n\nC. 50\t\t\t\tD. 20");
p("\n\nENTER  YOUR ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"C")==0||strcmp(s3,"c")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 40,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <50>");
//exit(0);
}
}
else if(strcmp(s,"EXPERT ADVICE")==0||strcmp(s,"expert advice")==0)
{
p("\nMUJHE SAHI OPTION LAGTA HAI (C) INDIA");
p("\n\n KYA KARNA HAI ? '%s'",h);
p("\nENTER YOUR ANSWER : ");
fflush(stdin);
gets(s4);
if (strcmp(s4,"c")==0||strcmp(s4,"C")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 40,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <INDIA>");
exit(0);
}
}

}

else if(strcmp(ch,"quit")==0||strcmp(ch,"QUIT")==0)
{
p("\n(%s) HAVE QUIT THE GAME",h);
p("\n\nBETTER LUCK NEXT TIME......");
p("\n\n...(CONGRATULATION)...YOU WON 40,000 INR");
p("\n\nCORRECT ANSWER : <INDIA>");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <INDIA>");
exit(0);
}
gets(e);
p("\n\n APKA 8 SAVAL APKE COMPUTER SCREEN PE YE......\n\t\tFOR RUPEES 80,000 INR.");
gets(e);
p("THE PLANTS WHICH FLOWER ONLY ONCE IN THIER LIFELINE ARE CALLED ?\n\nA. MONOGAMOUS\t\t\t\tB. MONOGENIC\n\nC. MONOCOTS\t\t\t\tD. MONOCARPIC");
p("\n\nENTER YOUR ANSWER :---> ");
fflush(stdin);
gets(ch);
 if (strcmp(ch,"D")==0||strcmp(ch,"d")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 80,000 INR ");
}

else if(strcmp(ch,"NO IDEA")==0||strcmp(ch,"no idea")==0)
{
p("TAKE LIFELINE :\nAUDIENCE POLL\n50:50\nFLIP THE QUESTION\nEXPERT ADVICE ");
p("\n\nCHOOSE YOUR LIFELINE : ");
fflush(stdin);
gets(s);
 if(strcmp(s,"AUDIENCE POLL")==0||strcmp(s,"audience poll")==0)
 {
  p("\n\nLOADING THE DATA ............\n");
 gets(r);
 p("\nA----->2%\nB----->1%\nC----->36%\nD----->61%");
 p("\n\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"D")==0||strcmp(s1,"d")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 80,000 INR ");
}
if(strcmp(s1,"b")==0||strcmp(s1,"B")==0||strcmp(s1,"A")==0||strcmp(s1,"a")==0||strcmp(s1,"c")==0||strcmp(s1,"C")==0)
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <MONOCARPIC>");
 exit(0);
 }
 }
else if(strcmp(s,"50:50")==0)
{
p("\n\nLOADING THE DATA ............\n");
 gets(r);
p("\n\n\t\t\t\t\n\nC.MONOCOTS\n\n\t\t\t\tD. MONOCARPIC");
p("\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"d")==0||strcmp(s1,"D")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 80,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <MONOCARPIC>");
exit(0);
}
}
else if(strcmp(s,"flip the question")==0||strcmp(s,"FLIP THE QUESTION")==0)
{
p("\n\nENTER YOUR CHOICED TOPIC : ");
fflush(stdin);
gets(s2);

if(strcmp(s2,"entertainment")==0||strcmp(s2,"ENTERTAINMENT")==0)
{
p("\nWHO IS THE LEADING ARTIST IN MANIKARNIKA ?\n\nA. KATRINA KALF\t\t\t\tB. ANUSHKA SHARMA\n\nC. LARA DUTT\t\t\t\tD. KANGANA RANAULT");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"D")==0||strcmp(s3,"d")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 80,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <KANGANA RANAULT>");
//exit(0);

}
}
else if(strcmp(s2,"sports")==0||strcmp(s2,"SPORTS")==0)
{
p("\nWHAT IS THE NATIONAL GAME OF ENGLAND ?\n\nA. HOCKEY\t\t\t\tB. CRICKET\n\nC. VOLLEY-BALL\t\t\t\tD. TENNIS");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"B")==0||strcmp(s3,"b")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 80,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <CRICKET>");
//exit(0);
}
}
else if(strcmp(s2,"current affairs")==0||strcmp(s2,"CURRENT AFFAIRS")==0)
p("\nTHE GOVERNMENT OF INDIA WILL OPEN HOW MANY COLLEGES IN J&K ?\n\nA. 30\t\t\t\tB. 40\n\nC. 50\t\t\t\tD. 20");
p("\n\nENTER  YOUR ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"C")==0||strcmp(s3,"c")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 80,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <50>");
//exit(0);
}
}
else if(strcmp(s,"EXPERT ADVICE")==0||strcmp(s,"expert advice")==0)
{
p("\nMUJHE SAHI OPTION LAGTA HAI (D) MONOCARPIC");
p("\n\n KYA KARNA HAI ? '%s'",h);
p("\nENTER YOUR ANSWER : ");
fflush(stdin);
gets(s4);
if (strcmp(s4,"d")==0||strcmp(s4,"D")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 80,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <MONOCARPIC>");
exit(0);
}
}

}

else if(strcmp(ch,"quit")==0||strcmp(ch,"QUIT")==0)
{
p("\n(%s) HAVE QUIT THE GAME",h);
p("\n\nBETTER LUCK NEXT TIME......");
p("\n\n...(CONGRATULATION)...YOU WON 80,000 INR");
p("\n\nCORRECT ANSWER : <MONOCARPIC>");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <MONOCARPIC>");
exit(0);
}
gets(e);
p("\n\n APKA 9 SAVAL APKE COMPUTER SCREEN PE YE......\n\t\tFOR RUPEES 1,60,000 INR.");
gets(e);
p("9.IN WHICH STATE IS THE LARJI HYDROELECTRIC POWER PLANT LOCATED ?\n\nA. HIMACHAL PRADESH\t\t\t\tB. SIKKIM\n\nC. TRIPURA\t\t\t\t\tD. GUJARAT");
p("\n\nENTER YOUR ANSWER :---> ");
fflush(stdin);
gets(ch);
 if (strcmp(ch,"A")==0||strcmp(ch,"a")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 1,60,000 INR ");
}

else if(strcmp(ch,"NO IDEA")==0||strcmp(ch,"no idea")==0)
{
p("TAKE LIFELINE :\nAUDIENCE POLL\n50:50\nFLIP THE QUESTION\nEXPERT ADVICE ");
p("\n\nCHOOSE YOUR LIFELINE : ");
fflush(stdin);
gets(s);
 if(strcmp(s,"AUDIENCE POLL")==0||strcmp(s,"audience poll")==0)
 {
  p("\n\nLOADING THE DATA ............\n");
 gets(r);
 p("\nA----->82%\nB----->2%\nC----->6%\nD----->10%");
 p("\n\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"a")==0||strcmp(s1,"A")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 1,60,000 INR ");
}
if(strcmp(s1,"b")==0||strcmp(s1,"B")==0||strcmp(s1,"D")==0||strcmp(s1,"d")==0||strcmp(s1,"c")==0||strcmp(s1,"C")==0)
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <HIMACHAL PRADESH>");
 exit(0);
 }
 }
else if(strcmp(s,"50:50")==0)
{
p("\n\nLOADING THE DATA ............\n");
 gets(r);
p("\n\nA. HIMACHAL PRADESH\t\t\t\t\n\n\n\n\t\t\t\tD. GUJARAT");
p("\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"a")==0||strcmp(s1,"A")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 1,60,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <HIMACHAL PRADESH>");
exit(0);
}
}
else if(strcmp(s,"flip the question")==0||strcmp(s,"FLIP THE QUESTION")==0)
{
p("\n\nENTER YOUR CHOICED TOPIC : ");
fflush(stdin);
gets(s2);

if(strcmp(s2,"entertainment")==0||strcmp(s2,"ENTERTAINMENT")==0)
{
p("\nWHO IS THE LEADING ARTIST IN MANIKARNIKA ?\n\nA. KATRINA KALF\t\t\t\tB. ANUSHKA SHARMA\n\nC. LARA DUTT\t\t\t\tD. KANGANA RANAULT");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"D")==0||strcmp(s3,"d")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 1,60,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <KANGANA RANAULT>");
//exit(0);

}
}
else if(strcmp(s2,"sports")==0||strcmp(s2,"SPORTS")==0)
{
p("\nWHAT IS THE NATIONAL GAME OF ENGLAND ?\n\nA. HOCKEY\t\t\t\tB. CRICKET\n\nC. VOLLEY-BALL\t\t\t\tD. TENNIS");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"B")==0||strcmp(s3,"b")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 1,60,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <CRICKET>");
//exit(0);
}
}

else if(strcmp(s2,"current affairs")==0||strcmp(s2,"CURRENT AFFAIRS")==0)
p("\nTHE GOVERNMENT OF INDIA WILL OPEN HOW MANY COLLEGES IN J&K ?\n\nA. 30\t\t\t\tB. 40\n\nC. 50\t\t\t\tD. 20");
p("\n\nENTER  YOUR ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"C")==0||strcmp(s3,"c")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 1,60,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <50>");
//exit(0);
}
}
else if(strcmp(s,"EXPERT ADVICE")==0||strcmp(s,"expert advice")==0)
{
p("\nMUJHE SAHI OPTION LAGTA HAI (A) HIMACHAL PRADESH");
p("\n\n KYA KARNA HAI ? '%s'",h);
p("\nENTER YOUR ANSWER : ");
fflush(stdin);
gets(s4);
if (strcmp(s4,"a")==0||strcmp(s4,"A")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 1,60,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <HIMACHAL PRADESH>");
exit(0);
}
}

}

else if(strcmp(ch,"quit")==0||strcmp(ch,"QUIT")==0)
{
p("\n(%s) HAVE QUIT THE GAME",h);
p("\n\nBETTER LUCK NEXT TIME......");
p("\n\n...(CONGRATULATION)...YOU WON 1,60,000 INR");
p("\n\nCORRECT ANSWER : <HIMACHAL PRADESH>");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <HIMACHAL PRADESH>");
exit(0);
}

gets(e);
p("\n\n APKA 10 SAVAL APKE COMPUTER SCREEN PE YE......\n\t\tFOR RUPEES 3,20,000 INR.");
gets(e);
p("10.WHAT IS THE HEIGHT OF STATUE OF UNITY  ?\n\nA. 172M\t\t\t\tB. 182M\n\nC. 181M\t\t\t\tD. 183M");
p("\n\nENTER YOUR ANSWER :---> ");
fflush(stdin);
gets(ch);
 if (strcmp(ch,"B")==0||strcmp(ch,"b")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 3,20,000 INR ");
}

else if(strcmp(ch,"NO IDEA")==0||strcmp(ch,"no idea")==0)
{
p("TAKE LIFELINE :\nAUDIENCE POLL\n50:50\nFLIP THE QUESTION\nEXPERT ADVICE ");
p("\n\nCHOOSE YOUR LIFELINE : ");
fflush(stdin);
gets(s);
 if(strcmp(s,"AUDIENCE POLL")==0||strcmp(s,"audience poll")==0)
 {
  p("\n\nLOADING THE DATA ............\n");
 gets(r);
 p("\nA----->3%\nB----->75%\nC----->2%\nD----->20%");
 p("\n\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"B")==0||strcmp(s1,"b")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 3,20,000 INR ");
}
if(strcmp(s1,"a")==0||strcmp(s1,"A")==0||strcmp(s1,"C")==0||strcmp(s1,"c")==0||strcmp(s1,"D")==0||strcmp(s1,"d")==0)
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <182M>");
 exit(0);
 }
 }
else if(strcmp(s,"50:50")==0)
{
p("\n\nLOADING THE DATA ............\n");
 gets(r);
p("\n\n \n\nC.181M \t\t\t\tB. 182M");
p("\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"B")==0||strcmp(s1,"b")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 3,20,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <182M>");
exit(0);
}
}
else if(strcmp(s,"flip the question")==0||strcmp(s,"FLIP THE QUESTION")==0)
{
p("\n\nENTER YOUR CHOICED TOPIC : ");
fflush(stdin);
gets(s2);

if(strcmp(s2,"entertainment")==0||strcmp(s2,"ENTERTAINMENT")==0)
{
p("\nWHO IS THE LEADING ARTIST IN MANIKARNIKA ?\n\nA. KATRINA KALF\t\t\t\tB. ANUSHKA SHARMA\n\nC. LARA DUTT\t\t\t\tD. KANGANA RANAULT");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"D")==0||strcmp(s3,"d")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 3,20,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <KANGANA RANAULT>");
//exit(0);

}
}
else if(strcmp(s2,"sports")==0||strcmp(s2,"SPORTS")==0)
{
p("\nWHAT IS THE NATIONAL GAME OF ENGLAND ?\n\nA. HOCKEY\t\t\t\tB. CRICKET\n\nC. VOLLEY-BALL\t\t\t\tD. TENNIS");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"B")==0||strcmp(s3,"b")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 3,20,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <CRICKET>");
//exit(0);
}
}
else if(strcmp(s2,"current affairs")==0||strcmp(s2,"CURRENT AFFAIRS")==0)
p("\nTHE GOVERNMENT OF INDIA WILL OPEN HOW MANY COLLEGES IN J&K ?\n\nA. 30\t\t\t\tB. 40\n\nC. 50\t\t\t\tD. 20");
p("\n\nENTER  YOUR ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"C")==0||strcmp(s3,"c")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 3,20,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <50>");
//exit(0);
}
}
else if(strcmp(s,"EXPERT ADVICE")==0||strcmp(s,"expert advice")==0)
{
p("\nMUJHE SAHI OPTION LAGTA HAI (B) 182M");
p("\n\n KYA KARNA HAI ? '%s'",h);
p("\nENTER YOUR ANSWER : ");
fflush(stdin);
gets(s4);
if (strcmp(s4,"b")==0||strcmp(s4,"B")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 3,20,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <182M>");
exit(0);
}
}

}

else if(strcmp(ch,"quit")==0||strcmp(ch,"QUIT")==0)
{
p("\n(%s) HAVE QUIT THE GAME",h);
p("\n\nBETTER LUCK NEXT TIME......");
p("\n\n...(CONGRATULATION)...YOU WON 1,60,000 INR");
p("\n\nCORRECT ANSWER : <182M>");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <182M>");
exit(0);
}
gets(e);
p("\n\n APKA 11 SAVAL APKE COMPUTER SCREEN PE YE......\n\t\tFOR RUPEES 6,40,000 INR.");
gets(e);
p("11.THE WORLD'S LONGEST RIVERS BY LENGTH ?\n\nA. NILE RIVER\t\t\t\tB. AMAZON RIVER\n\nC. YANGTZE\t\t\t\tD. MISSOURI");
p("\n\nENTER YOUR ANSWER :---> ");
fflush(stdin);
gets(ch);
 if (strcmp(ch,"A")==0||strcmp(ch,"a")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 6,40,000 INR ");
}

else if(strcmp(ch,"NO IDEA")==0||strcmp(ch,"no idea")==0)
{
p("TAKE LIFELINE :\nAUDIENCE POLL\n50:50\nFLIP THE QUESTION\nEXPERT ADVICE ");
p("\n\nCHOOSE YOUR LIFELINE : ");
fflush(stdin);
gets(s);
 if(strcmp(s,"AUDIENCE POLL")==0||strcmp(s,"audience poll")==0)
 {
  p("\n\nLOADING THE DATA ............\n");
 gets(r);
 p("\nA----->45%\nB----->40%\nC----->10%\nD----->5%");
 p("\n\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"A")==0||strcmp(s1,"a")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 6,40,000 INR ");
}
if(strcmp(s1,"b")==0||strcmp(s1,"B")==0||strcmp(s1,"C")==0||strcmp(s1,"c")==0||strcmp(s1,"D")==0||strcmp(s1,"d")==0)
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <NILE RIVER>");
 exit(0);
 }
 }
else if(strcmp(s,"50:50")==0)
{
p("\n\nLOADING THE DATA ............\n");
 gets(r);
p("\n\nA. NILE RIVER \t\t\t\tB. AMAZON RIVER");
p("\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"A")==0||strcmp(s1,"a")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 6,40,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <NILE RIVER>");
exit(0);
}
}
else if(strcmp(s,"flip the question")==0||strcmp(s,"FLIP THE QUESTION")==0)
{
p("\n\nENTER YOUR CHOICED TOPIC : ");
fflush(stdin);
gets(s2);

if(strcmp(s2,"entertainment")==0||strcmp(s2,"ENTERTAINMENT")==0)
{
p("\nWHO IS THE LEADING ARTIST IN MANIKARNIKA ?\n\nA. KATRINA KALF\t\t\t\tB. ANUSHKA SHARMA\n\nC. LARA DUTT\t\t\t\tD. KANGANA RANAULT");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"D")==0||strcmp(s3,"d")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 6,40,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <KANGANA RANAULT>");
//exit(0);

}
}
else if(strcmp(s2,"sports")==0||strcmp(s2,"SPORTS")==0)
{
p("\nWHAT IS THE NATIONAL GAME OF ENGLAND ?\n\nA. HOCKEY\t\t\t\tB. CRICKET\n\nC. VOLLEY-BALL\t\t\t\tD. TENNIS");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"B")==0||strcmp(s3,"b")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 6,40,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <CRICKET>");
//exit(0);
}
}
else if(strcmp(s2,"current affairs")==0||strcmp(s2,"CURRENT AFFAIRS")==0)
p("\nTHE GOVERNMENT OF INDIA WILL OPEN HOW MANY COLLEGES IN J&K ?\n\nA. 30\t\t\t\tB. 40\n\nC. 50\t\t\t\tD. 20");
p("\n\nENTER  YOUR ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"C")==0||strcmp(s3,"c")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 6,40,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <50>");
//exit(0);
}
}
else if(strcmp(s,"EXPERT ADVICE")==0||strcmp(s,"expert advice")==0)
{
p("\nMUJHE SAHI OPTION LAGTA HAI (A) NILE RIVER");
p("\n\n KYA KARNA HAI ? '%s'",h);
p("\nENTER YOUR ANSWER : ");
fflush(stdin);
gets(s4);
if (strcmp(s4,"a")==0||strcmp(s4,"A")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 6,40,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <NILE RIVER>");
exit(0);
}
}

}

else if(strcmp(ch,"quit")==0||strcmp(ch,"QUIT")==0)
{
p("\n(%s) HAVE QUIT THE GAME",h);
p("\n\nBETTER LUCK NEXT TIME......");
p("\n\n...(CONGRATULATION)...YOU WON 3,20,000 INR");
p("\n\nCORRECT ANSWER : <NILE RIVER>");
p(".....(CONGRATULATION).....");
p("\n....................................................................................\n************************************\n");
p("\n\nBANK OF KBC WINNERS..\n\t\t\t\t\tDATE :9|10|2019 \n\nPAY : %s\n\nRUPEES :  THREE LAKHS AND TWENTY THOUSANDS ONLY\n\nA.C no.xxxx xxxx xxxx\t\t\tRs 3,20,000/-\n\n\t\t\t\t\t\t\t\t\t\tPRUTHVI TIRMAL(AUTHORISE)\t\t(COMPUTERIZED SIGNATURE)\n\t\t\t\t\t\t\t%c..",h,w);
exit(0);
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <NILE RIVER>");
p(".....(CONGRATULATION).....");
p("\n....................................................................................\n************************************\n");
p("\n\nBANK OF KBC WINNERS..\n\t\t\t\t\tDATE :9|10|2019 \n\nPAY : %s\n\nRUPEES : THREE AND TWENTY THOUSANDS ONLY\n\nA.C no.xxxx xxxx xxxx\t\t\tRs 3,20,000/-\n\n\t\t\t\t\t\t\t\t\t\tPRUTHVI TIRMAL(AUTHORISE)\t\t(COMPUTERIZED SIGNATURE)\n\t\t\t\t\t\t\t%c..",h,w);
exit(0);
//exit(0);
}

gets(e);
p("\n\n APKA 12 SAVAL APKE COMPUTER SCREEN PE YE......\n\t\tFOR RUPEES 12,50,000 INR.");
gets(e);
p("12.WHICH DAM IS BUILT ON SUTLEJ RIVER  ?\n\nA. DAMODHAR \t\t\t\tB. BHAKRA \n\nC. KOSI\t\t\t\t\tD. MHAA ");
p("\n\nENTER YOUR ANSWER :---> ");
fflush(stdin);
gets(ch);
 if (strcmp(ch,"B")==0||strcmp(ch,"b")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 12,50,000 INR ");
}

else if(strcmp(ch,"NO IDEA")==0||strcmp(ch,"no idea")==0)
{
p("TAKE LIFELINE :\nAUDIENCE POLL\n50:50\nFLIP THE QUESTION\nEXPERT ADVICE ");
p("\n\nCHOOSE YOUR LIFELINE : ");
fflush(stdin);
gets(s);
 if(strcmp(s,"AUDIENCE POLL")==0||strcmp(s,"audience poll")==0)
 {
  p("\n\nLOADING THE DATA ............\n");
 gets(r);
 p("\nA----->3%\nB----->75%\nC----->2%\nD----->20%");
 p("\n\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"B")==0||strcmp(s1,"b")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 12,50,000 INR ");
}
if(strcmp(s1,"a")==0||strcmp(s1,"A")==0||strcmp(s1,"C")==0||strcmp(s1,"c")==0||strcmp(s1,"D")==0||strcmp(s1,"d")==0)
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <BHAKRA DAM>");
 exit(0);
 }
 }
else if(strcmp(s,"50:50")==0)
{
p("\n\nLOADING THE DATA ............\n");
 gets(r);
p("\n\n \n\nC.KOSI \t\t\t\tB. BHAKRA DAM");
p("\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"B")==0||strcmp(s1,"b")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 12,50,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <BHAKRA DAM>");
exit(0);
}
}
else if(strcmp(s,"flip the question")==0||strcmp(s,"FLIP THE QUESTION")==0)
{
p("\n\nENTER YOUR CHOICED TOPIC : ");
fflush(stdin);
gets(s2);

if(strcmp(s2,"entertainment")==0||strcmp(s2,"ENTERTAINMENT")==0)
{
p("\nWHO IS THE LEADING ARTIST IN MANIKARNIKA ?\n\nA. KATRINA KALF\t\t\t\tB. ANUSHKA SHARMA\n\nC. LARA DUTT\t\t\t\tD. KANGANA RANAULT");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"D")==0||strcmp(s3,"d")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 12,50,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <KANGANA RANAULT>");
//exit(0);

}
}
else if(strcmp(s2,"sports")==0||strcmp(s2,"SPORTS")==0)
{
p("\nWHAT IS THE NATIONAL GAME OF ENGLAND ?\n\nA. HOCKEY\t\t\t\tB. CRICKET\n\nC. VOLLEY-BALL\t\t\t\tD. TENNIS");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"B")==0||strcmp(s3,"b")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 12,50,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <CRICKET>");
//exit(0);
}
}
else if(strcmp(s2,"current affairs")==0||strcmp(s2,"CURRENT AFFAIRS")==0)
p("\nTHE GOVERNMENT OF INDIA WILL OPEN HOW MANY COLLEGES IN J&K ?\n\nA. 30\t\t\t\tB. 40\n\nC. 50\t\t\t\tD. 20");
p("\n\nENTER  YOUR ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"C")==0||strcmp(s3,"c")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 12,50,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <50>");
//exit(0);
}
}
else if(strcmp(s,"EXPERT ADVICE")==0||strcmp(s,"expert advice")==0)
{
p("\nMUJHE SAHI OPTION LAGTA HAI (B) BHAKRA DAM");
p("\n\n KYA KARNA HAI ? '%s'",h);
p("\nENTER YOUR ANSWER : ");
fflush(stdin);
gets(s4);
if (strcmp(s4,"b")==0||strcmp(s4,"B")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 12,50,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <BHAKRA DAM>");
exit(0);
}
}

}

else if(strcmp(ch,"quit")==0||strcmp(ch,"QUIT")==0)
{
p("\n(%s) HAVE QUIT THE GAME",h);
p("\n\nBETTER LUCK NEXT TIME......");
p("\n\n...(CONGRATULATION)...YOU WON 12,50,000 INR");
p("\n\nCORRECT ANSWER : <BHAKRA DAM>");
exit(0);
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <BHAKRA DAM>");
exit(0);
}


gets(e);
p("\n\n APKA 13 SAVAL APKE COMPUTER SCREEN PE YE......\n\t\tFOR RUPEES 25,00,000 INR.");
gets(e);
p("13.WH0 WAS THE FIRST IS THE CEO OF INFOSYS ?\n\nA. RAJEEV SURI\t\t\t\tB. NARAYANA SHATNU\n\nC. CR.KRISHNAN\t\t\t\tD. NARAYANA MURTHY");
p("\n\nENTER YOUR ANSWER :---> ");
fflush(stdin);
gets(ch);
 if (strcmp(ch,"D")==0||strcmp(ch,"d")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 25,00,000 INR ");
}

else if(strcmp(ch,"NO IDEA")==0||strcmp(ch,"no idea")==0)
{
p("TAKE LIFELINE :\nAUDIENCE POLL\n50:50\nFLIP THE QUESTION\nEXPERT ADVICE ");
p("\n\nCHOOSE YOUR LIFELINE : ");
fflush(stdin);
gets(s);
 if(strcmp(s,"AUDIENCE POLL")==0||strcmp(s,"audience poll")==0)
 {
  p("\n\nLOADING THE DATA ............\n");
 gets(r);
 p("\nA----->3%\nB----->45%\nC----->2%\nD----->50%");
 p("\n\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"d")==0||strcmp(s1,"D")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 25,00,000 INR ");
}
if(strcmp(s1,"a")==0||strcmp(s1,"A")==0||strcmp(s1,"C")==0||strcmp(s1,"c")==0||strcmp(s1,"B")==0||strcmp(s1,"b")==0)
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <NARAYANA MURTHY>");
 exit(0);
 }
 }
else if(strcmp(s,"50:50")==0)
{
p("\n\nLOADING THE DATA ............\n");
 gets(r);
p("\n\n\t\t\t\tB.NARAYANA SHATNU \n\n \t\t\t\tD. NARAYANA MURTHY");
p("\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"B")==0||strcmp(s1,"b")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 25,00,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <NARAYANA MURTHY>");
exit(0);
}
}
else if(strcmp(s,"flip the question")==0||strcmp(s,"FLIP THE QUESTION")==0)
{
p("\n\nENTER YOUR CHOICED TOPIC : ");
fflush(stdin);
gets(s2);

if(strcmp(s2,"entertainment")==0||strcmp(s2,"ENTERTAINMENT")==0)
{
p("\nWHO IS THE LEADING ARTIST IN MANIKARNIKA ?\n\nA. KATRINA KALF\t\t\t\tB. ANUSHKA SHARMA\n\nC. LARA DUTT\t\t\t\tD. KANGANA RANAULT");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"D")==0||strcmp(s3,"d")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 25,00,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <KANGANA RANAULT>");
//exit(0);

}
}
else if(strcmp(s2,"sports")==0||strcmp(s2,"SPORTS")==0)
{
p("\nWHAT IS THE NATIONAL GAME OF ENGLAND ?\n\nA. HOCKEY\t\t\t\tB. CRICKET\n\nC. VOLLEY-BALL\t\t\t\tD. TENNIS");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"B")==0||strcmp(s3,"b")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 25,00,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <CRICKET>");
//exit(0);
}
}
else if(strcmp(s2,"current affairs")==0||strcmp(s2,"CURRENT AFFAIRS")==0)
p("\nTHE GOVERNMENT OF INDIA WILL OPEN HOW MANY COLLEGES IN J&K ?\n\nA. 30\t\t\t\tB. 40\n\nC. 50\t\t\t\tD. 20");
p("\n\nENTER  YOUR ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"C")==0||strcmp(s3,"c")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 25,00,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <50>");
//exit(0);
}
}
else if(strcmp(s,"EXPERT ADVICE")==0||strcmp(s,"expert advice")==0)
{
p("\nMUJHE SAHI OPTION LAGTA HAI (D) NARAYANA MURTHY");
p("\n\n KYA KARNA HAI ? '%s'",h);
p("\nENTER YOUR ANSWER : ");
fflush(stdin);
gets(s4);
if (strcmp(s4,"d")==0||strcmp(s4,"D")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 25,00,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <NARAYANA MURTHY>");
exit(0);
}
}

}

else if(strcmp(ch,"quit")==0||strcmp(ch,"QUIT")==0)
{
p("\n(%s) HAVE QUIT THE GAME",h);
p("\n\nBETTER LUCK NEXT TIME......");
p("\n\n...(CONGRATULATION)...YOU WON 25,00,000 INR");
p("\n\nCORRECT ANSWER : <NARAYANA MURTHY>");
exit(0);
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <NARAYANA MURTHY>");
exit(0);
}

gets(e);
p("\n\n APKA 14 SAVAL APKE COMPUTER SCREEN PE YE......\n\t\tFOR RUPEES 50,00,000 INR.");
gets(e);
p("14.WHEN WAS COLD WAR ENDED ?\n\nA. 1991\t\t\t\tB. 1947\n\nC. 1978\t\t\t\tD. 1990");
p("\n\nENTER YOUR ANSWER :---> ");
fflush(stdin);
gets(ch);
 if (strcmp(ch,"A")==0||strcmp(ch,"a")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 5O,00,000 INR ");
}

else if(strcmp(ch,"NO IDEA")==0||strcmp(ch,"no idea")==0)
{
p("TAKE LIFELINE :\nAUDIENCE POLL\n50:50\nFLIP THE QUESTION\nEXPERT ADVICE ");
p("\n\nCHOOSE YOUR LIFELINE : ");
fflush(stdin);
gets(s);
 if(strcmp(s,"AUDIENCE POLL")==0||strcmp(s,"audience poll")==0)
 {
  p("\n\nLOADING THE DATA ............\n");
 gets(r);
 p("\nA----->62%\nB----->2%\nC----->1%\nD----->36%");
 p("\n\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"a")==0||strcmp(s1,"A")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 50,00,000 INR ");
}
if(strcmp(s1,"B")==0||strcmp(s1,"b")==0||strcmp(s1,"C")==0||strcmp(s1,"c")==0||strcmp(s1,"D")==0||strcmp(s1,"d")==0)
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <1991>");
 exit(0);
 }
 }
else if(strcmp(s,"50:50")==0)
{
p("\n\nLOADING THE DATA ............\n");
 gets(r);
p("\n\nA.1991\t\t\t\t \n\n \t\t\t\tD. 1990");
p("\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"a")==0||strcmp(s1,"A")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 50,00,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <1991>");
exit(0);
}
}
else if(strcmp(s,"flip the question")==0||strcmp(s,"FLIP THE QUESTION")==0)
{
p("\n\nENTER YOUR CHOICED TOPIC : ");
fflush(stdin);
gets(s2);

if(strcmp(s2,"entertainment")==0||strcmp(s2,"ENTERTAINMENT")==0)
{
p("\nWHO IS THE LEADING ARTIST IN MANIKARNIKA ?\n\nA. KATRINA KALF\t\t\t\tB. ANUSHKA SHARMA\n\nC. LARA DUTT\t\t\t\tD. KANGANA RANAULT");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"D")==0||strcmp(s3,"d")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 50,00,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <KANGANA RANAULT>");
//exit(0);

}
}
else if(strcmp(s2,"sports")==0||strcmp(s2,"SPORTS")==0)
{
p("\nWHAT IS THE NATIONAL GAME OF ENGLAND ?\n\nA. HOCKEY\t\t\t\tB. CRICKET\n\nC. VOLLEY-BALL\t\t\t\tD. TENNIS");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"B")==0||strcmp(s3,"b")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 50,00,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <CRICKET>");
//exit(0);
}
}
else if(strcmp(s2,"current affairs")==0||strcmp(s2,"CURRENT AFFAIRS")==0)
p("\nTHE GOVERNMENT OF INDIA WILL OPEN HOW MANY COLLEGES IN J&K ?\n\nA. 30\t\t\t\tB. 40\n\nC. 50\t\t\t\tD. 20");
p("\n\nENTER  YOUR ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"C")==0||strcmp(s3,"c")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 50,00,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <50>");
//exit(0);
}
}
else if(strcmp(s,"EXPERT ADVICE")==0||strcmp(s,"expert advice")==0)
{
p("\nMUJHE SAHI OPTION LAGTA HAI (A) 1991");
p("\n\n KYA KARNA HAI ? '%s'",h);
p("\nENTER YOUR ANSWER : ");
fflush(stdin);
gets(s4);
if (strcmp(s4,"d")==0||strcmp(s4,"D")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 50,00,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <1991>");
exit(0);
}
}

}

else if(strcmp(ch,"quit")==0||strcmp(ch,"QUIT")==0)
{
p("\n(%s) HAVE QUIT THE GAME",h);
p("\n\nBETTER LUCK NEXT TIME......");
p("\n\n...(CONGRATULATION)...YOU WON 50,00,000 INR");
p("\n\nCORRECT ANSWER : <1991>");
exit(0);
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <1991>");
exit(0);
}
gets(e);
p("\n\n APKA 15 SAVAL APKE COMPUTER SCREEN PE YE......\n\t\tFOR RUPEES 1,00,00,000 INR.");
gets(e);
p("15.WHAT WAS PRESENTED TO PARLIAMENT BY PIYUSH GOPAL IN FEB 2019 AND NIRMAL SHITARAMAN IN JUL 2019  ?\n\nA. DEFENCE PLAN\t\t\t\tB. NITI AAYOG PALN\n\nC. UNION BUDGET\t\t\t\tD. SEPARATE RAILWAY BUDGET");
p("\n\nENTER YOUR ANSWER :---> ");
fflush(stdin);
gets(ch);
 if (strcmp(ch,"c")==0||strcmp(ch,"C")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 1,00,00,000 INR ");
}

else if(strcmp(ch,"NO IDEA")==0||strcmp(ch,"no idea")==0)
{
p("TAKE LIFELINE :\nAUDIENCE POLL\n50:50\nFLIP THE QUESTION\nEXPERT ADVICE ");
p("\n\nCHOOSE YOUR LIFELINE : ");
fflush(stdin);
gets(s);
 if(strcmp(s,"AUDIENCE POLL")==0||strcmp(s,"audience poll")==0)
 {
  p("\n\nLOADING THE DATA ............\n");
 gets(r);
 p("\nA----->40%\nB----->5%\nC----->50%\nD----->5%");
 p("\n\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"c")==0||strcmp(s1,"C")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 1,00,00,000 INR ");
}
if(strcmp(s1,"b")==0||strcmp(s1,"B")==0||strcmp(s1,"A")==0||strcmp(s1,"a")==0||strcmp(s1,"D")==0||strcmp(s1,"d")==0)
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <UNION BUDGET>");
 exit(0);
 }
 }
else if(strcmp(s,"50:50")==0)
{
p("\n\nLOADING THE DATA ............\n");
 gets(r);
p("\n\nA.DEFENCE PALN \n\nC. UNION BUDGET");
p("\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"C")==0||strcmp(s1,"c")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 1,00,00,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <UNION BUDGET>");
exit(0);
}
}
else if(strcmp(s,"flip the question")==0||strcmp(s,"FLIP THE QUESTION")==0)
{
p("\n\nENTER YOUR CHOICED TOPIC : ");
fflush(stdin);
gets(s2);

if(strcmp(s2,"entertainment")==0||strcmp(s2,"ENTERTAINMENT")==0)
{
p("\nWHO IS THE LEADING ARTIST IN MANIKARNIKA ?\n\nA. KATRINA KALF\t\t\t\tB. ANUSHKA SHARMA\n\nC. LARA DUTT\t\t\t\tD. KANGANA RANAULT");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"D")==0||strcmp(s3,"d")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 1,00,00,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <KANGANA RANAULT>");
//exit(0);

}
}
else if(strcmp(s2,"sports")==0||strcmp(s2,"SPORTS")==0)
{
p("\nWHAT IS THE NATIONAL GAME OF ENGLAND ?\n\nA. HOCKEY\t\t\t\tB. CRICKET\n\nC. VOLLEY-BALL\t\t\t\tD. TENNIS");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"B")==0||strcmp(s3,"b")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 1,00,00,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <CRICKET>");
//exit(0);
}
}
else if(strcmp(s2,"current affairs")==0||strcmp(s2,"CURRENT AFFAIRS")==0)
p("\nTHE GOVERNMENT OF INDIA WILL OPEN HOW MANY COLLEGES IN J&K ?\n\nA. 30\t\t\t\tB. 40\n\nC. 50\t\t\t\tD. 20");
p("\n\nENTER  YOUR ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"C")==0||strcmp(s3,"c")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 1,00,00,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <50>");
//exit(0);
}
}
else if(strcmp(s,"EXPERT ADVICE")==0||strcmp(s,"expert advice")==0)
{
p("\nMUJHE SAHI OPTION LAGTA HAI (C) UNION BUDGET");
p("\n\n KYA KARNA HAI ? '%s'",h);
p("\nENTER YOUR ANSWER : ");
fflush(stdin);
gets(s4);
if (strcmp(s4,"c")==0||strcmp(s4,"C")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 1,00,00,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <UNION BUDGET>");
exit(0);
}
}

}

else if(strcmp(ch,"quit")==0||strcmp(ch,"QUIT")==0)
{
p("\n(%s) HAVE QUIT THE GAME",h);
p("\n\nBETTER LUCK NEXT TIME......");
p("\n\n...(CONGRATULATION)...YOU WON 50,00,000 INR");
p("\n\nCORRECT ANSWER : <UNION BUDGET>");
p(".....(CONGRATULATION).....");
p("\n....................................................................................\n************************************\n");
p("\n\nBANK OF KBC WINNERS..\n\t\t\t\t\tDATE :9|10|2019 \n\nPAY : %s\n\nRUPEES :  FIFTY LAKHS ONLY\n\nA.C no.xxxx xxxx xxxx\t\t\tRs 50,00,000/-\n\n\t\t\t\t\t\t\t\t\t\tPRUTHVI TIRMAL(AUTHORISE)\t\t(COMPUTERIZED SIGNATURE)\n\t\t\t\t\t\t\t%c..",h,w);
exit(0);
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <UNION BUDGET>");
p(".....(CONGRATULATION).....");
p("\n....................................................................................\n************************************\n");
p("\n\nBANK OF KBC WINNERS..\n\t\t\t\t\tDATE :9|10|2019 \n\nPAY : %s\n\nRUPEES : FIFTY ONLY\nA.C no.xxxx xxxx xxxx\t\t\tRs 50,00,000/-\n\n\t\t\t\t\t\t\t\t\t\tPRUTHVI TIRMAL(AUTHORISE).",h);
exit(0);
//exit(0);
}

gets(e);
p("\n\n APKA 16 SAVAL APKE COMPUTER SCREEN PE YE......\n\t\tFOR RUPEES 5,00,00,000 INR.");
gets(e);
p("16.WHERE IS THE NATIONAL GANDHI MUSEUM LOCATED IN DELHI ?\n\nA. RAJ GHAT\t\t\t\tB. VIJAY GHAT\n\nC. KISHAN GHAT\t\t\t\tD. TEEN MURTI BHAVAN");
p("\n\nENTER YOUR ANSWER :---> ");
fflush(stdin);
gets(ch);
 if (strcmp(ch,"A")==0||strcmp(ch,"a")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 5,00,00,000 INR ");
}

else if(strcmp(ch,"NO IDEA")==0||strcmp(ch,"no idea")==0)
{
p("TAKE LIFELINE :\nAUDIENCE POLL\n50:50\nFLIP THE QUESTION\nEXPERT ADVICE ");
p("\n\nCHOOSE YOUR LIFELINE : ");
fflush(stdin);
gets(s);
 if(strcmp(s,"AUDIENCE POLL")==0||strcmp(s,"audience poll")==0)
 {
  p("\n\nLOADING THE DATA ............\n");
 gets(r);
 p("\nA----->45%\nB----->15%\nC----->30%\nD----->5%");
 p("\n\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"A")==0||strcmp(s1,"a")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 5,00,00,000 INR ");
}
if(strcmp(s1,"b")==0||strcmp(s1,"B")==0||strcmp(s1,"C")==0||strcmp(s1,"c")==0||strcmp(s1,"D")==0||strcmp(s1,"d")==0)
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <RAJ GHAT>");
 exit(0);
 }
 }
else if(strcmp(s,"50:50")==0)
{
p("\n\nLOADING THE DATA ............\n");
 gets(r);
p("\n\nA.RAJ GHAT \n\nC. KISHAN GHAT");
p("\nENTER THE YOUR ANSWER : ");
fflush(stdin);
gets(s1);
if (strcmp(s1,"a")==0||strcmp(s1,"A")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 5,00,00,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <RAJ GHAT>");
exit(0);
}
}
else if(strcmp(s,"flip the question")==0||strcmp(s,"FLIP THE QUESTION")==0)
{
p("\n\nENTER YOUR CHOICED TOPIC : ");
fflush(stdin);
gets(s2);

if(strcmp(s2,"entertainment")==0||strcmp(s2,"ENTERTAINMENT")==0)
{
p("\nWHO IS THE LEADING ARTIST IN MANIKARNIKA ?\n\nA. KATRINA KALF\t\t\t\tB. ANUSHKA SHARMA\n\nC. LARA DUTT\t\t\t\tD. KANGANA RANAULT");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"D")==0||strcmp(s3,"d")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 5,00,00,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <KANGANA RANAULT>");
//exit(0);

}
}
else if(strcmp(s2,"sports")==0||strcmp(s2,"SPORTS")==0)
{
p("\nWHAT IS THE NATIONAL GAME OF ENGLAND ?\n\nA. HOCKEY\t\t\t\tB. CRICKET\n\nC. VOLLEY-BALL\t\t\t\tD. TENNIS");
p("\n\nENTER  YOUE ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"B")==0||strcmp(s3,"b")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 5,00,00,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <CRICKET>");
//exit(0);
}
}
else if(strcmp(s2,"current affairs")==0||strcmp(s2,"CURRENT AFFAIRS")==0)
p("\nTHE GOVERNMENT OF INDIA WILL OPEN HOW MANY COLLEGES IN J&K ?\n\nA. 30\t\t\t\tB. 40\n\nC. 50\t\t\t\tD. 20");
p("\n\nENTER  YOUR ANSWER : ");
fflush(stdin);
gets(s3);
if (strcmp(s3,"C")==0||strcmp(s3,"c")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 5,00,00,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <50>");
//exit(0);
}
}
else if(strcmp(s,"EXPERT ADVICE")==0||strcmp(s,"expert advice")==0)
{
p("\nMUJHE SAHI OPTION LAGTA HAI (A) RAJ GHAT");
p("\n\n KYA KARNA HAI ? '%s'",h);
p("\nENTER YOUR ANSWER : ");
fflush(stdin);
gets(s4);
if (strcmp(s4,"a")==0||strcmp(s4,"A")==0)
{
p("\nSHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 5,00,00,000 INR ");
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <RAJ GHAT>");
exit(0);
}
}

}

else if(strcmp(ch,"quit")==0||strcmp(ch,"QUIT")==0)
{
p("\n(%s) HAVE QUIT THE GAME",h);
p("\n\nBETTER LUCK NEXT TIME......");
p("\n\n...(CONGRATULATION)...YOU WON 1,00,00,000 INR");
p("\n\nCORRECT ANSWER : <RAJ GHAT>");
p(".....(CONGRATULATION).....");
p("\n....................................................................................\n************************************\n");
p("\n\nBANK OF KBC WINNERS..\n\t\t\t\t\tDATE :9|10|2019 \n\nPAY : %s\n\nRUPEES : ONE CRORE ONLY\n\nA.C no.xxxx xxxx xxxx\t\t\tRs 1,00,00,000/-\n\n\t\t\t\t\t\t\t\t\t\tPRUTHVI TIRMAL(AUTHORISE)\t\t(COMPUTERIZED SIGNATURE)\n\t\t\t\t\t\t\t%c..",h,w);
exit(0);
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <RAJ GHAT>");
p(".....(CONGRATULATION).....");
p("\n....................................................................................\n************************************\n");
p("\n\nBANK OF KBC WINNERS..\n\t\t\t\t\tDATE :9|10|2019 \n\nPAY : %s\n\nRUPEES : ONE CRORE ONLY\n\nA.C no.xxxx xxxx xxxx\t\t\tRs 1,00,00,000/-\n\n\t\t\t\t\t\t\t\t\t\tPRUTHVI TIRMAL(AUTHORISE)\t\t(COMPUTERIZED SIGNATURE)\n\t\t\t\t\t\t\t%c..",h,w);
exit(0);
//exit(0);
}
gets(e);
p("\nNOW YOU CANNOT USE YOUR LIFELINES AT THIS STAGE...............");

gets(e);
p("\n\n APKA 17 SAVAL APKE COMPUTER SCREEN PE YE......\n\t\tFOR RUPEES 10,00,00,000 INR.");
gets(e);
p("17.WHICH OF THESE CITIES LIES IN TWO CONTINENTS - ASIA AND EUROPE ?\n\nA. ANKARA\t\t\t\tB. ISTANBUL\n\nC. St.PETERSBURG\t\t\tD. MOSCOW");
p("\n\nENTER YOUR ANSWER :---> ");
fflush(stdin);
gets(ch);
 if (strcmp(ch,"B")==0||strcmp(ch,"b")==0)
{
p("SHAHI JAVAB...");
p("\n\n...(CONGRATULATION)...YOU WON 10,00,00,000 INR ");
p(".....(CONGRATULATION).....");
p("\n....................................................................................\n************************************\n");
p("\n\nBANK OF KBC WINNERS..\n\t\t\t\t\tDATE :9|10|2019 \n\nPAY : %s\n\nRUPEES : TEN CRORE ONLY\n\nA.C no.xxxx xxxx xxxx\t\t\tRs 10,00,00,000/-\n\n\t\t\t\t\t\t\t\t\t\tPRUTHVI TIRMAL(AUTHORISE)\t\t(COMPUTERIZED SIGNATURE)\n\t\t\t\t\t\t\t%c..",h,w);
gets(e);
p("\n");
p("\n\n\t\t\tALL COPYRIGHTS ARE RESERVED.. ");
p("\n\n\t\t\tVERSION 8.1");
p("\n\n\t\tDEVELOP BY....");
p("\n\n\t\t\tPROGRAMMER , MR. PRUTHVI TIRMAL");

exit(0);
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <INSTANBUL>");
//exit(0);
}




 if(strcmp(ch,"quit")==0||strcmp(ch,"QUIT")==0)
{
p("\n(%s) HAVE QUIT THE GAME",h);
p("\n\nBETTER LUCK NEXT TIME......");
p("\n\n...(CONGRATULATION)...YOU WON 5,00,00,000 INR");
p("\n\nCORRECT ANSWER : <ISTANBUL>");
p(".....(CONGRATULATION).....");
p("\n....................................................................................\n************************************\n");
p("\n\nBANK OF KBC WINNERS..\n\t\t\t\t\tDATE :9|10|2019 \n\nPAY : %s\n\nRUPEES : FIVE CRORE ONLY\n\nA.C no.xxxx xxxx xxxx\t\t\tRs 5,00,00,000/-\n\n\t\t\t\t\t\t\t\t\t\tPRUTHVI TIRMAL(AUTHORISE)\t\t(COMPUTERIZED SIGNATURE)\n\t\t\t\t\t\t\t%c..",h,w);
gets(e);
p("\n");
p("\n\n\t\t\tALL COPYRIGHTS ARE RESERVED.. ");
p("\n\n\t\t\tVERSION 8.1");
p("\n\n\t\tDEVELOP BY....");
p("\n\n\t\t\tPROGRAMMER , MR. PRUTHVI TIRMAL");

exit(0);
}
else
{
p("\nOHOHOH..YE UTAR GALT HAI...\nSAHI JAWAB HAI <ISTANBUL>");
p(".....(CONGRATULATION).....");
p("\n....................................................................................\n************************************\n");
p("\n\nBANK OF KBC WINNERS..\n\t\t\t\t\tDATE :9|10|2019 \n\nPAY : %s\n\nRUPEES : ONE CRORE ONLY\n\nA.C no.xxxx xxxx xxxx\t\t\tRs 1,00,00,000/-\n\n\t\t\t\t\t\t\t\t\t\tPRUTHVI TIRMAL(AUTHORISE)\t\t(COMPUTERIZED SIGNATURE)\n\t\t\t\t\t\t\t%c..",h,w);
gets(e);
p("\n");
p("\n\n\t\t\tALL COPYRIGHTS ARE RESERVED.. ");
p("\n\n\t\t\tVERSION 8.1");
p("\n\n\t\tDEVELOP BY....");
p("\n\n\t\t\tPROGRAMMER , MR. PRUTHVI TIRMAL");

exit(0);
}
gets(e);
p("\n");
p("\n\n\t\t\tALL COPYRIGHTS ARE RESERVED.. ");
p("\n\n\t\t\tVERSION 8.1");
p("\n\n\t\tDEVELOP BY....");
p("\n\n\t\t\tPROGRAMMER , MR. PRUTHVI TIRMAL");


getch();
}