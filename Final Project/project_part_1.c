#include <stdio.h>

#define MINUTE 60 
#define M_LITER 1000
#define SENTINEL 5

int get_problem(void);
void get_n_hours(double *);
void get_rate_drop_factor(double *, double *);
void get_kg_rate_conc(double *, double *, double *); 
void get_units_conc(double *, double *);
double fig_drops_min(double, double);
double fig_ml_hr(double);
double by_weight(double, double, double);
double by_units(double, double);

int 
main(void)
{
	int value;
	double answer; 
	double ml_hour; 
	double drops_ml; 
	double mg_kg_hour; 
	double pat_weight; 
	double mg_ml; 
	double units_hour; 
	double units_ml; 
	double num_hours;

value = get_problem();

while(value != SENTINEL) 
{ 
	switch(value) 
	{
	  case 1: get_rate_drop_factor(&ml_hour, &drops_ml);
              answer = fig_drops_min(ml_hour, drops_ml);
              printf("The drop rate per minute is %.0f.\n", answer);
              break;
              
      case 2: get_n_hours (&num_hours);
			  answer = fig_ml_hr(num_hours);
              printf("The rate in milliliters per hour is %.0f.\n", answer);
              break; 
                     
      case 3: get_kg_rate_conc(&mg_kg_hour, &pat_weight, &mg_ml);
			  answer = by_weight(mg_kg_hour, pat_weight, mg_ml);
              printf("The rate in milliliters per hour is %.0f.\n", answer);
              break;
              
      case 4: get_units_conc(&units_hour, &units_ml);
              answer = by_units(units_hour, units_ml);
              printf("The rate in milliliters per hour is %.0f.\n", answer);
              break;
              
      default: printf("Wrong input.\n");
     }
     value = get_problem();
	}
}

int get_problem(void)
{
   int menu_number;
   printf("\nEnter the number of the problem you wish to solve.\n\n");
   printf("GIVEN A MEDICAL ORDER IN\t\t\tCALCULATE RATE IN\n\n");
   printf("[1] ml/hr & tubing drop factor\t\t\tdrops/min\n");
   printf("[2] 1 L for n hr\t\t\t\tml/hr\n");
   printf("[3] mg/kg/hr & concentration in mg/ml\t\tml/hr\n");
   printf("[4] units/hr & concentration in units/ml\tml/hr\n");
   printf("[5] Quit\n\n");
   
   printf("Problem: ");
   scanf("%d", &menu_number);
   
   return menu_number;
}

void get_n_hours(double *num_hours)
{
	printf("Enter the number of hours for 1L: ");
    scanf("%lf", num_hours);
}

void get_rate_drop_factor(double *ml_hour, double *drops_ml) 
{
   printf("Enter the rate in ml/hr: ");
   scanf("%lf", ml_hour);
   printf("Enter the tubing's drop factor (drops/ml): ");
   scanf("%lf", drops_ml);
}

void get_kg_rate_conc(double *mg_kg_hour, double *pat_weight, double *mg_ml)
{
   printf("Enter the rate in mg/kg/hr: ");
   scanf("%lf", mg_kg_hour);
   printf("Enter the patient weight in kg: ");
   scanf("%lf", pat_weight);
   printf("Enter the concentration in mg/ml: ");
   scanf("%lf", mg_ml);
}

void get_units_conc(double *units_hour, double *units_ml)
{
   printf("Enter the rate in units/hr: ");
   scanf("%lf", units_hour);
   printf("Enter the concentration in units/ml: ");
   scanf("%lf", units_ml);
}

double fig_drops_min(double ml_hour, double drops_ml) 
{
   return ml_hour * drops_ml / (double)MINUTE;
}

double fig_ml_hr(double num_hours)
{
   return M_LITER / num_hours;
}

double by_weight(double mg_kg_hr, double pat_weight, double mg_ml)
{
   return mg_kg_hr * pat_weight / mg_ml;
}

double by_units(double units_hour, double units_ml)
{
   return units_hour / units_ml;
}
