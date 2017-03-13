#include<iostream.h>
int msin()
{
 char a[20], b[20], *ptr = a, *cptr = b;
 cin >> a;
 cin >> b;
 while(*ptr++ != '\0');
 ptr--;
 while(*cptr++ != '\0')
 {
               *ptr = *cptr;
               ptr++;
 }
 *ptr = '\0';
 cout << *ptr;
 
 system("pause");    
}
