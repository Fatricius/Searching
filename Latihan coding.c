int main(void){
   int array[] = {1, 4, 7, 9, 16, 56, 70};
   int n = 7;
   int element = 5;
   int found_index = iterativeBinarySearch(array, 0, n-1, element);
   if(found_index == -1 ) {
      printf("Angka tersebut TIDAK DITEMUKAN ");
   }
   else {
      printf("Angka ditemukan pada lokasi/index : %d",found_index);
   }
   return 0;
}
