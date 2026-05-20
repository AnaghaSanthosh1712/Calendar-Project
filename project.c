                                   //CALCULATOR IN C//

#include <stdio.h>
 //calculating the week of the day//
int dayofweek(int day,int monthnumber,int year)
{
 static int m[]={0,3,2,5,0,3,5,1,4,6,2,4};
 if(monthnumber<3){
      year=year-1;
  }
 
 return(year+year/4-year/100+year/400+m[monthnumber-1]+day)%7;

}

//Providing Month Name based on monthnumber//
char* monthname(int monthnumber){
    char*month;
    switch(monthnumber){
        case 0:
        month="JANUARY";
        break;

        case 1:
        month="FEBRUARY";
        break;

        case 2:
        month="MARCH";
        break;
        
        case 3:
        month="APRIL";
        break;

        case 4:
        month="MAY";
        break;

        case 5: 
        month="JUNE";
        break;

        case 6:
        month="JULY";
        break;

        case 7:
        month="AUGUST";
        break;

        case 8:
        month="SEPTEMBER";
        break;

        case 9:
        month="OCTOBER";
        break;

        case 10:
        month="NOVEMBER";
        break;

        case 11:
        month="DECEMBER";
        break;

        default:
        printf("Invalid ");
        break;

    }
    return month;
}

int No_days(int monthnumber,int year){
   if (monthnumber==0){                                   //JANUARY//
       return 31;
   }

   else if (monthnumber==1){                                      
         if(year%4==0 || year%400==0 && year%100!=0){    //FEBRUARY//  
            return 29;
        }
        else{
            return 28;
        }}
    else if (monthnumber==2){                           //MARCH//
       return 31;
   }
   else if (monthnumber==3){                           //APRIL//
       return 30;
   }
  else if (monthnumber==4){                           //MAY//
       return 31;
   }
   else if (monthnumber==5){                          //JUNE//
       return 30;
   }
   else if (monthnumber==6){                         //JULY//   
       return 31;
   }
   else if (monthnumber==7){                         //AUGUST//      
       return 31;
   }
   else if (monthnumber==8){                         //SEPTEMBER//
       return 30;
   }
   else if (monthnumber==9){                        //OCTOBER//
       return 31;
   }
   else if (monthnumber==10){                       //NOVEMBER//
       return 30;
   }
   else{                                            //DECEMBER//
      return 31;
   } }

void calendar(int year){
    int days,value,i,j,k;
   printf("CALENDAR-%d\n\n",year);
   value=dayofweek(1,1,year);

   for(i=0;i<12;i++){
    days=No_days(i,year);
    printf("--------------%s--------------\n",monthname(i));
    printf("  SUN  MON  TUE  WED  THU  FRI  SAT \n");
   for(k=0;k<value;k++){
     printf("     ");
   }
   for(j=1;j<=days;j++){
    printf("%5d",j);

    if(++k>6){
     k=0;
    printf("\n");
   }
   }

   
   if(k){
    printf("\n");
   }
   value=k;
 } }

void main(){
    int year;
    printf("Enter the year:- ");
    scanf("%d",&year);
    calendar(year);
}

