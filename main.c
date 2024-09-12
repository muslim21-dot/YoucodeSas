#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int jour ;
    int mois ;
    int ans ;
} date;
typedef struct
{
    int Numero_unique;
    char nom[50];
    char prenom[50];
    date date_naissance;
    char departement[50];
    float notegenerale;
} etudiant;
//--------------------------------------------------------------------------------

etudiant Etudiant[100];
int total_Etudiant=0;
int id=1;
int i,j;
float moyenne;
int nbr_Etudiant;
float Somme;
int choix;


//---------------------------------------------------------------------------------
void Menu()
{

    do
    {

        printf("\n\n--------------------------Menu-------------------------\n");
        printf("1. Ajouter un audiant\n");
        printf("2. Modifier ou supprimer un etudiant|\n");
        printf("3. Afficher les détails d un etudiant\n ");
        printf("4. Calculer la moyenne generale\n");
        printf("5. Statistiques\n");
        printf("6. Rechercher un etudiant par\n");
        printf("7. Trier un etudiant par\n");
        printf("8. Quitter !\n");

        printf("\n\nveuillez entrez votr choix : ");
        scanf("%d",&choix);
        switch(choix)
        {
        case 1 :
            Ajouter();
            break;
        case 2 :
            Modifier_ou_supprimer();
            break;
        case 3 :
            Afficher();
            break;
        case 4 :
            Calculer_la_moyenne();
            break;
        case 5 :
            Statistiques();
            break;
        case 6 :
            Rechercher();
            break;




        }


    }
    while(choix!=8);
}
//--------------------------------kandkhol dyal lm3lomat dyal talib------------------------------------------------
void Ajouter()
{
    Etudiant[total_Etudiant].Numero_unique = id;
    printf("veuillez entrez le Nom : ");
    scanf("%s",&Etudiant[total_Etudiant].nom);

    printf("veuillez entrez le prenom : ");
    scanf("%s",&Etudiant[total_Etudiant].prenom);

    printf("veuillez entrez le jour de naissance : ");
    scanf("%d",&Etudiant[total_Etudiant].date_naissance.jour);

    printf("veuillez entrez le mois de naissance : ");
    scanf("%d",&Etudiant[total_Etudiant].date_naissance.mois);

    printf("veuillez entrez l ans de naissance :");
    scanf("%d",&Etudiant[total_Etudiant].date_naissance.ans);

    printf("veuillez entrez un departement : ");
    scanf("%s",&Etudiant[total_Etudiant].departement);

    printf("veuillez entrez la Note generale :");
    scanf("%f",&Etudiant[total_Etudiant].notegenerale);

    total_Etudiant++;
    id++;
}
//-----------------------------------------kandkhol dyal lm3lomat dyal tali-----------------------------------------------------

