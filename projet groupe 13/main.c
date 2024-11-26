#include <stdio.h>
#include <stdlib.h>
#include "timer.c"

#include "tree.c"

int main() {
    t_map map;

    // The following preprocessor directive checks if the code is being compiled on a Windows system.
    // If either _WIN32 or _WIN64 is defined, it means we are on a Windows platform.
    // On Windows, file paths use backslashes (\), hence we use the appropriate file path for Windows.
//#if defined(_WIN32) || defined(_WIN64)
    map = createMapFromFile("maps\\example1.map");
//#else
//    map = createMapFromFile("../maps/example1.map");
//#endif
    startTimer();
    printf("Map created with dimensions %d x %d\n", map.y_max, map.x_max);
    for (int i = 0; i < map.y_max; i++)
    {
        for (int j = 0; j < map.x_max; j++)
        {
            printf("%d ", map.soils[i][j]);
        }
        printf("\n");
    }
    // printf the costs, aligned left 5 digits
    for (int i = 0; i < map.y_max; i++)
    {
        for (int j = 0; j < map.x_max; j++)
        {
            printf("%-5d ", map.costs[i][j]);
        }
        printf("\n");
    }
    displayMap(map);
    t_localisation marc = loc_init(3, 4, WEST);
    if(isValidLocalisation(marc.pos, map.x_max, map.y_max)){
        while (map.costs[marc.pos.x][marc.pos.y] != 0){
            int xi = 0;
            int proba_f_10 = 22, proba_f_20 = 37, proba_f_30 = 44, proba_b_10 = 51, proba_turn_l = 72, proba_turn_r = 93, proba_ut = 100;
            t_stack liste = createStack(5);
            while (xi <5){
                int n = rand() %(proba_ut +1);
                srand(time(NULL));
                if (n <= proba_f_10){
                    push(&liste, 1);
                    proba_f_10 -=1;
                    proba_f_20 -=1;
                    proba_f_30 -=1;
                    proba_b_10 -=1;
                    proba_turn_l -=1;
                    proba_turn_r -=1;
                    proba_ut -=1;
                }
                else{
                    if (n <= proba_f_20){
                        push(&liste, 2);
                        proba_f_20 -=1;
                        proba_f_30 -=1;
                        proba_b_10 -=1;
                        proba_turn_l -=1;
                        proba_turn_r -=1;
                        proba_ut -=1;
                    }
                    else{
                        if (n <= proba_f_30){
                            push(&liste, 3);
                            proba_f_30 -=1;
                            proba_b_10 -=1;
                            proba_turn_l -=1;
                            proba_turn_r -=1;
                            proba_ut -=1;
                        }
                        else{
                            if (n <= proba_b_10){
                                push(&liste, 4);
                                proba_b_10 -=1;
                                proba_turn_l -=1;
                                proba_turn_r -=1;
                                proba_ut -=1;
                            }
                            else{
                                if (n <= proba_turn_l){
                                    push(&liste, 5);
                                    proba_turn_l -=1;
                                    proba_turn_r -=1;
                                    proba_ut -=1;
                                }
                                else{
                                    if (n <= proba_turn_r){
                                        push(&liste, 6);
                                        proba_turn_r -=1;
                                        proba_ut -=1;
                                    }
                                    else{
                                        push(&liste, 7);
                                        proba_ut -=1;
                                    }
                                }
                            }
                        }
                    }
                }
                xi++;
            }
//        printf("la liste des commandes est : ");
            int n = 0;
//        while (n <= liste.size -1){
//            printf("%d", liste.values[n]);
//            n = n+1;
//        }
            printf("\n");
            t_tree arbre = createTreeFromStack(liste, marc, map);
//        displayTree(arbre.root);
            p_node min = findMin(arbre.root, map);
            printf("la valeur minimum atteignable est %d, aux coordonnees %d, %d\n", map.costs[min->x][min->y], min->x, min->y);
            marc = loc_init(min->x, min->y,min->ori);
        }
    }
    else{
        printf("this location is not valid");
    }
    stopTimer();

    displayTime();
    return 0;
}
