#include <stdio.h>
#include <stdlib.h>

int main () 
{

int isPlaying = 1;
 int history[100];
 int count = 0;
while(isPlaying == 1)
{

   printf("How many Floors Would you like to go to?");
   printf("The current floor is 1, The top floor is ENDLESS. Please insert the amount of floors you're willing to go!");
   int currentfloor= 0;
   int desiredfloor;
   int tempNumber;
   int output[100];
    //is how many floors you want to go. 
    scanf("%d", &desiredfloor);
//this is where you enter the floors you want to add
   for(int i = 0; i < desiredfloor; i++)
   {
        printf("Enter the floor you desire");
       scanf("\n%d", &output[i]);
       history[count] = output[i];
       count++;
   }

//showing you the floor you picked
   for(int i = 0; i < desiredfloor; i++)
   {
        printf("\nYou clicked: %d\n", output[i]);
   }
       
  
   //use tempnumber as a temporary varible for the for function to process and be able to have the ooutput organize the array.
    for(int i = 0; i < desiredfloor; i++)
    {
        for(int j = i + 1; j < desiredfloor; j++)
        {
            if(output[i] > output[j])
            {
                tempNumber = output[i];
                output[i] =  output[j];
                output[j] = tempNumber;
            }
        }
    }
//it grabs from the first output and then keeps looping from each of the floor that you picked and lets it get scanned when when its going up.
   for(int i = 0; i < desiredfloor; i++)
   {
       printf("\nNow in order, you clicked: %d\n", output[i]);
   }
        //this is the elevator going up by posting the floors that's going up and dings at a floor that was picked from before.
    for(int i = 0; i < desiredfloor; i++)
    {
          if(currentfloor < output[i])
          { //this is when their going up
            
            for(int j=currentfloor; currentfloor < output[i]; currentfloor++)
            {
                printf("number of floors: %d\n", currentfloor);
            } 
           printf("going up! to %d\n DING\n", output[i]);

          }
          //practice on making the elvator go down.
    /* else if(desiredfloor<currentfloor){//this is when their going down
        for(int i=currentfloor; currentfloor > desiredfloor; currentfloor--){
            printf("number of floors: %d\n", currentfloor);
        } 
        printf("going down to %d\n Ding\n", desiredfloor);
    }    */
  

      currentfloor=output[i]; 

    
  }
  //to print out the original input 
  printf("%d\n", count);
  for (int i = 0; i < count; i++)
{
    printf("number of floors: %d\n", history[i]);
}
}

//called only when they want to stop playing 
for (int i = 0; i < count; i++)
{
    printf("number of floors: %d\n", history[i]);
}

   return 0;
}