void Afficher()
{

     if(total_Etudiant==0){
        printf("impossible de saisir les informations aucune data saisir");
        return;
    }


    for(i=0; i<total_Etudiant; i++)
    {
        printf("le Numero unique est : %d\n",Etudiant[i].Numero_unique);
        printf("le Nom est : %s\n",Etudiant[i].nom);
        printf("le prenom est : %s\n",Etudiant[i].prenom);
        printf("le jour de naissance  est : %d\n",Etudiant[i].date_naissance.jour);
        printf("le mois de naissance est : %d\n",Etudiant[i].date_naissance.mois);
        printf("l ans de naissance est : %d\n",Etudiant[i].date_naissance.ans);
        printf("la departement est : %s\n",Etudiant[i].departement);
        printf("la Note generale est : %.2f\n\n",Etudiant[i].notegenerale);
        printf("===========================================================\n");
    }

}
//-------------------------------fonction tretmon dyal taghyir ----------------------------------------------------------
void Modifier(int Nouveau_numero_unique)
{

    char Nouveau_nom[50];
    char Nouveau_prenom[50];
    int Nouveau_jour;
    int Nouveau_mois;
    int Nouveau_ans;
    char Nouveau_departement[50];
    float Nouveau_notegenerale;


    for(i=0; i<total_Etudiant; i++)
    {
        if(Nouveau_numero_unique==Etudiant[i].Numero_unique)
        {
            printf("entrez un nouveau nom : ");
            scanf("%s",&Nouveau_nom);
            printf("entrez un nouveau prenom : ");
            scanf("%s",&Nouveau_prenom);
            printf("entre une nouvelle date d increment (jour) : ");
            scanf("%d",&Nouveau_jour);
            printf("entre une nouvelle date d increment (mois) : ");
            scanf("%d",&Nouveau_mois);
            printf("entre une nouvelle date d increment (ans) : ");
            scanf("%d",&Nouveau_ans);
            printf("entrez entrez une nouveau departement : ");
            scanf("%s",&Nouveau_departement);
            printf("entrez la nouveau note generale : ");
            scanf("%f",&Nouveau_notegenerale);
        }
        else
        {
            printf("rien !");
        }


        for(i=0; i<total_Etudiant; i++)
        {
            if(Nouveau_numero_unique==Etudiant[i].Numero_unique)
            {
                strcpy(Etudiant[i].nom,Nouveau_nom);
                strcpy(Etudiant[i].prenom,Nouveau_prenom);
                Etudiant[i].date_naissance.jour=Nouveau_jour;
                Etudiant[i].date_naissance.mois=Nouveau_mois;
                Etudiant[i].date_naissance.ans=Nouveau_ans;
                strcpy(Etudiant[i].departement,Nouveau_departement);
                Etudiant[i].notegenerale=Nouveau_notegenerale;
                printf("Modifie !\n");

                printf("\n\nle Nom est : %s\n",Etudiant[i].nom);
                printf("le prenom est : %s\n",Etudiant[i].prenom);
                printf("le jour de naissance est : %d\n",Etudiant[i].date_naissance.jour);
                printf("le mois de naissance est : %d|n",Etudiant[i].date_naissance.mois);
                printf("le ans de naissance est : %d\n",Etudiant[i].date_naissance.ans);
                printf("la departement est : %s\n",Etudiant[i].departement);
                printf("la Note generale est : %.2f\n",Etudiant[i].notegenerale);
            }
        }
    }
}

//-------------------------------fonction bach tmsah lm3lomat bohdha--------------------------------------

    void supprimer(int Nouveau_numero_unique)
    {
        char Nouveau_nom[50];
        char Nouveau_prenom[50];
        int Nouveau_jour;
        int Nouveau_mois;
        int Nouveau_ans;
        char Nouveau_departement[50];
        float Nouveau_notegenerale;


        for(i=0; i<total_Etudiant; i++)
        {
            if(Etudiant[i].Numero_unique==Nouveau_numero_unique)
            {
                for(j=i;j<total_Etudiant;j++){
                   Etudiant[j] = Etudiant[j+1];
                }
              /*  strcpy(Etudiant[i].nom,Etudiant[i+1].nom);
                strcpy(Etudiant[i].prenom,Etudiant[i+1].prenom);
                Etudiant[i].date_naissance.jour=Etudiant[i+1].date_naissance.jour;
                Etudiant[i].date_naissance.mois=Etudiant[i+1].date_naissance.mois;
                Etudiant[i].date_naissance.ans=Etudiant[i+1].date_naissance.ans;
                strcpy(Etudiant[i].departement,Etudiant[i+1].departement);
                Etudiant[i].notegenerale=Etudiant[i+1].notegenerale;*/
                total_Etudiant--;
                break;
            }
        }
        printf("\nil a ete supprime !\n");
    }

//-------------------------fonction katjm3hom bjoj bach tkhdm bihom hit lwlin ghir tretment------

    void Modifier_ou_supprimer()
    {
        if(total_Etudiant==0){
        printf("impossible de saisir les informations aucune data saisir");
        return;
    }
        int Nouveau_numero_unique;

        printf("entrez le Numero unique que tu recherches : ");
        scanf("%d",&Nouveau_numero_unique);

        printf("\npour supprimer entrez (1) et pour modifier entrez(0)  :");
        scanf("%d",&choix);
        if(choix==1)
          supprimer(Nouveau_numero_unique);
        else
          Modifier(Nouveau_numero_unique);
    }
