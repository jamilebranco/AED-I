bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {

    for (; n > 0; --n) {
        for (int i = 0; i < flowerbedSize; i++) {
            if (((i == 0 && flowerbed[1] == 0) ||
                 (i == flowerbedSize-1 && flowerbed[flowerbedSize-2] == 0) ||
                 (flowerbed[i-1] == 0 && flowerbed[i+1] == 0 && i > 0 && i < flowerbedSize-1)) && 
                 flowerbed[i] == 0) {
                    
                    flowerbed[i] = 1;
                    
                    if (n==0) {
                        return true;
                    }
                }
        }
    }
    return false;
}