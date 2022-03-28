 #include <stdio.h>
 #include<math.h>
 
 int addition(int a, int b)
{
 return (a+b); //returning  result to main funtion 
}
int division(int n1, int n2)
{
    
    return (n1/n2);
}

int factorial(int a)
{
    int i,fact=1;
 
   
    if (a<0) //checking for negative value
    {
        printf("\nPlease enter a positive number to");
        return 0;
                  //function termination
    } 
    // calculating factorial using for loop
    for(i=1;i<=a;i++)
    fact=fact*i;
   
    
    return fact; //return factocial value to main funtion 
}
int modulus(int a,int b)
{
    
   return (a%b);//returning madules value to main funtion 
    
}
int multiplication(int a,int b)
{
    return (a*b);    //returning  result to main funtion 
}
int power(int a, int b)
{
    int i=1;
     int p; //declaring p 
     while(i!=b){
          p *=a; //calculating power (a,b) and storing in 'p'
          return p; //returning power value to main funtion 
  

   
     }
}
int subtraction(int a, int b)
{ 
    return (a-b); //returning  result to main funtion 
} 

int main() {
  // variable declaration
  int choice; 
  int n1,n2, ans=0;
  do{
  printf("\nSelect the operation you want perform");
  printf("\n1.Additon\n 2.Subtraction\n 3.multplication \n 4.Division \n 5.Modulus\n 6.Power\n 7.Factorial \n 0.Exit \n ");
  scanf("%d", &choice);
  

// switch statement
 switch (choice) {

    case 1:
      printf("\nEnter two number");
      scanf("%d %d",&n1,&n2);
      
      ans = addition(n1,n2); //calling addition function
      
      printf("answer=%d",ans);
      break;
    case 2:
     printf("\nEnter two number");
      scanf("%d %d",&n1,&n2);
      ans=subtraction(n1,n2); //calling subtraction function
      printf("answer=%d",ans);
      break;
    case 3:
      printf("\nEnter two number");
      scanf("%d %d",&n1,&n2);
      ans = multiplication(n1,n2); //calling multiply function 
      printf("answer=%d",ans);
      break;
    case 4:
      printf("\nEnter two number");
      scanf("%d %d",&n1,&n2);
     ans = division(n1,n2);    //calling division function
     printf("answer=%d",ans);

      break;
    case 5: 
        printf("\nEnter two number");
        scanf("%d %d",&n1,&n2);
       ans= modulus(n1,n2);  // calling madules function
       printf("answer=%d",ans);
        break;  
    case 6: 
        printf("\nEnter two numbers to find the power \n");
        printf("number: ");
        scanf("%d",&n1);
 
        printf("power : ");
        scanf("%d",&n2);      // calling power function
       ans= power(n1,n2);
          printf("answer=%d",ans);
        break;  
    case 7: 
        printf("\nEnter a number to find factorial : ");
        scanf("%d",&n1);
        ans = factorial(n1); //calling  factorial function
        printf("answer=%d",ans);
        break;  
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }
  }while (choice!=0);
  

  return 0;
}


