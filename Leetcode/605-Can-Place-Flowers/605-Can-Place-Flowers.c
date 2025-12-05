/*
====================
605. CanPlaceFlowers
Verifica se é possível plantar n flores no flowerbed sem quebrar a regra de adjacentes
====================
*/

bool canPlaceFlowers ( int* flowerbed, int flowerbedSize, int n ) {

	// percorre cada espaço do flowerbed enquanto ainda houver flores para plantar
    for ( int i = 0; i < flowerbedSize && n > 0; i++ ) {

		// verifica se é possível plantar na posição i
        if ( ( ( i == 0 && ( flowerbedSize == 1 || flowerbed[1] == 0 ) ) ||
            ( i == flowerbedSize-1 && flowerbed[flowerbedSize-2] == 0 ) ||
            ( i > 0 && i < flowerbedSize-1 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0 ) )
            && flowerbed[i] == 0 ) 
            {
                
                flowerbed[i] = 1; // planta a flor
                n--;   // decrementa somente se plantar
        }
    }
    // retorna true se todas as flores foram plantadas, false caso contrário
    return n == 0;
    
}
