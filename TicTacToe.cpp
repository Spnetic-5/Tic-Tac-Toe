#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int main(){
system("COLOR EC");
int p;

printf("        |||||||||||||||||||||Welcome to my game - Tic Tac Toe|||||||||||||||||\n");

printf("\n\n1.single player mode (computer vs human)\n\n");
printf("2.two player mode\n\n");
printf("\nEnter 1 for single player mode\n");
printf("Enter 2 for Two player mode \n\n");
scanf("%d",&p);

printf("\n\n\n\n");


if( p == 1){

printf("        ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf("        ||||||||||||||||||||||||||Single player mode||||||||||||||||||||||||||\n");
printf("        ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf("\n\n");

int i,j ,q,k;
char a1,a2;
char a,b,c,d;
a ='0';
b='0';
c='0';
d= '0';
char player2[10];
char player1[10] = "Computer" ;

char s[10] = {'0','1','2','3','4','5','6','7','8','9'};


printf("Player 1 is computer \n\n");
printf("Player 2 please enter your name  :");
scanf("%s",&player2);

printf("\n\n\n");

printf("\n%s : x\n",player1);
printf("%s : o\n\n",player2);

printf("\n\n\n");

printf(" |    |    |    |\n");
printf(" |  %c |  %c |  %c | \n",s[1],s[2],s[3]);
printf(" |    |    |    |\n");
printf("-------------------\n");
printf(" |    |    |    |\n");
printf(" |  %c |  %c |  %c | \n",s[4],s[5],s[6]);
printf(" |    |    |    |\n");
printf("-------------------\n");
printf(" |    |    |    |\n");
printf(" |  %c |  %c |  %c | \n",s[7],s[8],s[9]);
printf(" |    |    |    |\n");

printf("\n\n");

int lower = 1, upper = 9, count = 1;
    srand(time(0));
    for (k = 0; k < count; k++) {
    int num = (rand() % (upper - lower + 1)) + lower;
    c = num +'0' ;
    printf("computer move = %c(wait for a second)",c);
    }
// || (i==3)  || (i==5)  || (i==7)  || (i==9) )
// main loop
for(i=1 ; i<10 ; i++){


//-----------------------------------------------------------------------

/*first move of computer :- */

//attacking move
// none

//defensive move
// none

//random
if( (i==1) ){
for(j=1; j<10 ; j++){
if(s[j] == c){
s[j] = 'x';
delay(1000);
}}}
if(i==2){
printf("\n\nComputer has put 'x' in cell %c\n\n",c);
}

/*end of first move of computer  */

//------------------------------------------------------------------------

/*second move of computer :- */

//RANDOM PART:-
// NONE

//ATTACKING PART :-

if(i==3){
//1st possibility
 if(s[1] ==  'x'){
    if((s[2] == 'o') || (s[3] == 'o')){
     s[5] = 'x';
     delay(1000);
     b ='5';
    }
    else{
    s[2] ='x';
    delay(1000);
    b ='2';
    }
 }
 else{
 //2nd possibility
 if(s[2] == 'x'){
    if(s[1] == 'o'|| (s[3] == 'o')){
    s[5] = 'x';
    delay(1000);
    b ='5';
    }
    else{
    s[1] = 'x' ;
    delay(1000);
    b ='1';
    }
 }
 else{
 //3rd possibility
 if(s[3] == 'x'){
    if(s[2] == 'o'|| (s[1] == 'o')){
    s[5] = 'x';
    delay(1000);
    b ='5';
    }
    else{
    s[2] = 'x' ;
    delay(1000) ;
    b ='2';
    }
 }
 else{
 //4th possibility
 if(s[4] == 'x'){
    if(s[1] == 'o'|| (s[7] == 'o')){
    s[5] = 'x';
    delay(1000);
    b ='5';
    }
    else{
    s[1] = 'x';
    delay(1000);
    b ='1';
    }
 }
 else{
 //5th possibility
 if(s[5] == 'x'){
    if(s[2] == 'o'|| (s[8] == 'o')){
    s[6] = 'x' ;
    delay(1000);
    b ='6';
    }
    else{
    s[2] = 'x';
    delay(1000);
    b ='2';
    }
 }
 else{
 //6th possibility
 if(s[6] == 'x'){
    if(s[3] == 'o'|| (s[9] == 'o')){
    s[5] = 'x';
    delay(1000);
    b ='5';
    }
    else{
    s[3] = 'x' ;
    delay(1000);
    b ='3';
    }
 }
 else{
 //7th possibility
 if(s[7] == 'x'){
    if(s[4] == 'o'|| (s[1] == 'o')){
    s[8] = 'x' ;
    delay(1000);
    b ='8';
    }
    else{
    s[4] = 'x';
    delay(1000);
    b ='4';
    }
 }
 else{
 //8th possibility
 if(s[8] == 'x'){
    if(s[5] == 'o'|| (s[2] == 'o')){
    s[9] = 'x';
    delay(1000);
    b ='9';
    }
    else{
    s[5] = 'x';
    delay(1000);
    b ='5';
    }
 }
 else{
 //9th and last possibility
 if(s[9] == 'x'){
    if(s[6] == 'o'|| (s[3] == 'o')){
    s[8] = 'x';
    delay(1000);
    b ='8';
    }
    else{
    s[6] = 'x';
    delay(1000);
    b ='6';
    }
 }
}}}}}}}}}
//printing part
if(i==4){
printf("\n\nComputer has put 'x' in cell %c\n\n",b);
}

//Defensive part:-
// NONE

/*end of second move of computer  */

//------------------------------------------------------------------------

/*Third move of computer :- */

//ATTACKING PART :-
//to win this tic Tac toe game
if(i==5){
if( ((s[1] == 'x') && (s[2] == 'x'))  ||  ((s[4] == 'x') && (s[5] == 'x')) || ((s[7] == 'x') && (s[8] == 'x')) || ((s[1] == 'x') && (s[4] == 'x'))  || ((s[2] == 'x') && (s[5] == 'x')) || ((s[3] == 'x') && (s[6] == 'x'))  || ((s[2] == 'x') && (s[3] == 'x'))  || ((s[5] == 'x') && (s[6] == 'x'))  || ((s[8] == 'x') && (s[9] == 'x'))  || ((s[4] == 'x') && (s[7] == 'x'))  || ((s[5] == 'x') && (s[8] == 'x'))  || ((s[6] == 'x') && (s[9] == 'x')) || ((s[1] == 'x') && (s[5] == 'x'))  || ((s[5] == 'x') && (s[9] == 'x'))  || ((s[3] == 'x') && (s[5] == 'x')) || ((s[5] == 'x') && (s[7] == 'x'))  ){
if((s[1] == 'x') && (s[2] == 'x')){
  if(a2 !='3') {s[3] = 'x';
  delay(1000);
  a = '3' ;}
}
else{
if((s[4] == 'x') && (s[5] == 'x')){
  if(a2 !='6') {s[6] = 'x';
  delay(1000);
  a = '6' ;}
}
else{
if((s[7] == 'x') && (s[8] == 'x')){
  if(a2 !='9') {s[9] = 'x';
  delay(1000);
  a = '9' ;}
}
else{
if((s[1] == 'x') && (s[4] == 'x')){
  if(a2 !='7') {s[7] = 'x';
  delay(1000);
  a = '7' ;}
}
else{
if((s[2] == 'x') && (s[5] == 'x')){
  if(a2 !='8') {s[8] = 'x';
  delay(1000);
  a = '8' ;}
}
else{
if((s[3] == 'x') && (s[6] == 'x')){
  if(a2 !='9') {s[9] = 'x';
  delay(1000);
  a = '9' ;}
}
else{
if((s[2] == 'x') && (s[3] == 'x')){
  if(a2 !='1') {s[1] = 'x';
  delay(1000);
  a = '1' ;}
}
else{
if((s[5] == 'x') && (s[6] == 'x')){
  if(a2 !='4') {s[4] = 'x';
  delay(1000);
  a = '4' ;}
}
else{
if((s[8] == 'x') && (s[9] == 'x')) {
  if(a2 !='7') {s[7] = 'x';
  delay(1000);
  a = '7' ;}
}
else{
if((s[4] == 'x') && (s[7] == 'x')){
  if(a2 !='1') {s[1] = 'x';
  delay(1000);
  a = '1' ;}
}
else{
if((s[5] == 'x') && (s[8] == 'x')){
  if(a2 !='2') {s[2] = 'x';
  delay(1000);
  a = '2' ;}
}
else{
if((s[6] == 'x') && (s[9] == 'x')){
  if(a2 !='3') {s[3] = 'x';
  delay(1000);
  a = '3' ;}
}
else{
if((s[1] == 'x') && (s[5] == 'x')){
  if(a2 !='9') {s[9] = 'x';
  delay(1000);
  a = '9' ;}
}
else{
if((s[5] == 'x') && (s[9] == 'x')){
  if(a2 !='1') {s[1] = 'x';
  delay(1000);
  a = '1' ;}
}
else{
if((s[3] == 'x') && (s[5] == 'x')){
  if(a2 !='7') {s[7] = 'x';
  delay(1000);
  a = '7' ;}
}
else{
if((s[5] == 'x') && (s[7] == 'x')){
  if(a2 !='3') {s[3] = 'z';
  delay(1000);
  a = '3' ;}
}
}}}}}}}}}}}}}}}}}
//Defensive move :-
 if(i==5){
if(a == '0'){
  if((s[1]=='o') && (s[2] =='o')){
  s[3] = 'x';
  delay(1000);
  a = '3';
  }
  if((s[2]=='o') && (s[3] =='o')){
  s[1] = 'x';
  delay(1000);
  a = '1';
  }
  if((s[4]=='o') && (s[5] =='o')){
  s[6] = 'x';
  delay(1000);
  a = '6';
  }
  if((s[4]=='o') && (s[5] =='o')){
  s[6] = 'x';
  delay(1000);
  a = '6';
  }
  if((s[5]=='o') && (s[6] =='o')){
  s[4] = 'x';
  delay(1000);
  a = '4';
  }
  if((s[5]=='o') && (s[6] =='o')){
  s[4] = 'x';
  delay(1000);
  a = '4';
  }
  if((s[7]=='o') && (s[8] =='o')){
  s[9] = 'x';
  delay(1000);
  a = '9';
  }
  if((s[8]=='o') && (s[9] =='o')){
  s[7] = 'x';
  delay(1000);
  a = '7';
  }
  if((s[1]=='o') && (s[4] =='o')){
  s[7] = 'x';
  delay(1000);
  a = '7';
  }
  if((s[4]=='o') && (s[7] =='o')){
  s[1] = 'x';
  delay(1000);
  a = '1';
  }
  if((s[2]=='o') && (s[5] =='o')){
  s[8] = 'x';
  delay(1000);
  a = '8';
  }
  if((s[5]=='o') && (s[8] =='o')){
  s[2] = 'x';
  delay(1000);
  a = '2';
  }
  if((s[3]=='o') && (s[6] =='o')){
  s[9] = 'x';
  delay(1000);
  a = '9';
  }
  if((s[6]=='o') && (s[9] =='o')){
  s[3] = 'x';
  delay(1000);
  a = '3';
  }
  if((s[1]=='o') && (s[5] =='o')){
  s[9] = 'x';
  delay(1000);
  a = '9';
  }
  if((s[5]=='o') && (s[9] =='o')){
  s[1] = 'x';
  delay(1000);
  a = '1';
  }
  if((s[3]=='o') && (s[5] =='o')){
  s[7] = 'x';
  delay(1000);
  a = '7';
  }
  if((s[5]=='o') && (s[7] =='o')){
  s[3] = 'x';
  delay(1000);
  a = '3';
  }
  if((s[1]=='o') && (s[3] =='o')){
  s[2] = 'x';
  delay(1000);
  a = '2';
  }
  if((s[4]=='o') && (s[6] =='o')){
  s[5] = 'x';
  delay(1000);
  a = '5';
  }
  if((s[7]=='o') && (s[9] =='o')){
  s[8] = 'x';
  delay(1000);
  a = '8';
  }
  if((s[1]=='o') && (s[7] =='o')) {
  s[4] = 'x';
  delay(1000);
  a = '4';
  }
  if((s[2]=='o') && (s[8] =='o')){
  s[5] = 'x';
  delay(1000);
  a = '5';
  }
  if((s[3]=='o') && (s[9] =='o')){
  s[6] = 'x';
  delay(1000);
  a = '6';
  }
  if((s[1]=='o') && (s[9] =='o')){
  s[5] = 'x';
  delay(1000);
  a = '5';
  }
  if((s[3]=='o') && (s[7] =='o')){
  s[5] = 'x';
  delay(1000);
  a = '5';
  }}
 }
//mid-attacking move(a move which will setup a winning chance for 7th move ) (in which user blocks my winning move but not attempting to win )
if(i==5){

if(a == '0'){
//1st possibility
if( ((s[1] == 'x') && (s[2] == 'x')) && (s[3] == 'o') ){
s[5] = 'x';
delay(1000);
a='5';
}}

if(a =='0'){
//2nd possibility
if( ((s[4] == 'x') && (s[5] == 'x'))  &&  (s[6] =='o' )  ){
if(s[1] == 'o'){
 s[3] = 'x';
 delay(1000);
 a = '3';
  }
 if(s[7] == 'o'){
 s[9] = 'x';
 delay(1000);
 a ='9';
 }
 if( (s[1] != 'o') && (s[9] != 'o')){
 s[3] = 'x';
 delay(1000);
 a ='3';
 }}}


if(a =='0'){
//3rd possibility
if( ((s[7] == 'x') && (s[8] == 'x'))  &&  (s[9] =='o' ) ){
s[5] = 'x';
delay(1000);
a='5';
}}

if(a =='0'){
//4th possibility
if( ((s[1] == 'x') && (s[4] == 'x'))  &&  (s[7] =='o' ) ){
s[5] = 'x';
delay(1000);
a='5';
}}

if(a =='0'){
//5th possibility
if( ((s[2] == 'x') && (s[5] == 'x')) && (s[8] == 'o')){
 if(s[1] == 'o'){
 s[3] = 'x';
 delay(1000);
 a = '3';
  }
 if(s[3] == 'o'){
 s[1] = 'x';
 delay(1000);
 a ='1';
 }
 if( (s[1] != 'o') && (s[3] != 'o')){
 s[1] = 'x';
 delay(1000);
 a ='1';
 }}}

if(a =='0'){
//6th possibility
if( ((s[3] == 'x') && (s[6] == 'x'))  &&  (s[9] =='o' ) ){
s[5] = 'x';
delay(1000);
a='5';
}}

if(a=='0'){
//7th possibility
if( ((s[2] == 'x') && (s[3] == 'x')) && (s[1] =='o' ) ){
s[5] = 'x';
delay(1000);
a='5';
}}

if( a=='0'){
//8th possibility
if( ((s[5] == 'x') && (s[6] == 'x')) && (s[4] == 'o')){
 if(s[3] == 'o'){
 s[1] = 'x';
 delay(1000);
 a = '1';
  }
 if(s[9] == 'o'){
 s[7] = 'x';
 delay(1000);
 a ='7';
 }
 if( (s[3] != 'o') && (s[9] != 'o')){
 s[7] = 'x';
 delay(1000);
 a ='7';
 }}}


if(a == '0'){
//9th possibility
if( ((s[8] == 'x') && (s[9] == 'x')) &&  (s[7] == 'o') ) {
s[5] = 'x';
delay(1000);
a='5';
}}


if(a == '0'){
//10th possibility
if(  ((s[4] == 'x') && (s[7] == 'x'))  &&  (s[1] == 'o') ){
s[5] = 'x';
delay(1000);
a='5';
}}

if( a=='0'){
//11th possibility
if( ((s[5] == 'x') && (s[8] == 'x')) &&   (s[2] == 'o') ){
if( s[7] == 'o'  ){
s[9] = 'x';
delay(1000);
a = '9';
}
if(s[9] == 'o' ){
s[7] == 'x' ;
delay(1000);
a = '7';
}
if( (s[7] != 'o') && (s[9] != 'o')){
 s[7] = 'x';
 delay(1000);
 a ='7';
 }}}

if(a == '0'){
//12th possbility
if( ((s[6] == 'x') && (s[9] == 'x'))  &&    (s[3] == 'o')    ){
s[5] = 'x';
delay(1000);
a='5';
}}


if(a == '0'){
//13th possibility
if( ((s[1] == 'x') && (s[5] == 'x')) && (s[9] == 'o') ){
s[3] = 'x';
delay(1000);
a = '3';
}}

if(a == '0'){
//14th possibility
if( ((s[5] == 'x') && (s[9] == 'x')) &&  (s[1] == 'o') ){
s[3] = 'x';
delay(1000);
a = '3';
}}


if(a == '0'){
//15th possibility
if( ((s[3] == 'x') && (s[5] == 'x'))  &&  (s[7] == 'o') ){
s[1] = 'x';
delay(1000);
a = '1';
}}

if(a == '0'){
//16th possibility
if(  ((s[5] == 'x') && (s[7] == 'x'))  &&  (s[3] == 'o') ){
s[1] = 'x';
delay(1000);
a = '1';
}}
}
//printing part
if(i ==6){
if(a!='0'){
printf("\n\nComputer has put 'x' in cell %c\n\n",a);
}
}
/*end of Third move of computer  */

//------------------------------------------------------------------------

/*Fourth move of computer*/

//Attacking move :_
//( If player 2 let me win i.e code is coming from  mid-attacking part and  player 2 is not placing 'o' in my mid-attacking mechanism..)
if(i == 7 ||  i == 9){

if( d == '0'){
//1st possibility
 if( ((s[1] == 'x') && (s[2] == 'x'))  && ( s[3] != 'o' )){
    s[3] = 'x';
    delay(2000);
    d = '3' ;
 }}

if( d=='0'){
//2nd possibility
 if( ((s[4] == 'x') && (s[5] == 'x'))  && ( s[6] != 'o') ){
    s[6] = 'x';
    delay(2000);
    d = '6';
 }}

if( d == '0' ){
//3rd possibility
 if( ((s[7] == 'x') && (s[8] == 'x')) && ( s[9]  != 'o' ) ){
    s[9] = 'x';
    delay(2000);
    d = '9';
 }}

 if( d == '0' ){
//4th possibility
 if( ((s[1] == 'x') && (s[4] == 'x')) && ( s[5]  != 'o' ) ){
    s[5] = 'x';
    delay(2000);
    d = '5';
 }}

if( d == '0' ){
//5th possibility
 if( ((s[2] == 'x') && (s[5] == 'x')) && ( s[8]  != 'o' ) ){
    s[8] = 'x';
    delay(2000);
    d = '8';
 }}

if( d == '0' ){
//6th possibility
 if( ((s[3] == 'x') && (s[6] == 'x')) && ( s[9]  != 'o' ) ){
    s[9] = 'x';
    delay(2000);
    d = '9';

 }}

if( d == '0' ){
//7th possibility
 if( ((s[2] == 'x') && (s[3] == 'x')) && ( s[1]  != 'o' ) ){
    s[1] = 'x';
    delay(2000);
    d = '1';
 }}

if( d == '0' ){
//8th possibility
 if( ((s[5] == 'x') && (s[6] == 'x')) && ( s[4]  != 'o' ) ){
    s[4] = 'x';
    delay(2000);
    d = '4';
 }}


if( d == '0' ){
//9th possibility
 if( ((s[8] == 'x') && (s[9] == 'x')) && ( s[7]  != 'o' ) ){
    s[7] = 'x';
    delay(2000);
    d = '7';
 }}

if( d == '0' ){
//10th possibility
 if( ((s[4] == 'x') && (s[7] == 'x')) && ( s[1]  != 'o' ) ){
    s[1] = 'x';
    delay(2000);
    d = '1';
 }}

if( d == '0' ){
//11th possibility
 if( ((s[5] == 'x') && (s[8] == 'x')) && ( s[2]  != 'o' ) ){
    s[2] = 'x';
    delay(2000);
    d = '2';
 }}

if( d == '0' ){
//12th possibility
 if( ((s[6] == 'x') && (s[9] == 'x')) && ( s[3]  != 'o' ) ){
    s[3] = 'x';
    delay(2000);
    d = '3';
 }}

 if( d == '0' ){
//13th possibility
 if( ((s[1] == 'x') && (s[5] == 'x')) && ( s[9]  != 'o' ) ){
    s[9] = 'x';
    delay(2000);
    d = '9';
 }}

if( d == '0' ){
//14th possibility
 if( ((s[5] == 'x') && (s[9] == 'x')) && ( s[1]  != 'o' ) ){
    s[1] = 'x';
    delay(2000);
    d = '1';
 }}

 if( d == '0' ){
//15th possibility
 if( ((s[3] == 'x') && (s[5] == 'x')) && ( s[7]  != 'o' ) ){
    s[7] = 'x';
    delay(2000);
    d = '7';
 }}


if( d == '0' ){
//16th possibility
 if( ((s[5] == 'x') && (s[7] == 'x')) && ( s[3]  != 'o' ) ){
    s[3] = 'x';
    delay(2000);
    d = '3';
 }}

if( d == '0' ){
//17th possibility
 if( ((s[1] == 'x') && (s[3] == 'x')) && ( s[2]  != 'o' ) ){
    s[2] = 'x';
    delay(2000);
    d = '2';
 }}

 if( d == '0' ){
//18th possibility
 if( ((s[4] == 'x') && (s[6] == 'x')) && ( s[5]  != 'o' ) ){
    s[5] = 'x';
    delay(2000);
    d = '5';
 }}

 if( d == '0' ){
//19th possibility
 if( ((s[7] == 'x') && (s[9] == 'x')) && ( s[8]  != 'o' ) ){
    s[8] = 'x';
    delay(2000);
    d = '8';
 }}

 if( d == '0' ){
//20th possibility
 if( ((s[1] == 'x') && (s[7] == 'x')) && ( s[4]  != 'o' ) ){
    s[4] = 'x';
    delay(2000);
    d = '4';
 }}

 if( d == '0' ){
//21th possibility
 if( ((s[2] == 'x') && (s[8] == 'x')) && ( s[5]  != 'o' ) ){
    s[5] = 'x';
    delay(2000);
    d = '5';
 }}

 if( d == '0' ){
//22nd possibility
 if( ((s[3] == 'x') && (s[9] == 'x')) && ( s[6]  != 'o' ) ){
    s[6] = 'x';
    delay(2000);
    d = '6';
 }}

 if( d == '0' ){
//23rd possibility
 if( ((s[1] == 'x') && (s[9] == 'x')) && ( s[5]  != 'o' ) ){
    s[5] = 'x';
    delay(2000);
    d = '5';
 }}

 if( d == '0' ){
//24th possibility
 if( ((s[3] == 'x') && (s[7] == 'x')) && ( s[5]  != 'o' ) ){
    s[5] = 'x';
    delay(2000);
    d = '5';
 }}
}
//Defensive Part
if(i == 7 || i == 9){

if( d == '0'){
//1st possibility
 if( ((s[1] == 'o') && (s[2] == 'o'))  && ( s[3] != 'x' )){
    s[3] = 'x';
    delay(2000);
    d = '3' ;
 }}

if( d=='0'){
//2nd possibility
 if( ((s[4] == 'o') && (s[5] == 'o'))  && ( s[6] != 'x') ){
    s[6] = 'x';
    delay(2000);
    d = '6';
 }}

if( d == '0' ){
//3rd possibility
 if( ((s[7] == 'o') && (s[8] == 'o')) && ( s[9]  != 'x' ) ){
    s[9] = 'x';
    delay(2000);
    d = '9';
 }}

 if( d == '0' ){
//4th possibility
 if( ((s[1] == 'o') && (s[4] == 'o')) && ( s[5]  != 'x' ) ){
    s[5] = 'x';
    delay(2000);
    d = '5';
 }}

if( d == '0' ){
//5th possibility
 if( ((s[2] == 'o') && (s[5] == 'o')) && ( s[8]  != 'x' ) ){
    s[8] = 'x';
    delay(2000);
    d = '8';
 }}

if( d == '0' ){
//6th possibility
 if( ((s[3] == 'o') && (s[6] == 'o')) && ( s[9]  != 'x' ) ){
    s[9] = 'x';
    delay(2000);
    d = '9';

 }}

if( d == '0' ){
//7th possibility
 if( ((s[2] == 'o') && (s[3] == 'o')) && ( s[1]  != 'x' ) ){
    s[1] = 'x';
    delay(2000);
    d = '1';
 }}

if( d == '0' ){
//8th possibility
 if( ((s[5] == 'o') && (s[6] == 'o')) && ( s[4]  != 'x' ) ){
    s[4] = 'x';
    delay(2000);
    d = '4';
 }}


if( d == '0' ){
//9th possibility
 if( ((s[8] == 'o') && (s[9] == 'o')) && ( s[7]  != 'x' ) ){
    s[7] = 'x';
    delay(2000);
    d = '7';
 }}

if( d == '0' ){
//10th possibility
 if( ((s[4] == 'o') && (s[7] == 'o')) && ( s[1]  != 'x' ) ){
    s[1] = 'x';
    delay(2000);
    d = '1';
 }}

if( d == '0' ){
//11th possibility
 if( ((s[5] == 'o') && (s[8] == 'o')) && ( s[2]  != 'x' ) ){
    s[2] = 'x';
    delay(2000);
    d = '2';
 }}

if( d == '0' ){
//12th possibility
 if( ((s[6] == 'o') && (s[9] == 'o')) && ( s[3]  != 'x' ) ){
    s[3] = 'x';
    delay(2000);
    d = '3';
 }}

 if( d == '0' ){
//13th possibility
 if( ((s[1] == 'o') && (s[5] == 'o')) && ( s[9]  != 'x' ) ){
    s[9] = 'x';
    delay(2000);
    d = '9';
 }}

if( d == '0' ){
//14th possibility
 if( ((s[5] == 'o') && (s[9] == 'o')) && ( s[1]  != 'x' ) ){
    s[1] = 'x';
    delay(2000);
    d = '1';
 }}

 if( d == '0' ){
//15th possibility
 if( ((s[3] == 'o') && (s[5] == 'o')) && ( s[7]  != 'x' ) ){
    s[7] = 'x';
    delay(2000);
    d = '7';
 }}


if( d == '0' ){
//16th possibility
 if( ((s[5] == 'o') && (s[7] == 'o')) && ( s[3]  != 'x' ) ){
    s[3] = 'x';
    delay(2000);
    d = '3';
 }}

if( d == '0' ){
//17th possibility
 if( ((s[1] == 'o') && (s[3] == 'o')) && ( s[2]  != 'x' ) ){
    s[2] = 'x';
    delay(2000);
    d = '2';
 }}

 if( d == '0' ){
//18th possibility
 if( ((s[4] == 'o') && (s[6] == 'o')) && ( s[5]  != 'x' ) ){
    s[5] = 'x';
    delay(2000);
    d = '5';
 }}

 if( d == '0' ){
//19th possibility
 if( ((s[7] == 'o') && (s[9] == 'o')) && ( s[8]  != 'x' ) ){
    s[8] = 'x';
    delay(2000);
    d = '8';
 }}

 if( d == '0' ){
//20th possibility
 if( ((s[1] == 'o') && (s[7] == 'o')) && ( s[4]  != 'x' ) ){
    s[4] = 'x';
    delay(2000);
    d = '4';
 }}

 if( d == '0' ){
//21th possibility
 if( ((s[2] == 'o') && (s[8] == 'o')) && ( s[5]  != 'x' ) ){
    s[5] = 'x';
    delay(2000);
    d = '5';
 }}

 if( d == '0' ){
//22nd possibility
 if( ((s[3] == 'o') && (s[9] == 'o')) && ( s[6]  != 'x' ) ){
    s[6] = 'x';
    delay(2000);
    d = '6';
 }}

 if( d == '0' ){
//23rd possibility
 if( ((s[1] == 'o') && (s[9] == 'o')) && ( s[5]  != 'x' ) ){
    s[5] = 'x';
    delay(2000);
    d = '5';
 }}

 if( d == '0' ){
//24th possibility
 if( ((s[3] == 'o') && (s[7] == 'o')) && ( s[5]  != 'x' ) ){
    s[5] = 'x';
    delay(2000);
    d = '5';
 }}
}
//Random moves
if(i == 7 || i == 9){

if(d == '0' ){
//1st possibility
if(s[1] == '1'){
    s[1] = 'x';
    delay(2000);
    d = '1';
}}


if(d == '0' ){
//2nd possibility
if(s[2] == '2'){
    s[2] = 'x';
    delay(2000);
    d = '2';
}}


if(d == '0' ){
//3rd possibility
if(s[3] == '3'){
    s[3] = 'x';
    delay(2000);
    d = '3';
}}

if(d == '0' ){
//4th possibility
if(s[4] == '4'){
    s[4] = 'x';
    delay(2000);
    d = '4';
}}

if(d == '0' ){
//5th possibility
if(s[5] == '5'){
    s[5] = 'x';
    delay(2000);
    d = '5';
}}

if(d == '0' ){
//6th possibility
if(s[6] == '6'){
    s[6] = 'x';
    delay(2000);
    d = '6';
}}


if(d == '0' ){
//7th possibility
if(s[7] == '7'){
    s[7] = 'x';
    delay(2000);
    d = '7';
}}


if(d == '0' ){
//8th possibility
if(s[8] == '8'){
    s[8] = 'x';
    delay(2000);
    d = '8';
}}


if(d == '0' ){
//9th possibility
if(s[9] == '9'){
    s[9] = 'x';
    delay(2000);
    d = '9';
}}

}

//printing part
if(i == 8){
if(d !='0'){
printf("\n\nComputer has put 'x' in cell %c\n\n",d);
}
}

//printing part
if(i ==9){
if(d !='0'){
printf("\n\nComputer has put 'x' in cell %c\n\n",d);
delay(1000);
}
}





if( (i==2) || (i==4)  || (i==6)  || (i==8) ){
printf("%s :\n",player2);
printf("Please enter the position of o:");
scanf(" %c", &a2);
for(j=1; j<10 ; j++){
if(s[j] == a2){
s[j] = 'o';
}}}

if(c == a2){
printf("You can not enter values that previously entered ");
return 0 ;
}

if(b == a2){
printf("You can not enter values that previously entered ");
return 0 ;
}
if(a == a2){
printf("You can not enter values that previously entered ");
return 0 ;
}
if(d == a2){
printf("You can not enter values that previously entered ");
return 0 ;
}

if(i == 8){
d ='0';
}
system("cls");



printf("\n\n\n");

printf(" |    |    |    |\n");
printf(" |  %c |  %c |  %c | \n",s[1],s[2],s[3]);
printf(" |    |    |    |\n");
printf("-------------------\n");
printf(" |    |    |    |\n");
printf(" |  %c |  %c |  %c | \n",s[4],s[5],s[6]);
printf(" |    |    |    |\n");
printf("-------------------\n");
printf(" |    |    |    |\n");
printf(" |  %c |  %c |  %c | \n",s[7],s[8],s[9]);
printf(" |    |    |    |\n");

printf("\n\n\n");




if( (s[1] == s[2] &&  s[1] ==  s[3] ) ||  (s[4] == s[5] &&  s[4] == s[6]) ||  (s[7] == s[8] && s[7] == s[9])  ||   (s[1] == s[4] &&  s[1] == s[7])  ||   (s[2] == s[5] &&  s[2] == s[8])  ||   (s[3] == s[6]  &&  s[3] == s[9] ) || (s[1] == s[5] && s[1] == s[9])  ||  (s[3] == s[5] && s[3] == s[7])){
if(i==5 ){
printf("\n\nComputer has put 'x' in cell %c\n\n",a);
}
if(i == 7 ){
printf("\n\nComputer has put 'x' in cell %c\n\n",d);
}
if(i == 9 ){
printf("\n\nComputer has put 'x' in cell %c\n\n",d);
}

if( (i ==5) ||  (i ==7) ||  (i == 9) ){
printf("\n\n%s is winner\n\n",player1);
printf("Thank you for playing my game\n");
printf("Game made by Omkar bhilare\n");
printf("If there any bugs then let me know\n");
printf("My email id :- ombhilare999@gmail.com");

delay(2000);
return 0 ;
}
if( (i ==6) ||  (i ==8)  ){
printf("\n\n%s is winner\n\n",player2);
delay(2000);
printf("Thank you for playing my game\n");
printf("Game made by Omkar bhilare\n");
printf("If there any bugs then let me know\n");
printf("My email id :- ombhilare999@gmail.com");
return 0 ;
}}
}
printf("\n\nComputer has put 'x' in cell %c\n\n",d);
printf("        ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf("        |||||||||||||||||||||||||||||||||DRAW|||||||||||||||||||||||||||||||||\n");
printf("        ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf("\n\n");
printf("Thank you for playing my game\n");
printf("Game made by Omkar bhilare\n");
printf("If there any bugs then let me know\n");
printf("My email id :- ombhilare999@gmail.com");
delay(2000);
getch();
}

//Two Player Mode
if( p == 2){
printf("        ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf("        |||||||||||||||||||||||||||TWO player mode||||||||||||||||||||||||||||\n");
printf("        ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf("\n\n");

int i,j ;
char a1,a2 ;
char player1[10] ,player2[10];


char s[10] = {'0','1','2','3','4','5','6','7','8','9'};


printf("Player 1 please enter your name : ");
scanf("%s",&player1);

printf("Player 2 please enter your name  :");
scanf("%s",&player2);

printf("\n\n\n");

printf("\n%s : x\n",player1);
printf("%s : o\n\n",player2);

printf("\n\n\n");

printf(" |    |    |    |\n");
printf(" |  %c |  %c |  %c | \n",s[1],s[2],s[3]);
printf(" |    |    |    |\n");
printf("-------------------\n");
printf(" |    |    |    |\n");
printf(" |  %c |  %c |  %c | \n",s[4],s[5],s[6]);
printf(" |    |    |    |\n");
printf("-------------------\n");
printf(" |    |    |    |\n");
printf(" |  %c |  %c |  %c | \n",s[7],s[8],s[9]);
printf(" |    |    |    |\n");

printf("\n\n");

for(i=1 ; i<10 ; i++){


if( (i==1) || (i==3)  || (i==5)  || (i==7)  || (i==9) ){
printf("%s :\n",player1);
printf("Please enter the position of x :");
scanf(" %c", &a1);
for(j=1; j<10 ; j++){
if(s[j] == a1){
s[j] = 'x' ;
}}}


if( (i==2) || (i==4)  || (i==6)  || (i==8) ){
printf("%s :\n",player2);
printf("Please enter the position of o:");
scanf(" %c", &a2);
for(j=1; j<10 ; j++){
if(s[j] == a2){
s[j] = 'o';
}}}


if(a1 == a2){
printf("You can not enter values that previously entered ");
return 0 ;
}

system("cls");



printf("\n\n\n");

printf(" |    |    |    |\n");
printf(" |  %c |  %c |  %c | \n",s[1],s[2],s[3]);
printf(" |    |    |    |\n");
printf("-------------------\n");
printf(" |    |    |    |\n");
printf(" |  %c |  %c |  %c | \n",s[4],s[5],s[6]);
printf(" |    |    |    |\n");
printf("-------------------\n");
printf(" |    |    |    |\n");
printf(" |  %c |  %c |  %c | \n",s[7],s[8],s[9]);
printf(" |    |    |    |\n");

printf("\n\n\n");

if( (s[1] == s[2] &&  s[1] ==  s[3] ) ||  (s[4] == s[5] &&  s[4] == s[6]) ||  (s[7] == s[8] && s[7] == s[9])  ||   (s[1] == s[4] &&  s[1] == s[7])  ||   (s[2] == s[5] &&  s[2] == s[8])  ||   (s[3] == s[6]  &&  s[3] == s[9] ) || (s[1] == s[5] && s[1] == s[9])  ||  (s[3] == s[5] && s[3] == s[7])){
if( (i ==5) ||  (i ==7) ||  (i == 9) ){
printf("\n\n%s is winner\n\n",player1);
printf("Thank you for playing my game\n");
printf("Game made by Omkar bhilare\n");
printf("If there any bugs then let me know\n");
printf("My email id :- ombhilare999@gmail.com");
delay(2000);
return 0 ;
}
if( (i ==6) ||  (i ==8)  ){
printf("\n\n%s is winner\n\n",player2);
printf("Thank you for playing my game\n");
printf("Game made by Omkar bhilare\n");
printf("If there any bugs then let me know\n");
printf("My email id :- ombhilare999@gmail.com");
delay(2000);
return 0 ;
}}
}
printf("        ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf("        |||||||||||||||||||||||||||||||||DRAW|||||||||||||||||||||||||||||||||\n");
printf("        ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf("\n\n");
printf("Thank you for playing my game\n");
printf("Game made by Omkar bhilare\n");
printf("If there any bugs then let me know\n");
printf("My email id :- ombhilare999@gmail.com");
delay(2000);
getch();
}
getch();

}
