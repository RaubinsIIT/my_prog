/* #include<stdio.h>
void printHello();
int main(){
   printHello();
  return 0;
}
void printHello()
{
  printf("Hello");
}*/




//namaste bonjour

/* #include<stdio.h>
void namaste();
void bonjour();
int main(){
   char ch;
  printf("enter i for indian and f for french");
  scanf("%c",&ch);
  if(ch=='i')
  {
   namaste();
  }
  else
  {
    bonjour();
  }
  return 0;
}
void namaste()
{
  printf("namaste");
}
void bonjour()
{
  printf("bonjour");
}
*/



//sum of two numbers

/* #include<stdio.h>
int sum(int a, int b);
int main(){
  int a,b,s;
   printf("enter the value of a");
  scanf("%d",&a);
  printf("enter the value of b");
  scanf("%d",&b);
  s = sum(a,b);
  printf("the sum is %d", s);
  return 0;
}
int sum(int a, int b)
{
return a+b;
} */



// table of a number

/* #include<stdio.h>
void printtable(int n);
int main(){
 int n;
  printf("enter the value of n");
  scanf("%d", &n);
  printtable(n);
  return 0;
}
void printtable(int n) 
{
for(int i=1; i<=10; i++)
  printf("%d \n", i*n);
} */



// odd or even 

/* #include<stdio.h>
void oddeven();
int main(){
 int n;
  printf("enter the value of n");
  scanf("%d", &n);
  oddeven(n);
  return 0;
}
void oddeven(int n) 
{
if(n%2==0)
{
  printf("even");
}
  else{
    printf("odd");
  }
  }
*/



// gcd using function




/* #include<stdio.h>
void gcd(int n, int m);
int main(){
 int n,m;
  printf("enter the value of n");
  scanf("%d", &n);
  printf("enter the value of m");
  scanf("%d", &m);
  gcd(n,m);
  return 0;
}
void gcd(int n, int m)
{
  int result;
for(int i=1; i<=n &&  i<=m; i++)
  {
   if(n%i==0 && m%i==0)
   {
     result = i;
   }
  }
  printf("%d", result);
}
*/


// gst

/* #include<stdio.h>
void calculateprice(float value);
int main(){
float value = 100;
calculateprice(value);
  return 0;
}
void calculateprice(float value)
{
  value = value + (0.18*value);
  printf("final price %f", value);
}
*/


//square of a number

/* #include<stdio.h>
#include<math.h>
int main()
{
  int n;
  printf("enter the value");
  scanf("%d", &n);
  printf("%f", pow(n,2));
  return 0;
}
*/


// recursions

// print helloworld

/* #include<stdio.h>
void printHW(int count);
int main()
{
  printHW(10);
  return 0;
}
void printHW(int count)
{
  if(count == 0)
  {
    return;
  }
    printf("hello world\n");
  printHW(count-1);
}
*/ 


// sum of first n natural numbers


/* #include<stdio.h>
int sum(int n);
int main()
{
  int n;
printf("sum of %d", sum(5));

  return 0;
}
int sum(int n)
{
  if(n==1)
  {
    return 1;
  }
  int SumNm1 = sum(n-1);
  int SumN = SumNm1 + n;
  return SumN;
}
*/


// factorial of n

/* #include<stdio.h>
int fact(int n);
int main()
{
  int n;
printf("factorial of the number is %d", fact(5));

  return 0;
}
int fact(int n)
{
  if(n==0)
  {
    return 1;
  }
  int factNm1 = fact(n-1);
  int factN= factNm1*n;
  return factN;
}
*/ 

// celsius to fahrenhiet

/* #include<stdio.h>
float converttemp(float celcius);
int main()
{
  float celcius;
printf(" Far %f", converttemp(0) );
  return 0;
}
float converttemp(float celcius)
{
  float far = celcius * (9.0/5.0) + 32;
  return far;
}
*/


// fibonnaci numbers

/* #include<stdio.h>
int fib(int n);
int main()
{
fib(6);
return 0;
}
int fib(int n)
{
  if(n==0)
  {
    return 0;
  }
  else if(n==1)
  {
    return 1;
  }
 int fibNm1 = fib(n-1);
  int fibNm2= fib(n-2);
  int fibN= fibNm1 + fibNm2;
  printf("the fibonnaci series of %d is: %d\n", n, fibN);
  return fibN;
}
*/