//--------------------thsb lik lmoyeen ------------------------------------------

    void Calculer_la_moyenne()
    {

         if(total_Etudiant==0){
        printf("impossible de saisir les informations aucune data saisir");
        return;
    }
        nbr_Etudiant=0;
        char articl[100];
        printf("entrez la matiere dont vous souhaitez calculer la moyenne : ");
        scanf("%s",&articl);

        Somme=0;

        for(i=0; i<total_Etudiant; i++)
        {
            if(strcasecmp(Etudiant[i].departement,articl)==0)
            {
                Somme=Somme+Etudiant[i].notegenerale;
                nbr_Etudiant++;
            }
        }
        moyenne=Somme/nbr_Etudiant;
        printf("la moyenne de departement %s est %.2f \n",articl,moyenne);

//----------------------thsb lik lmoyeen dyal koolchi machi ghir li3ndhom nafs lmada-----------------------

        Somme=0;
        moyenne=0;
        for(i=0; i<total_Etudiant; i++)
        {
            Somme=Somme+Etudiant[i].notegenerale;
            moyenne=Somme/total_Etudiant;
        }
        printf("la moyenne general est %.2f \n",moyenne);
    }
//------------------------fiha lafichaj dyal chahal mn wahd fljami3a kaamla/chhal mn talib fkola mada---------


    void Statistiques(){

         if(total_Etudiant==0){
        printf("impossible de saisir les informations aucune data saisir");
        return;
    }
        char depR[50];
//-------------------nbr dyal Etud kaamlin--------------------------------------
        printf("le nombre total d etudiants inscrits est : %d\n",id-1);
//---------------------------nbr dyal etud kamlin li fdepar wahda-------------------
        printf("Entrer le nom de departement :");
        scanf("%s" ,depR);
        int nombre_dep =0;

        for(i=0;i<total_Etudiant;i++){
            if(strcasecmp(Etudiant[i].departement , depR)==0)
                nombre_dep++;

        }
         printf("le nombre d etudiants dans %s est : %d\n",depR,nombre_dep);

//------------------kandkhol ra9m wkanaffichi lar9am li kbr mn dak ra9m li dkhlti------------------




        int nbr_comparaison;
        printf("enterz le nomber que vous comparer : ");
        scanf("%d",&nbr_comparaison);
        for(i=0;i<total_Etudiant;i++){
            if(nbr_comparaison<Etudiant[i].notegenerale){
                printf("les nombre est : %.2f \n",Etudiant[i].notegenerale);

        }
        }
//---------------------3 dyal etud lwlin fclas-----------------------------
         etudiant tmp;
        for(i=0;i<total_Etudiant;i++){
            for(j=i+1;j<total_Etudiant;j++){

             if(Etudiant[i].notegenerale<Etudiant[j].notegenerale){
                    tmp.notegenerale = Etudiant[i].notegenerale;
                    Etudiant[i].notegenerale = Etudiant[j].notegenerale;
                    Etudiant[j].notegenerale = tmp.notegenerale;

            }
            }
        }
         for(i=0;i<3;i++){
              printf("\n\nle Nom est : %s\n",Etudiant[i].nom);
                printf("le prenom est : %s\n",Etudiant[i].prenom);
                printf("le jour de naissance est : %d\n",Etudiant[i].date_naissance.jour);
                printf("le mois de naissance est : %d\n",Etudiant[i].date_naissance.mois);
                printf("le ans de naissance est : %d\n",Etudiant[i].date_naissance.ans);
                printf("la departement est : %s\n",Etudiant[i].departement);
                printf("la Note generale est : %.2f\n",Etudiant[i].notegenerale);
        }

//--------------------------etud li 3ndhom ktr mn 10----------------------------------------------------

       int conteur=0;
       char departement_recherche[50];
             printf("veuillez entrez la departement que vous recherchez : ");
                    scanf("%s",&departement_recherche);
              for(i=0;i<total_Etudiant;i++){
                   if(strcasecmp(Etudiant[i].departement,departement_recherche)==0 && Etudiant[i].notegenerale > 10)
                      conteur++;
                }
                 if(conteur==0)
                    printf("Null !");
                 else
                    printf("le nombre d etudiants ayant reussi dans %s est : %d ",departement_recherche,conteur);

        }
//------------------------------------------------------------------------------------------------------

