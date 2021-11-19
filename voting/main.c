#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct President{
    char name [20];
    int numVote ;

} President;

typedef struct voters{;
    char cin [10];
} voters;
 // Voting function
void Voting (voters voters[],President Ps[],int numPrs, int numVoters){
    int min,max;
    float critVote;
    bool out = false;
    President Round1[numPrs];
    int vote,i,j,totR1,totR2,totR3,voteEqual,y;
            // First round
        do{
            i = 0;
            totR1 = 0;
            printf ("\n\n");
            printf ("\n First round of elimination :");
            printf ("\n\n");

            do{

            printf("Voter Num %s choose a number for the president :", voters[i].cin);
            scanf(" %d", &vote);
                if (vote>0 && vote<= numPrs){
                    Ps[vote-1].numVote++;
                    i++;}
                    else{
                       printf(" ***Repeat you vote*** ");
                        }
            }while (i < numVoters);
            critVote = numVoters*0.15;
            for (j = 0; j < numPrs; j++){
                if(Ps[j].numVote >= critVote){
                    Round1[totR1] = Ps[j];
                    totR1++;
                }
            }
            printf("\t\n****** Here's the list of all the presidents nominated in the first Round ******\n");
            for (j = 0; j < totR1; j++){
                printf("\n *** %d. %s The number of votes is : %d ***", j+1, Round1[j].name, Round1[j].numVote);

                if(Round1[j].numVote==numVoters){
                    printf("\n\n");
                    printf("\n ****** The winning president with all the votes is : ******");
                    printf("\n\n");
                    printf("\n*** %d. The president is %s and the number of votes is : %d ***", j+1, Round1[j].name, Round1[j].numVote);
                    printf("\n\n\n**********Congratulations**********\n\n\n");
                    exit (0);
                }
            }
            voteEqual = Round1[0].numVote;
            for (y = 1; y < numPrs; y++){
                if(voteEqual != Ps[y].numVote){
                    out = true;
                    break;
                }
            }
            for (i = 0; i < totR1; i++){
                Round1 [i].numVote = 0;
            }
            // Reinitialisation of the table
            for (i = 0; i < numPrs; i++){
                Ps[j].numVote = 0;
            }
            }while (!out);


            // Second Round

            President Round2 [totR1];
            out = false;
            do{
                i = 0; totR2 = 0;
                printf("\n\n ");
                printf("\n Second Round of elimination :");
                printf("\n\n ");
                do{
                    printf("Voter Num %s choose a number for the president :", voters[i].cin);
                           scanf(" %d", &vote);
                           if (vote > 0 && vote <= totR1){
                            Round1[vote-1].numVote++;
                            i++;
                           }else{
                            printf(" ***Repeat you vote*** \n");
                           }

                }while (i < numVoters);
                min = Round1[0].numVote;
//////// The minimum number for round 2 ///////
            for (i = 1; i < totR1; i++){
                if (Round1[i].numVote < min){
                    min = Round1[i].numVote;
                }
            }

            voteEqual = Round1[0].numVote;
            for (y = 1; y < totR1; y++){
                if (voteEqual != Round1[y].numVote)
                out = true;
                break;
            }


            for (i = 0 ; i < totR1 ; i++){
                if(Round1[i].numVote > min) {
                    Round2[totR2] = Round1[i];
                    totR2++;
                }
            }
            printf("\t\n****** Here's the list of all the presidents nominated in the second Round ******\n");
            if(out == false){
                totR2 = totR1;
                for(i = 0; i < totR1; i++){
                Round2[i] = Round1[i];
            }
            }
            for(j = 0; j < totR2; j++){
                printf("\n\n *** %d. %s The number of votes is : %d ***", j+1, Round2[j].name, Round2[j].numVote);
            if(Round2[i].numVote == numVoters){
                    printf("\n\n");
                    printf("\n ****** The winning president with all the votes is : ******");
                    printf("\n\n");
                    printf("\n*** %d. The president is %s and the number of votes is : %d ***", j+1, Round2[j].name, Round2[j].numVote);
                    printf("\n\n**********Congratulations**********\n\n");
                    exit (0);
                }
            }
            for (i = 0; i < totR2; i++){
                Round2[i].numVote = 0;
            }
        // Reinitialisation of the table
            for (i = 0; i < totR1; i++){
                Round1[i].numVote = 0;
            }
        }while(!out);

        // Third round
        President Round3[totR2];
        out = false;
        do{

                i = 0;totR3 = 0;
                printf("\n\n ");
                printf("\n Third Round of elimination :");
                printf("\n\n ");
                do{
                    printf("Voter Num %s choose a number for the president :", voters[i].cin);
                    scanf(" %d", &vote);
                    if(vote > 0 && vote <= totR2){
                        Round2[vote-1].numVote++;
                        i++;
                    }else{
                        printf(" ***Repeat you vote*** ");
                    }
                }while (i < numVoters);
                max = Round2[0].numVote;
///////// The max number for the third round //////
                for(i = 1; i < totR2; i ++){
                    if(Round2[i].numVote > max){
                        max = Round2[i].numVote;
                    }
                }
                    voteEqual = Round2[0].numVote;
                    for(y = 1; y < totR2; y++){
                        if(voteEqual != Round2[y].numVote){
                            out = true;
                            break;
                        }
                    }
                    for (i = 0; i < totR2; i ++){
                        if (Round2[i].numVote == max){
                            Round3[totR3] = Round2[i];
                            totR3++;
                    }
                    }
                        if (out = false){
                            totR3 = totR2;
                            for (i = 0; i < totR2; i++){
                                Round3[i] = Round2[i];
                            }
                        }

                        if(totR3 > 1){
                            printf("\t\n****** Here's the list of all the presidents nominated in the third Round ******\n");
                            totR3 = totR2;
                        }

                        for (j = 0; j < totR3; j++){
                            if (totR3 == 1){
                                printf("\n\n");
                                printf("\n ******** The winning president is ********");
                                printf("\n\n");
                                printf("\n*** %d. The president is %s and the number of votes is : %d ***", j+1, Round3[j].name, Round3[j].numVote);
                                printf("\n\n**********Congratulations**********\n\n");
                                exit (0);
                            }else{

                            printf("\n*** %d. %s the number of votes is : %d ***", j+1, Round2[j].name, Round2[j].numVote);
                            }

                            if (Round2[j].numVote == numVoters){
                                printf("\n\n");
                                printf("\n ******** The winning president is ********");
                                printf("\n\n");
                                printf("\n*** %d. The president is %s and the number of votes is : %d ***", j+1, Round3[j].name, Round3[j].numVote);
                                printf("\n\n**********Congratulations**********\n\n");
                                exit (0);
                            }
                        }
                            for(i = 0; i < totR3; i++){
                                Round3[i].numVote = 0;
                            }
        // Reinitialisation of the table

                            for(i =0; i < totR2; i++){
                                Round2[i].numVote = 0;
                            }
                    }while(!out || totR3 > 1);

            }

