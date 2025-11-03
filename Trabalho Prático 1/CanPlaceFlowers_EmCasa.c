bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {

    //percorre cada espaço do flowerbed enquanto ainda houver oq plantar
    for (int i = 0; i < flowerbedSize && n > 0; i++) {

        // Verifica se é possível plantar na posição i:
        // - Primeira posição: array com 1 elemento ou próximo espaço vazio
        // - Última posição: espaço anterior vazio
        // - Posições internas: ambos os vizinhos vazios
        // Além disso, o próprio espaço deve estar vazio
        if (((i == 0 && (flowerbedSize == 1 || flowerbed[1] == 0)) ||
            (i == flowerbedSize-1 && flowerbed[flowerbedSize-2] == 0) ||
            (i > 0 && i < flowerbedSize-1 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0))
            && flowerbed[i] == 0) {
                
                flowerbed[i] = 1;//planta
                n--;  // decrementa apenas se plantar
        }
    }
    // Retorna true se todas as flores foram plantadas, false caso contrário
    return n == 0;
}