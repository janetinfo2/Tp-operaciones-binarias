#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "op_bin.h"
/*
void show_bin8(uint8_t value) 
{
    int CantBit = sizeof(value)*8;
    int j=0;
    for(int i=0;i<CantBit;i++)
    {
       printf("%d",(value>>CantBit-1-i)&1); // muestra desde msb a lsb
       j++;
       if(j==4)
       {
          printf(" ");
          j=0;
       }
    }
}
*/

void show_bin32(uint32_t value) 
{
    int CantBit = sizeof(value)*8;
    int j=0;
    for(int i=0;i<CantBit;i++)
    {
       printf("%d",(value>>CantBit-1-i)&1);
       j++;
       if(j==4)
       {
          printf(" ");
       }
       if(j==8 && i!= CantBit-1)
       {
        printf(" - ");
        j=0;
       }
       
    }
}
/*
uint32_t set_bit32(uint32_t data, uint8_t bit_pos, bool bit_value)
{
    uint32_t mask= 1 << bit_pos; //Se le asigna un 1 en bit_pos a la mascara, y los demas valores seran 0
    if(bit_pos > 32) //Si se ingresa una cantidad de posiciones de bits mayores a 32 se muestra error
    {
        printf("\nCantidad de posiciones excedidas\n");
        return 0;
    } else{
            if(bit_value) //Si bit_value es "true" se cambia el valor de data en bit_pos por un 1
                data = data | mask;
            else {//Si bit_value es "false" se cambia el valor de data en bit_pos por un 0
                mask = ~mask; //el valor de la mascara se cambia con un NOT ~
                data = data & mask;
            }
    return data;
    }
}

uint32_t toggle_bit32(uint32_t data, uint8_t bit_pos) 
{
    if(bit_pos >= 32)  // Verificar si la posición del bit es válida
    {
        printf("\nCantidad de posiciones excedidas\n");
        return 0; // Retornar 0 para indicar un error
    } 
    else 
    {
        uint32_t mask = 1 << bit_pos; // Crear una máscara con un 1 en la posición del bit deseado
        data = data ^ mask; // Operación XOR para invertir el bit en la posición bit_pos
        return data; // Retornar el valor modificado
    }
}

uint32_t carry_rotate32(uint32_t data, int N) {
    if (N == 0) 
    {
        return data;
    }

    if (N > 0) // Rotación a la izquierda
    { 
     for (int i = 0; i < N; i++) 
     {
        uint32_t bit_carry = (data >> 31) & 1; // Extraer el bit de acarreo del MSB
        data = (data << 1) | bit_carry; // Rotar y agregar el bit de acarreo
     }
    } 
    else // Rotación a la derecha
    { 
        N = -N; // Convertir N a positivo
        for (int i = 0; i < N; i++) 
        {
            uint32_t bit_carry = data & 1; // Extraer el bit de acarreo del LSB
            data = (data >> 1) | (bit_carry << 31); // Rotar y agregar el bit de acarreo
        }
    }

    return data;
}
*/
uint32_t extract_segment(uint32_t data, uint8_t startBit, uint8_t endBit) 
{
    if (startBit > endBit || startBit >= 32 || endBit >= 32) {
        printf("Rango de bits invalido\n");
        return 0;
    }
    uint8_t longi = endBit - startBit + 1; //longitud el segmento a extraer
    uint32_t mask = (1 << longi) - 1; //muevo el 1 longi veces y resto 1 para que todos los bits antes del 1 (Lsb) se conviertan en 1                          
    data = data >> startBit; //shifteo data hasta start que es donde quiero empezar a extraer
    uint32_t segment = data & mask; //segmento extraído      
    return segment;
}










    
    

