/*
   ***********************************
  *                                   *
  *          Author: João Vitor       *
  *          Version: v1.0            *
  *          System: Gentoo           *
  *           Clock Basic             *
  *                                   *
   ***********************************
*/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define WEEK_DAY_ZERO "Dom"
#define WEEK_DAY_ONE "Seg"
#define WEEK_DAY_TWO "Ter"
#define WEEK_DAY_THREE "Qua"
#define WEEK_DAY_FOUR "Qui"
#define WEEK_DAY_FIVE "Sex"
#define WEEK_DAY_SIX "Sáb"

#define VERSION "1.0"

int Clock()
{
  struct tm *localTime;
  time_t rawTime;
  time( &rawTime );
  localTime = localtime( &rawTime );

  int min = localTime->tm_min;
  int sec = localTime->tm_sec;
  int hour = localTime->tm_hour;
  int day = localTime->tm_mday;
  int mouth = localTime->tm_mon +1;
  int week = localTime->tm_wday;
  int year = localTime->tm_year + 1900;


  if( week == 0 )
    printf( "%i:%i:%i\n%s. %i/%i/%i",hour,min,sec,WEEK_DAY_ZERO,day,mouth,year );

  else if( week == 1 )
    printf( "%i:%i:%i\n%s. %i/%i/%i",hour,min,sec,WEEK_DAY_ONE,day,mouth,year );

  else if( week == 2 )
    printf( "%i:%i:%i\n%s. %i/%i/%i",hour,min,sec,WEEK_DAY_TWO,day,mouth,year );

  else if( week == 3 )
    printf( "%i:%i:%i\n%s. %i/%i/%i",hour,min,sec,WEEK_DAY_THREE,day,mouth,year );

  else if( week == 4 )
    printf( "%i:%i:%i\n%s. %i/%i/%i",hour,min,sec,WEEK_DAY_FOUR,day,mouth,year );

  else if( week == 5 )
    printf( "%i:%i:%i\n%s. %i/%i/%i",hour,min,sec,WEEK_DAY_FIVE,day,mouth,year );

  else if( week == 6 )
    printf( "%i:%i:%i\n%s.%i/%i/%i",hour,min,sec,WEEK_DAY_SIX,day,mouth,year );

   return EXIT_SUCCESS;

}


int main( int argc, char *argv[] )
{

  if( argc > 2 )
  {
    printf( "Unfortunately, not many arguments are supported, please only use -v or --version" );
    exit(EXIT_FAILURE);
  }
  else if( argc < 2 ) 
  {
    Clock();
  }
  else if( 0 == strcmp( argv[ 1 ], "-v" ) || 0 == strcmp(argv[ 1 ], "--version") )
  {
    printf( "HourCliBasic: %s",VERSION );
    exit( EXIT_SUCCESS );
  }


  return 0;
}
