 #include<stdio.h>                                              //       AUGABE 1 
 /*
int main()                                             // Der programm wird ausgeührt, kompiliert und auf der Terminal audgegeben
{

printf("Hello World!");return 0;
return 0;
} */

//int main()                                                               // AUFGABE 2
//{
//int n;
 //n=17-2*7+9%6; // 6 compiler 6
 // n=(17-2)*(7+9)%6; // 40 compiler 0
// n=(17-2)*((7+9)%6); // 15 x 2,6 = 39 compiler 60
//n=((((((17-2)*7)-9)*7)+9)%6); // 75.6  Vom compiler ausgegeben: 3
//n=17-(2*(7+(9%6))); // -1.66  Vom compiler ausgegeben: -3
// n=17/(5/3)*4; // 2.55   compiler = 68
//n=(17/5)*(5/17); // 3.4 x 0.3 = 1 */    compiler = 0
//printf("\n %i \n", n);

//float f;
//f=17.0/(5/3)*4; // 40.8               compiler =0
//f=(17.0/5)*(5/17); // 0,3             compiler = 0
//f=1*(1.0/3)*3; // 1                   compiler = 0
//f=1.5e2*1.5e2; //                     compiler = 0
//f=1.5e2*1.5e-2; //                    compiler = 0
//f=1.5e-2*1.5e-2; //                   compiler = 1073741824 
//printf("\n f %i \n", f);


 
//char c;
//c='a'+5; // karaktere kann man nicht mit variablen addieren  compiler = 102  ==  wird ins binäre übersetzt und addiert?
//c='0'+9;  // karaktere kann man nicht mit variablen addieren compiler = 57
//c='0'+9/2;  // karaktere kann man nicht mit variablen addieren compiler = 52
//c ='0'+9-2;  // karaktere kann man nicht mit variablen addieren compiler = 55
//c='0'+'9';  // karaktere kann man nicht mit variablen addieren compiler = 105
//printf("\n C %i \n", c);

//bool b; // bool ist entweder 1 oder 0
//c='5'; // c ist ein charakter 
//b=(c>='0' && c<='9'); // es wird ins bits umgewandelt und mithilfe von der Und verknüpfung zusammenaddiert und wieder ins ASCCI ubersetzt (?)  compiler=1
//b = (c>=0 && c<= 9); // compiler 0
//b = (c>='0' || c<= '9'); // compiler 1
//b = (c>=0 || c<= 9); // compiler 1
//printf("\n b %i \n", b);

//int m = 44; //    << - binary shift operator, teilt/multipliziert eine zahl mit einen anderen quadratierten zahl
//m = 44 >> 2; // compiler 11 == 44/2x2=11
//m = 44 << 1; // compiler 88
//m = 1 << 10; // compiler 1024
//m = 1 << 32; // compiler = 0
//printf("\n m %i \n", m);

//return 0;
//}




/*                                                                                        // AUFGABE 3
int main() { 
int x=50000;
int y=45000;                 
printf("\n Etwas Arithmetik ...\n\n");
//printf("\t 1. Zahl eingeben:");
//scanf("%i", &x);
//printf("\t 2. Zahl eingeben:");
//scanf("%i", &y);
printf("\n");
printf("\t %i + %i ist %i\n", x, y, x+y);
printf("\t %i - %i ist %i\n", x, y, x-y);
printf("\t %i * %i ist %i\n", x, y, x*y);  // bei der multiplikation von größeren zahlen kommt ein - wert raus, weil die zahl zu groß für int im positiven bereich ist
printf("\t %i / %i ist %i\n", x, y, x/y); // bei x=50k und y=45k kommt hier 1 raus, weil man als int keine nachkommastellen haben können
printf("\t %i %% %i ist %i\n", x, y, x%y);
return 0;
}
*/





                                                                                   // AUFGABE 4

/*
int i;
long l;
float f;
double d;
d=100/3; f=d; l=f; i=l; //  d=33.33 f=33.3 l=33 int=33
d=100/3.0; f=d; l=f; i=l;  // d=33.33 f=33.3 l=33 int=33
d=(float)100/3; f=d; l=f; i=l; d=33.33 f=33.3 l=33 int=33
*/


                                                                                               // AUFGABE 5

  /*                                       #include <iostream>

int main() {
    int x,y;
    x = 12 << 2;
    y = 12 >> 2;
    printf("\n 12x4=%i",x);
    printf("\n 12/4=%i",y);

    return 0;
}                                                   
*/











/* #include <iostream>

int main() {                                                                                    // AUFGABE 6
   
    int i;
    printf("\n Size of Int:  %i \n",i=sizeof(int));
    printf("\n Size of Char:  %i \n",i=sizeof(char));
    printf("\n Size of Short:  %i \n",i=sizeof(short));
    printf("\n Size of Bool:  %i \n",i=sizeof(bool));
    printf("\n Size of Long:  %i \n",i=sizeof(long));
    printf("\n Size of Long Long:  %i \n",i=sizeof(long long));
    printf("\n Size of Float:  %i \n",i=sizeof(float));
    printf("\n Size of Double:  %i \n",i=sizeof(double));
    printf("\n Size of Long Double:  %i \n",i=sizeof(long double));
    


    return 0;
} */