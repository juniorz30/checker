#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int nummer;
    int herinneren[3] = {0, 0, 0}; // Voor de 3 mogelijkheden: positief, negatief, en 0
    int ingevoerde_nummers[100]; // Maximaal 100 nummers opslaan
    int teller = 0; // Aantal ingevoerde nummers bijhouden

    // Blijf vragen tot de gebruiker -999 invoert, anders doorgaan
    while (true)
    {
        nummer = get_int("Geef mij een nummer (bij -999 stopt het): ");

        if (nummer == -999)
        {
            break; // Stop de lus
        }

        // Sla het ingevoerde nummer op
        if (teller < 100)
        {
            ingevoerde_nummers[teller] = nummer;
            teller++;
        }

        if (nummer > 0)
        {
            herinneren[0]++; // Tel een positief nummer
        }
        else if (nummer < 0)
        {
            herinneren[1]++; // Tel een negatief nummer
        }
        else
        {
            herinneren[2]++; // Tel de nullen
        }
    }

    // Print de samenvatting
    printf("Samenvatting:\n");
    printf("Positieve nummers: %i\n", herinneren[0]);
    printf("Negatieve nummers: %i\n", herinneren[1]);
    printf("Nullen: %i\n", herinneren[2]);

    // Print alle ingevoerde nummers
    printf("Ingevoerde nummers:\n");
    for (int i = 0; i < teller; i++)
    {
        printf("%i ", ingevoerde_nummers[i]);
    }
    printf("\n");

    return 0; // Programma succesvol beëindigen
}
