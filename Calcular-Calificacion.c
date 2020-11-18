/* Jhovanny Daniel Beltran Lugo 303 */
#include <stdio.h>

int main() {

	float cali1, cali2, cali3, cali4,  promedio;
	
	printf ("Di tu promedio en Matematicas: ");
	scanf("%f",&cali1);
	
	printf ("Di tu promedio en Español: ");
	scanf("%f",&cali2);

	printf ("Di tu promedio en Ingles: ");
	scanf("%f",&cali3);
	
	printf ("Di tu promedio en Quimica: ");
	scanf("%f",&cali4);
	
	promedio = (cali1 + cali2 + cali3 + cali4) / 4;
	
	printf("Tu promedio es: %.2f",promedio);
	return 0;
}
