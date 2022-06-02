#include<stdio.h>
#include<conio.h>
int main()
{
    float Area,Memory_size,Weight,Length,Volume,Temperture,Corrency;
    char x,y;
    clrscr();
     printf("Select one of this to select press\n1 for Area\n2 for Memory size\n3 for Weight\n4 for Length\n5 for Volume\n6 for Corrency\n7 for Temperture\n");
    scanf("%s",&x);
    switch(x)
        {
        case'1':
        {
            printf("Enter area in Kilometer: ");
            scanf("%f",&Area);
            printf("Select to convert press \n1 for square mile\n2 for square millimeter\n3 for square centimeter\n4 for square inch\n");
            scanf("%s",&y);
            switch(y)
            {
                case'1':
                printf("In square Mile = %f",Area*0.386);
                break;
                case'2':
                    printf("In square Millimeter = %f",Area*1000000000000);
                break;
                case'3':
                printf("In square Centimeter = %f",Area*10000000000);
                break;
                case'4':
                printf("In square Inch = %f",Area*1550003100);
                break;
                default:printf("invalid choice");          
             }
            break;
        }
        case'2':
            {
            printf("Enter the Memory in gigabit: ");
            scanf("%f",&Memory_size);
            printf("Select to convert\n1 for Kilobit\n2 for Kilobyte\n3 for Megabit\n");
            scanf("%s",&y);
            switch(y)
            {
                case'1': 
                printf("In Kilobit = %f",Memory_size*1048576);
                break;
                case'2': 
                printf("In Kilobyte = %f",Memory_size*131072);
                break;
                case'3': 
                printf("In Megabit = %f",Memory_size*1024);
                break;
                default:printf("Invalid choice");        
            }
            break;
        }
        case'3':
        {
            printf("Enter the weight in Kilogram: ");
            scanf("%f",&Weight);
            printf("Select to convert press\n1 for Gram\n2 for Megagram\n3 for Milligram\n");
            scanf("%s",&y);
            switch(y)
            {
                case'1':
                printf("In Gram = %f",Weight*1000);
                break;
                   case'2':
                printf("In Megagram = %f",Weight*0.001);
                break;
                   case'3':
                printf("In Milligram = %f",Weight*1000000);
                break;
                default:printf("Invalid choice");
            }
            break;
        }
    case'4':
    {
        printf("Enter the Length in Kilometer: ");
        scanf("%f",&Length);
            printf("Select to convert press \n1 for mile\n2 for millimeter\n3 for centimeter\n4 for inch\n");
            scanf("%s",&y);
            switch(y)
            {
                case'1':
                printf("In Mile = %f",Length*0.386);
                break;
                case'2':
                    printf("In Millimeter = %f",Length*1000000000000);
                break;
                case'3':
                printf("In Centimeter = %f",Length*10000000000);
                break;
                case'4':
                printf("In Inch = %f",Length*1550003100);
                break;
                default:printf("invalid choice");          
             }
            break;
    }
      case'5':
    {
        printf("Enter the Volume in liter: ");
        scanf("%f",&Volume);
        printf("Select to convert press \n1 for Milli liter\n2 for Mega liter\n3 for Cubic meter\n4 for Cubic centimeter\n");
        scanf("%s",&y);
        switch(y) 
        {
                case'1':
                printf("In Milli liter = %f",Volume*1000);
                break;
                case'2':
                    printf("In Mega liter = %f",Volume*0.0000001);
                break;
                case'3':
                printf("In Cubic meter = %f",Volume*0.001);
                break;
                case'4':
                printf("In Cubic centimeter = %f",Volume*1000);
                break;
                default:printf("invalid choice");       
        } 
            break;
    }
    case'6':
    {
        printf("Enter the Corrency in rupes: ");
        scanf("%f",&Corrency);
        printf("Select to convert press \n1 for Malaysia\n2 for Taiwan\n3 for Indonesia\n4 for Chines\n5 for Singapore\n6 for Japan\n7 for South korea\n8 for Hong kong\n9 for America\n");
        scanf("%s",&y);
        switch(y)
        {
            case'1':
            printf("In Malaysia = %f",Corrency*0.057);
            break;
            case'2':
            printf("In Taiwan = %f",Corrency*0.432);
            break;
            case'3':
            printf("In Indonesia = %f",Corrency*198.095);
            break;
            case'4':
            printf("In Chines = %f",Corrency*0.095);
            break;
            case'5':
            printf("In Singapore = %f",Corrency*0.09);
            break;
            case'6':
            printf("In Japan = %f",Corrency*1.549);
            break;
            case'7':
            printf("In South korea = %f",Corrency*15.729);
            break; 
            case'8':
            printf("In Hong kong = %f",Corrency*0.110);
            break;
            case'9':
            printf("In America = %f",Corrency*0.01429);
            break;
            default:printf("invalid choice");
        }   
            break;   
    }
    case'7':
    {
        printf("Enter Temperture in Celsius: ");
        scanf("%f",&Temperture);
        printf("Select to convert\n1 for Fahrenheit\n2 for Kelvin\n3 for Newton\n");
        scanf("%s",&y);
        switch(y)
        {
            case'1':
            printf("In Fahrenheit = %f",Temperture*33.8);
            break;
            case'2':
            printf("In Kelvin = %f",Temperture*274.15);
            break;
            case'3':
            printf("In Newton = %f",Temperture*0.33);
            break;
            default:printf("invalid choice");
                }
            break;
            default:printf("invalid choice");
        }
    }
    return 0;
  }