void Rechercher(){

         if(total_Etudiant==0){
        printf("impossible de saisir les informations aucune data saisir");
        return;
    }
//------------------------------------------------------------------------------------
         char nom_recherche[50];
         printf("veuillez entrez le nom que vous recherchez : ");
         scanf("%s",&nom_recherche);

         for(i=0;i<total_Etudiant;i++){
            if(strcasecmp(Etudiant[i].nom,nom_recherche)==0){

        printf("le Numero unique est : %d\n",Etudiant[i].Numero_unique);
        printf("le Nom est : %s\n",Etudiant[i].nom);
        printf("le prenom est : %s\n",Etudiant[i].prenom);
        printf("le jour de naissance  est : %d\n",Etudiant[i].date_naissance.jour);
        printf("le mois de naissance est : %d\n",Etudiant[i].date_naissance.mois);
        printf("l ans de naissance est : %d\n",Etudiant[i].date_naissance.ans);
        printf("la departement est : %s\n",Etudiant[i].departement);
        printf("la Note generale est : %.2f\n",Etudiant[i].notegenerale);

            }
         }
//-------------------------------------------------------------------------------------------------

        char departement_recherche[50];
        printf("veuillez entrez la departement que vous recherchez : ");
        scanf("%s",&departement_recherche);
        for(i=0;i<total_Etudiant;i++){
            if(strcasecmp(Etudiant[i].departement,departement_recherche)==0){

                printf("le Numero unique est : %d\n",Etudiant[i].Numero_unique);
                printf("le Nom est : %s\n",Etudiant[i].nom);
                printf("le prenom est : %s\n",Etudiant[i].prenom);
                printf("le jour de naissance  est : %d\n",Etudiant[i].date_naissance.jour);
                printf("le mois de naissance est : %d\n",Etudiant[i].date_naissance.mois);
                printf("l ans de naissance est : %d\n",Etudiant[i].date_naissance.ans);
                printf("la departement est : %s\n",Etudiant[i].departement);
                printf("la Note generale est : %.2f\n",Etudiant[i].notegenerale);
                printf("============================================\n\n");
            }
        }
    }
/*void Tri_nom(){
           etudiant tmp ;
           for(i=0;i<total_Etudiant;i++){
               for(j=i+1;j<total_Etudiant;j++){
                if(strcmp(Etudiant[i].nom,Etudiant[j].nom)>0){

                   tmp.nom = Etudiant[i].nom;
                   Etudiant[i].nom = Etudiant[j].nom;
                   Etudiant[j].nom = tmp.nom;
                }
               }
           }

*/
//--------------------------------------------------------------------------------------------------------
    int main()
    {
    strcpy(Etudiant[0].nom, "Dupont");
    strcpy(Etudiant[0].prenom, "Jean");
    Etudiant[0].date_naissance.jour = 12;
    Etudiant[0].date_naissance.mois = 5;
    Etudiant[0].date_naissance.ans = 2002;
    strcpy(Etudiant[0].departement, "Informatique");
    Etudiant[0].notegenerale = 15.5;
    Etudiant[0].Numero_unique= id++;
    total_Etudiant++;

     strcpy(Etudiant[1].nom, "Martin");
    strcpy(Etudiant[1].prenom, "Lucie");
    Etudiant[1].date_naissance.jour = 10;
    Etudiant[1].date_naissance.mois = 3;
    Etudiant[1].date_naissance.ans = 2000;
    strcpy(Etudiant[1].departement, "Informatique");
    Etudiant[1].notegenerale = 10.5;
    Etudiant[1].Numero_unique= id++;
    total_Etudiant++;

     strcpy(Etudiant[2].nom, "Ali");
    strcpy(Etudiant[2].prenom, "oubou");
    Etudiant[2].date_naissance.jour = 6;
    Etudiant[2].date_naissance.mois = 2;
    Etudiant[2].date_naissance.ans = 1997;
    strcpy(Etudiant[2].departement, "Physique");
    Etudiant[2].notegenerale = 15.5;
    Etudiant[2].Numero_unique= id++;
    total_Etudiant++;

     strcpy(Etudiant[3].nom, "Dupont");
    strcpy(Etudiant[3].prenom, "Pierre");
    Etudiant[3].date_naissance.jour = 1;
    Etudiant[3].date_naissance.mois = 10;
    Etudiant[3].date_naissance.ans = 2001;
    strcpy(Etudiant[3].departement, "Physique");
    Etudiant[3].notegenerale = 11.5;
    Etudiant[3].Numero_unique= id++;
    total_Etudiant++;

     strcpy(Etudiant[4].nom, "mouad");
    strcpy(Etudiant[4].prenom, "hadi");
    Etudiant[4].date_naissance.jour = 22;
    Etudiant[4].date_naissance.mois = 9;
    Etudiant[4].date_naissance.ans = 2002;
    strcpy(Etudiant[4].departement, "Anglais");
    Etudiant[4].notegenerale = 15.5;
    Etudiant[4].Numero_unique= id++;
    total_Etudiant++;

    Menu();

        return 0;
    }
