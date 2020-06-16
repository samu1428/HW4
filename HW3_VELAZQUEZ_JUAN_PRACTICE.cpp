/*
	Name: Juan David Velazquez, Hector Velazquez
	Description: hw 3
*/
 -1-
#include<stdio.h>
bool check(int x, int y, int n); // we assume that they are int 
int main ()
{	
	int var1, var2, var3;
	printf("Enter superior limit first, then 'x' and 'y' values: ");
	scanf("%d%d%d",&var1, &var2, &var3);// the user need to enter the values between '-' 
	(check(var3, var2, var1) ? printf("the values are in range") : printf("the values are not in range")) ;// an if where we inform to the user the state of the values
	return 0;
}
bool check(int x, int y, int n)
{
	if(x >= 0 && x < n && y >= 0 && y < n) return true; // if are in range return 1
	else return false;// if are not in range return 0
}


// -2-
//#include<stdio.h>
//int day_of_year(int mm, int dd, int yy);// we define our funtion
//int main()
//{
//	int m,d,y;
//	printf("Enter mm/dd/yy: ");
//	scanf("%d/%d/%d",&m,&d,&y);//we need to enter between '/'
//	printf("\n The number of that day is: %d", day_of_year(m,d,y));// we print the number of days
//	return 0;
//}
//int day_of_year(int mm, int dd, int yy)// the funtion ask for the day
//{
//	int i=0,dia = 0;
//	int cal[11]={31,28,31,30,31,30,31,31,30,31,30};//our array of month just have 11 because we don't need december
//	for(;i < mm-1;i++)dia += cal[i];//we sum the days of the month after the enter one and we store in 'day'
//	dia += dd;//now we add the number of days of the enter month
//	(((yy%4==0)&&(yy%100!=0)||(yy%400==0))  && mm > 2? dia += 1: dia = dia);// if is bisiesto, we add 1, if is not we mantain the value
//	return dia;// we return the number of days
//}



//// -3-
//double inner_product(double a[], double b[], int)// we call 'max' to the int
//{
//	int i;
//	double tot = 0;
//	for(i = 0; i < max; i++)tot += a[i]*b[i];
//	return tot;
//}



////-4-
//we can see this 2 programs and compare their time of compilation, one is using recursive and the other not
//with nonrecursive
//#include<stdio.h>
//int factorial(int n)   //- Compilation Time: 0,34s
//{
//  	  int aux, fact=1;
//	  if (n <= 1)
//	    return 1;
//      for(aux=1; aux <= n; aux++)
//         fact = fact * aux;         
//      return fact;
//}
/////recursive
//int factorial(int n)  //- Compilation Time: 0,36s
//{
//  	  if (n <= 1)
//	    return 1;
//      return n * factorial(n-1);
//}

//int main()
//{ 
//  int a;
//  printf("Enter a number : ");
//  scanf("%ld", &a);
//  printf("Its factorial is: %d\n", a, factorial(a));    
//  return 0;
//}

////// -5-
//#include<stdio.h>
//void pb(int n) // we see that is a void funtion which contain an int 
{
	if (n != 0) // if that int is no zero, means that if we can divide until 'n' become 0 
	{
		pb(n/2);// we recall the funtion but this time the number 'n' is divided by 2; 
// we apply the same procedure when we try to convert a decimal number into a binary one 
		putchar('0' + n % 2);// if the value of 'n' is even that means that we would see in the screen a 0
// because 0+0 = 0(notice that '0' is printed like a caracter and not a number)
//if the value of 'n' is odd that means that we would see in the screen a 1 (odd %2 = 1)
// because 0+1 = 1
	}//so the first number that we would see is when if we divide n by 2 we would have 0 
}// HERE WE REALIZE THAT THE FUNTION IS A BINARY CONVERTER
//main (void)
//{
//	int i;
//	printf("ingrese un numero: ");
//	scanf("%d",&i);
//	pb(i);
//}
/*Ex: n = 5
pb(n)-->pb(5)-->pb(5/2=2)-->pb(2/2=1)-->pb(1/2=0)--> X
													.
													.
													.
													V
	'0'+ 5%2=1<--'0'+2%2=0	<--'0'+1%2=1	<--false in the if stament
so the first impresion is the result of  1%2 and so on: 
-------------
|101		\
|			\
-------------

is how we see in the screen*/




