#include <stdio.h>

char
line_simbolo( char simbolo )
{
  for( int i = 0; i <= 20 * 2; i++ )
    putchar( simbolo );

  putchar('\n');

  return simbolo;
}

int
somar( int op1, int op2, int res )
{
  res = op1 + op2;

  return res;
}

int
subtrair( int op1, int op2, int res )
{
  res = op1 - op2;

  return res;
}

int
multiplicar( int op1, int op2, int res )
{
  res = op1 * op2;

  return res;
}

int
divicao( int op1, int op2, int res )
{
  res = op1 / op2;

  return res;
}



int
loop_calc_main()
{
  int op1,op2, escolher, res;
  char tipo;

  do
  {
    line_simbolo( '#' );

    printf( "Bem vindo a calculadora basica!\n"    );
    
    line_simbolo( '#' );

    printf( "Coloque valores + tipo de operação\n" );
    printf( "Exemplo >> 2 + 1\n"                   );
    printf( ">> " );
    scanf( "%i %c %i",&op1, &tipo, &op2 );


    switch( tipo )
    {
      case '+':
      res = op1 + op2;
      somar(op1, op2, res);
      break;

    case '-':
      res = op1 - op2;
      subtrair(op1, op2, res);
      break;

    case '*':
      res = op1 * op2;
      multiplicar(op1, op2, res);
      break;

    case '/':
      res = op1 / op2;
      divicao(op1, op2, res);
    }

    printf(">> %i\n\n", res);

  } while( 1 );



  return 0;
}

int
main()
{
  loop_calc_main();
}