//////////////// POINTERS

/* #include<stdio.h>
int main()
{ */
  //int age = 22;
  //int *ptr = &age;

  // address
  /* printf("%p\n", &age);
  printf("%u\n", &age);
  printf("%u\n", ptr);
  printf("%u\n", &ptr); */

 // printf("%d\n", age);
 // printf("%d\n", *ptr);
 // printf("%d\n", *(&age));

  /* int x;
  int *ptr;

  ptr = &x;
  ptr = 0;/
  

 // printf("x= %d\n", x);   //  0
 // printf("*ptr= %d\n", *ptr);  //  0

 //*ptr = *ptr+5;
  //printf("x= %d\n", x);  //  5
 // printf("*ptr= %d\n", *ptr);  //  5

 /*  (*ptr)++;
  printf("x= %d\n", x);  //  6
  printf("*ptr= %d\n", *ptr);  //  6 */

  //int i = 5;
  //int *ptr = &i;
  //int **pptr = &ptr;

  //printf("**pptr= %d", **pptr);
 // return 0;
//}



// CALL BY VALUE

//squaring

/* #include<stdio.h>
void square(int n);
void _square(int *n);
int main()
{
  int number = 4;
  square(number);
  printf("number = %d\n", number);

  _square(&number);
  printf("number = %d\n", number);
  return 0;
}

//   CALL BY VALUE
void square(int n)
{
  n = n*n;
  printf("square is %d\n", n);
  return; 
}

// CALL BY REFERENCE
void _square(int *n)
{
  *n = (*n) * (*n);
  printf("square is %d\n", *n);
}
*/


// swap 2 numbers

/*#include<stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);
int main()
{
  int x = 3, y = 5;
  //swap(x,y);
  _swap(&x, &y);
  printf("x = %d & y = %d\n",x,y);
  return 0;
}*/
// call by value
/* void swap(int a, int b)
{
  int t = a;
  a = b;
  b = t;
  printf("a = %d & b = %d \n",a,b);
  return;
}*/

  // call by reference

  /* void _swap(int *a, int *b)
  {
    int t = *a;
    *a = *b;
    *b = t;
  }
*/


// sum prod avg call by reference

/* #include<stdio.h>
void dowork(int a, int b, int *sum, int *prod, int *avg);
int main()
{
  int a = 3, b = 5;
  int sum, prod, avg;
  dowork(a, b, &sum, &prod, &avg);
  printf("sum = %d\n prod = %d\n avg = %d\n", sum, prod, avg);

  return 0;
}
void dowork(int a, int b, int *sum, int *prod, int *avg)
{
   *sum = a+b;
   *prod = a*b;
   *avg = (a+b)/2;
  
}*/

////////////////    ARRAYS

//#include<stdio.h>
// int main()
// {
  /*int marks1 = 98;
  int marks2 = 97;
  int marks3 = 89;

  int marks[] = {98, 97, 89};*/

  /* int marks[3];
  printf("enter the phy marks");
  scanf("%d", &marks[0]);
  
  printf("enter the chem marks");
  scanf("%d", &marks[1]);
  
  printf("enter the math marks");
  scanf("%d", &marks[2]);

  printf("phy marks = %d\n, chem marks = %d\n, math marks = %d\n", marks[0], marks[1], marks[2]); */




  

  // price of 3 items and enter price with gst

    /*float price[3];
    printf("enter 3 prices");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf(" the price 1 is %f", price[0] +(0.18*price[0]));
    printf(" the price 2 is %f", price[1] +(0.18*price[1]));
    printf(" the price 3 is %f", price[2] +(0.18*price[2]));
*/


/* int age = 19;
  int _age = 20;
  int *ptr = &age;
  int *_ptr = &_age;

  printf(" %u %u difference = %u\n", ptr, _ptr , ptr-_ptr);
  _ptr = &age;
  printf("comparison = %u\n", ptr == _ptr);
  */



  // traverse an array

  /* int addhar[5];

  //input
  int *ptr = &addhar[5];
  for(int i = 0; i < 5; i++)
    {
      printf("%d index =", i);
      scanf("%d", &addhar[i]);
    }
   

  //output
  for(int i = 0; i<5; i++)
    {
      printf("%d index = %d\n", i, addhar[i]);
    }
  */


