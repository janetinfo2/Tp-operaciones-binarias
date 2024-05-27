#include <stdio.h>
#include <stdint.h>
#include "op_bin.h"



int main() 
{
    /*
    //punto 1
    uint8_t number = 120;
    show_bin8(number);

    //punto 2
    uint32_t number = 123456789;
    show_bin32(number);
    
    //punto 3
    uint32_t data = 123456789;
    printf("sin cambiar bit\n");
    show_bin32(data);
    printf("\n");
    int bit_pos = 4;
    int bit_value = 0;
    data = set_bit32(data , bit_pos , bit_value);
    printf("con bit cambiado\n");
    show_bin32(data);
  
    //punto 4
    uint32_t data = 123456789;
    printf("sin cambiar bit\n");
    show_bin32(data);
    printf("\n");
    int bit_pos = 4;
    data = toggle_bit32(data, bit_pos);
    printf("con bit cambiado\n");
    show_bin32(data);

    //punto 5
    uint32_t data = 123456789;
    printf("sin rotar\n");
    show_bin32(data);
    printf("\n");
    int N = 4;
    data = carry_rotate32(data , N);
    printf("rotado N veces\n");
    show_bin32(data);
    return 0;
*/
    //punto 6
    uint32_t data = 123456789;
    printf("data completo\n");
    show_bin32(data);
    printf("\n");
    uint8_t startBit = 2;
    uint8_t endBit = 5;
    uint32_t segment;
    segment = extract_segment(data, startBit, endBit);
    printf("segmento extraido\n");
    show_bin32(segment);
    return 0;
}


