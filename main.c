/*circuit calculator*/
#include <stdio.h>
int main()
{
      int option;
      float p, i, v, r, t, w;

      /*asking the user which equation they would like to use*/
      do
      {
            printf("Please choose which equation you would like to use for your calculation (enter the number of your choice 1-4): \n");
            printf("Enter -1 in order to exit the menu loop.\n");
            printf("1. Calculate voltage (V = IR) \n2. Calculate current (I = V/R) \n3. Calculate power (P = IV) \n4. Calculate electrical work done (W = VIt)\n\n");
            scanf("%d", &option);
      
      /*executing the appropriate equation*/
      switch (option)
      {
      case 1:
            printf("\nI (A): ");
            scanf("%f", &i);
            printf("\nR (ohms): ");
            scanf("%f", &r);
            printf("\nV = %.2f (volts)\n\n", i * r);
            break;
      case 2:
            printf("\nV (volts): ");
            scanf("%f", &v);
            printf("\nR (ohms): ");
            scanf("%f", &r);
            if (r == 0)
            {
                  printf("\n\nThis is not an acceptable input. Numbers cannot be divided by 0.\n\n");
            }
            else
            {
                  printf("\nI = %.2f (A)\n\n", v / r);
            }
            break;
      case 3:
            printf("\nI (A): ");
            scanf("%f", &i);
            printf("\nV (volts): ");
            scanf("%f", &v);
            printf("\nP = %.2f (Watts)\n\n", i * v);
            break;
      case 4:
            printf("\nI (A): ");
            scanf("%f", &i);
            printf("\nV (volts): ");
            scanf("%f", &v);
            printf("\nt (s): ");
            scanf("%f", &t);
            printf("\nW = %.2f (J)\n\n", i * v * t);
            break;
      }
      } while (option != -1);

      getch();
      return 0;
}