void displayPresident(President Ps[], int x){
        int j;
        printf("||********** Here are the president candidates **********|\n");
        for(j = 0; j < x; j++){
        printf("\n||********** %d. %s ***********\n", j+1, Ps[j].name);
        } printf("\n\n\n");
 }
void startPresident(President Ps[], int x){
        int i;
        for (i = 0; i < x; i++){
            printf("\n Entre the name of the President number %d: ", i+1);
            scanf("%s", Ps[i].name);
        }
}
void startVoter (voters voters[], int x){
        int i;
        for (i = 0; i < x; i++){
        printf("\n Entre your CIN voter number %d: ", i+1);
        scanf("%s", voters[i].cin);
        }
}

int main()
{
    bool incP, incV;
    int numPrs, numVoters, choice, i;
    President *Ps;
    voters *voters;

    do{
        printf("\n ******** Welcome to the election !! ********\n");
        printf("\n 1. Registration of participants.\n");
        printf("\n 2. Registration of the ones voting.\n");
        printf("\n 3. Vote.\n");
        printf("\n 4. Quit.\n");
        printf("\n\n");
        printf("\n Choose :");
        scanf("%d", &choice);

        switch(choice){
        case 1 :
            do{
                printf("\n Give me the number of participants (5 minimum) :" );
                scanf("%d", &numPrs);
            } while (numPrs < 5);
            Ps = (President*)malloc(numPrs * sizeof(President));
            startPresident(Ps, numPrs);

            incP = true;
            break;

        case 2 :
            do{
                printf("\n Give me the number of voters (10 minimum) :" );
                scanf("%d", &numVoters);
            } while (numVoters < 10);
            voters = malloc(numVoters * sizeof(voters));
            startVoter (voters, numVoters);

            incV = true;
            break;


        case 3 :
            if(!incP){
                printf("\n You need to do the inscription for the participants !\n");
            }else if(!incV){
                printf("\n You need to do the inscription for the voters !\n");
            }else{
                displayPresident(Ps,numPrs);
                Voting(voters, Ps, numPrs, numVoters);
            }
                break;

                case 4 : exit(EXIT_SUCCESS);break;
                default : printf("\n Incorrect choice.");
                break;
        }
            }while(choice != 4);
    return 0;
}





















