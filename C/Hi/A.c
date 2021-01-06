#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//Scenario 1 :la suppression .
void SuppAppCara(char x,char nomFich [50]){
    char C;
    FILE*F1;
F1 = fopen("teste1.txt","w");
 C = fgetc(nomFich);
while (!feof(nomFich))
{
     
   if (C != x)
   {
       fprintf(F1,"%c",C);
   }
    C = fgetc(nomFich);
}fclose(F1);
}
//scenario 2: minuscule---> majuscule.
void MintoMaj(char nomFich[50]){
    int C,L;
    FILE*F1;
F1 = fopen("teste2.txt","w");
 C = fgetc(nomFich);
while (!feof(nomFich))
{
     
   if (C <= 'z' && C >= 'a')
   {
       L = C - 32;
       fprintf(F1,"%c",L);
   }
   else 
   {
       /* code */ 
       fprintf(F1,"%c",C);
   }
    C = fgetc(nomFich);
}fclose(F1);
}
//scenario 3:majuscule--->minuscule.
void MajtoMin(char nomFich[50]){
int C,L;
FILE*F1;
F1 = fopen("teste5.txt","w");
 C = fgetc(nomFich);
while (!feof(nomFich))
{
     
   if (C <= 'Z' && C >= 'A')
   {
       L = C + 32;
       fprintf(F1,"%c",L);
   }
   else 
   {
       /* code */ 
       fprintf(F1,"%c",C);
   }
    C = fgetc(nomFich);
}fclose(F1);
}
//scenario 4: nombre de mot .
int ComptMot(char mot[50],char nomFich[50]){
char word[50];
int cpt=0;

while (!feof(nomFich))
{
fscanf(nomFich,"%s",word);
if(strcmp(word,mot)==0){
    cpt++;
}
}
return cpt;}



int main(int argc, char const *argv[])
{
    FILE*F;

    char nomF[50];
    printf("entrer le nom du fichier : ");
    gets(nomF);
F = fopen(nomF,"r");
if (F == NULL)
{
    printf("erreur");
    exit(4);
}
else
{  int choix;
   do
   {
      
   
        printf("\n-Taper 1 pour supprimer l'apparition d'un caractere .");
        printf("\n-Taper 2 pour convertir de minuscule a Majuscule .");
        printf("\n-Taper 3 pour convertir de Majuscule a minuscule .");
        printf("\n-Taper 4 pour compter le nombre d'occurence d'un mot .");
        printf("\n-Taper 0 pour sortir du programme .");
        printf("\nvotre choix :");
        scanf("%d",&choix);
    
switch (choix)
{
case 1:{
       char x;
      printf("    ->votre choix : 1\n\n");
      printf ("entrer le caractere supp :");
      scanf("%c",&x);
      SuppAppCara(x,F);
      printf("\n\n\t-->Le caractere %c est suppripmer avec succes",x);
    }
    break;

case 2:{
    printf("    ->votre choix : 2\n\n");
    MintoMaj(F);
    printf("\n\n\t-->le texte est convertir de minuscule a majuscule avec succes .");
}break;

case 3:{
    printf("    ->votre choix : 3\n\n");
    MajtoMin(F);
    printf("\n\n\t-->le texte est convertir de majuscule a minuscule avec succes .");
}break;
case 4:{
   char mot[50];
    printf("    ->votre choix : 4\n\n");
    printf("entrer le mot a rechercher :");
    scanf("%s",mot);
    printf("\n\n\tle nombre d occurrence du mot %s est %d:",mot,ComptMot(mot,F));

} break; 
   } }
   while (choix!=0);
   fclose(F);
}
printf("!! Fin du programme. Au revoire!!");
    return 0;
}