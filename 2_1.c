#include <stdio.h>
#include <stdlib.h>//rND
#include <locale.h>
#include <time.h>

#define N 101

double GetDouble (void) {

	double input = 0.0;
	while (!scanf("%lf", &input)) {
		while(getchar() != '\n');
		printf("Ошибка ввода. Введите вещественное число\n");
	}
	while(getchar() != '\n');
	return input;
   }

enum MENU {start = 1, quit, manually = 1, random};

int main(void) {

setlocale(LC_ALL, "RU");        // десятичный разделитель запятая!
printf("Лекомцев Руслан Олегович студент 415А группы вас приветствует, коллеги!\nКонтрольная работа №2\nЗадача 2\n13 вариант\n");
int user_choice = 0; 

while (user_choice !=quit) {
		printf("Выберите пункт меню\n");
		printf("1 - Выполнить программу\n");
		printf("2 - Завершить работу\n");

		user_choice = GetDouble();

		if (user_choice != start && user_choice != quit) {
			puts("Некорректный ввод. Введите 1 или 2");
		   }

		if (user_choice == quit){
			return 0;
		   }

		else if (user_choice == start){

			puts("1 - Заполнить массивы вручную");
			puts("2 - Заполнить массивы случайными числами\n");

			user_choice = GetDouble();
			if (user_choice != start && user_choice != quit) {
				puts("Некорректный ввод. Введите 1 или 2");
		       }

			double array_x[N], array_y[N];

			if (user_choice == manually){
				 
				puts("Введите массив x");
				for(int i = 1; i <= N; i++) {
					printf("array_x[%d] = " , i);
					array_x[i] = GetDouble();
				   }

                puts("\nВведите массив y");
				for(int i = 1; i<=N;i++) {
					printf("array_y[%d] = " , i);
					array_y[i] = GetDouble(); 
				   } 
			   }

			
			

			else if (user_choice == random) {
				srand(time(0));
				printf("Введите желаемый диапазон случайных значений\n");
				int min, max;

				printf("От: ");
				min = GetDouble();
				printf("До: ");
				max = GetDouble();

				if (min > max) {
					int max_01 = max;                 //checkk
					max = min;
					min = max_01;
				   }

				
				for(int i = 0;i <= N;i++) {
					array_x[i] = rand()%(max-min+1)+min;
				   }

			    for (int i = 0;i <= N;i++) {
					array_y[i] = rand()%(max-min+1)+min;
					printf("x[%d]=%g y[%d]=%g \n",i, array_x[i],i,array_y[i]);
				   }
				
				
				
				}

		
			
              	
            puts("\nИзмененные массивы по условию задачи: ");

			for(int i=0; i<=N; i++) {

					if((array_x[i] < 0) && (array_y[i] < 0)){
							array_x[i]+=0.5;
							array_y[i]+=0.5;
						   }

					if((array_x[i]< 0) && (array_y[i] > 0)){
							array_x[i]*=array_x[i];
						   }

					if((array_x[i] > 0) && (array_y[i] < 0)){
							array_y[i]*=array_y[i];
						   }

					if((array_x[i] >= 0) && (array_y[i] >= 0)){
							array_x[i]=(array_y[i]+array_x[i])/2;
							array_y[i]=array_x[i];

						   }

					printf("array_x=%g array_y=%g \n",array_x[i],array_y[i]);
				   }




			
		}

	}
				
return 0;
	}

				
				
				/*
		


				}







			}




			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
		}



}


return 0;

}














/*

double array_x[N];
double array_y[N];
	double r=0.;

 			for(int i=0;i<101;i++){
					x[i]=rand()%20-10.;
				   }

			for(int i=0;i<101;i++){
					y[i]=rand()%20-10.;
					printf("x[%d]=%g y[%d]=%g \n",i, x[i],i,y[i]);
				   }

	puts("GRANICA");

			for(int i=0;i<101;i++){
					if((x[i]<0)&&(y[i]<0)){
							x[i]+=0.5;
							y[i]+=0.5;
						   }

					if((x[i]<0)||(y[i]>0)){
							x[i]*=x[i];
						   }

					if((x[i]>0)||(y[i]<0)){
							y[i]*=y[i];
						   }

					if((x[i]>0)||(y[i]>0)){
							x[i]=(y[i]+x[i])/2;
							y[i]=x[i];

						   }

					printf("x=%g y=%g \n",x[i],y[i]);
				}

  do {
    
    
    
	srand(Time(NULL));
	user_choice = GetDouble();//r=rand%20;

		if (user_choice == 1) {

 			for(int i=0;i<101;i++){
					x[i]=(rand%20)-10;
				}
			for(int i=0;i<101;i++){
					y[i]=(rand%20)-10;
				}



		}
   

   
 } while (user_choice != quit);
*/

