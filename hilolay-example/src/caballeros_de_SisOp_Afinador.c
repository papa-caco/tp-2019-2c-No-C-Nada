#include <stdlib.h>
#include <stdio.h>
#include <hilolay/hilolay.h>
#include <unistd.h>

#define CANT_NOTAS 420

struct hilolay_sem_t* solo_hiper_mega_piola;
struct hilolay_sem_t* afinado;
int fin = 0;

void *preparar_solo()
{
	int i;
	for(i = 0;i<20;i++){
		sleep(1);
		hilolay_yield();
	}

	for(i = 0; i < CANT_NOTAS; i++)
	{
		hilolay_wait(solo_hiper_mega_piola);
		hilolay_signal(afinado);
		hilolay_signal(solo_hiper_mega_piola);
	}
	printf("\nPude afinar %d veces en el tiempo que tuve\n", i);
	return 0;
}

int main(void)
{
	struct hilolay_t afinador;

	hilolay_init();

	solo_hiper_mega_piola = hilolay_sem_open("solo_hiper_mega_piola");
	afinado = hilolay_sem_open("afinado");

	hilolay_create(&afinador, NULL, &preparar_solo, NULL);

	hilolay_join(&afinador);

	hilolay_sem_close(solo_hiper_mega_piola);
	hilolay_sem_close(afinado);


return hilolay_return(0);
}
