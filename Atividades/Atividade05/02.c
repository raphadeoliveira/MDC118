#include <stdio.h>

int main ()
{
    int mat, func[7][2] = {
        {1111,30001000},
        {2222,30002000},
        {3333,30003000},
        {4444,30004000},
        {5555,30005000},
        {6666,30006000}, 
        {7777,30007000}
        };

    printf ("Digite uma matricula: ");
    scanf ("%d", &mat);

    for (int i = 0; i < 7; i++){
        if (mat == func[i][0]){
            printf ("Telefone: %d\n", func[i][1]);
        }
    }

return 0;
}