//////// multidimensional array

 /* int marks[2][3];
    marks[0][0] = 98;
    marks[0][1] = 89; 
    marks[0][2] = 100;

    marks[1][0] = 85;
    marks[1][1] = 88; 
    marks[1][2] = 92;

printf("%d", marks[0][1]);*/


  /////////////// coutn the number of odd numbers

  
  
 // return 0;
  
// counting the odd numbers

/* #include<stdio.h>

int countodd(int arr[], int n);

int main()
{
int arr[] = {1, 2, 3, 4, 5, 6, 7};
printf("%d", countodd(arr, 7));
  return 0;
}
int countodd(int arr[], int n)
{
  int count = 0;
  for(int i = 0; i<n; i++)
  {
   if(arr[i]%2 != 0)
   {
     count++;
   }
  }
     return count;
  
  }
 */

////////// REVERSE OF AN ARRAY

/* #include<stdio.h>
void reversearr(int arr[], int n);
void printarr(int arr[], int n);

int main()
{
int arr[] = {1,2,3,4,5};
  reversearr(arr, 5);
  printarr(arr, 5);

  return 0;
}

void printarr(int arr[], int n)
{
  for(int i = 0; i<n; i++)
    {
      printf("%d\t", arr[i]);
    }
  printf("\n");
}


  void reversearr(int arr[], int n)
{
  for(int i = 0; i <=n/2; i++)
    {
      int firstvalue = arr[i];
      int secondvalue = arr[n-i-1];
      arr[i] = secondvalue;
      arr[n-i-1] = firstvalue;
    }
}
 */ 

/* #include<stdio.h>
int main()
{
  int n;
  printf("enter the value of n>2");
  scanf("%d", &n);
  int fib[n];
  fib[0] = 0;
  fib[1] = 1;

  for(int i = 2; i < n; i++ )
    {
      fib[i] = fib[i-1] + fib[i-2];
      printf("%d \t", fib[i]);
    }
  printf("\n");
    return 0;
}*/


// table of 2 & 3

/* #include<stdio.h>
void storetable(int arr[][10], int n, int m, int number);
int main()
{
 int tables[2][10];
  storetable(tables, 0, 10, 2);
  storetable(tables, 1, 10, 3);

  for(int i = 0; i < 10; i++)
  {
    printf("%d\t", tables[0][i]);
  }
printf("\n");
  for(int i = 0; i < 10; i++)
  {
     printf("%d\t", tables[1][i]);
  }
  return 0;
}
void storetable(int arr[][10], int n, int m, int number)
{
  for(int i = 0; i < m; i++)
    arr[n][i] = number * (i+1);
      
}
  */







////////////////////////STRINGS

// printing name

/*#include<stdio.h>

void printstring(char arr[]);

int main()
{
  char firstname[] = "Utsab";
  char lastname[] = "Santra";

  printstring(firstname);
  printstring(lastname);
  
  return 0;
}
void printstring(char arr[])
{
  for(int i = 0; arr[i] != '\0' ; i++)
    {
      printf("%c", arr[i]);
    }
  printf("\n");
}
*/


// enter full name



// #include<stdio.h>
//int main()
//{
  /*char firstname[50];
  char lastname[50];
  printf("enter your full name : ");
  scanf("%s %s", firstname, lastname);
  printf("your name is %s %s", firstname, lastname);*/

 /* char str[100];
  fgets(str, 100, stdin);
  puts(str);*/

  ///////////  input users name anad print its length

/* #include<stdio.h>
int countlength(char arr[]);
int main()
{
char name[100];
  fgets(name, 100, stdin);
  printf("length is %d", countlength(name));


  return 0;
}

int countlength(char arr[])
{
  int count = 0;
  for(int i = 0; arr[i] != '\0';i++)  
    {
    count++;
    }
    

  return count - 1;
}*/ 


/* #include<stdio.h>
int main()
{
  int i;
  printf("enter the value to check the interval : ");
  scanf("%d", &i);
  if(i>4 && i<6)
  {
    printf("its in the interval");
    
  }
  else
  {
    printf("not in the interval");
  }
  return 0;
}
*/