#include <stdio.h>
#include <stdlib.h>

int Menu()
{
  for( int x = 0; x < 40; x++ )
    printf( "*" );

  printf( "\n\n1 => Adição \n" );
  printf( "2 => Subtração\n" );
  printf( "3 => Multiplicação\n" );
  printf( "4 => Divisão\n" );
  printf( "0 => Exit\n\n" );

  for( int i = 0; i < 40; i++ )
    printf( "*" );

  return 0;
}

int Somar()
{
  int Ope1, Ope2, Resultado;

  printf( ">> " );
  scanf( "%i",&Ope1 );
  printf( ">> " );
  scanf( "%i",&Ope2 );

  Resultado = Ope1 + Ope2;

  printf( "\n%i + %i = %i\n\n",Ope1, Ope2,Resultado );

}

int Subt()
{
  int Ope1, Ope2, Resultado;

  printf( ">> " );
  scanf( "%i",&Ope1 );
  printf( ">> " );
  scanf( "%i",&Ope2 );

  Resultado = Ope1 - Ope2;

  printf( "\n%i - %i = %i\n\n",Ope1,Ope2,Resultado );
}

float Mult()
{
  int Ope1, Ope2, Resultado;
  
  printf( ">> " );
  scanf( "%i",&Ope1 );
  printf( ">> " );
  scanf( "%i",&Ope2 );

  Resultado = Ope1 * Ope2;

  printf( "\n %i X %i = %.0f\n\n",Ope1,Ope2, (float)Resultado );
}

float Divsao()
{
  int Ope1, Ope2, Resultado;
  printf( ">> " );
  scanf( "%i",&Ope1 );
  printf( ">> " );
  scanf( "%i",&Ope2 );

  
  if( Resultado != 0 )
  {
    Resultado = Ope1 / Ope2;
    printf( "\n%i / %i = %.3f\n\n",Ope1,Ope2,(float)Resultado );
  }
  else
    printf( "\nDividir por 0 é problema\n\n" );
}

int main()
{

int Escolha;

Retorno:
  Menu();


  do {
    printf( "\n\nEscolha uma das operações\n" );
    printf( ">> " );
    scanf( "%i",&Escolha );

  } while( Escolha > 5);

   switch( Escolha )
   {
    case 0:
       printf( "Good Bye!" );
       exit( 1 );

    case 1:
       printf( "\nMande 2 Números para ser somados\n" );
       Somar();
       goto Retorno;
       break;

    case 2:
       printf( "\nMande 2 Números para ser Subtraidos\n" );
       Subt();
       goto Retorno;
       break;

    case 3:
       printf( "\nMande 2 Números para ser Multiplicados\n" );
       Mult();
       goto Retorno;
       break;

    case 4:
       printf( "\nMande 2 Números para ser dividido\n" );
       Divsao();
       goto Retorno;
       break;

    default:
       printf( "\nOpção Inválida\n" );
       goto Retorno;
   }


  return 0;
}
