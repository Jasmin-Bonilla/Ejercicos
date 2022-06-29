# incluir  < iostream >

/* ejecuta este programa usando el pausador de la consola o agrega tu propio getch, sistema ("pausa") o bucle de entrada */

utilizando el espacio de  nombres  estándar ;

int  principal ( int argc, char ** argv) {
	
	int pares = 0 ;
	int compara = 0 ;
	entero total= 0 ;
	
	para ( int i = 1 ; i <= 10 ; i++)
	{
		si (yo % 2 == 0   ){
			pares = pares + i;
		}
		más
		   impares = i + impares;
    }
    
     total = pares + impares;
     
    cout << endl;
    cout << " Total pares: " << pares << endl;
    cout << " Total impares: " << impares << endl;
    cout << " Total de pares e Impares: " << total;

	devolver  0 ;
}
