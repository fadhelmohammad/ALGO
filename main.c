//   nilai();
     if(jawab1 == 'b' || jawab1 == 'B'){
       poin1 = poin + 10;
     }else{
       poin1 = 0;
     }
     if(jawab2 == 'c' || jawab2 == 'C'){
       poin2 = poin + 10;
     }else{
       poin2 = 0;
     }
     if(jawab3 == 'b' || jawab3 == 'B'){
       poin3 = poin + 10;
     }else{
       poin3 = 0;
     }
     if(jawab4 == 'b' || jawab4 == 'B'){
       poin4 = poin + 10;
     }else{
       poin4 = 0;
     }
     if(jawab5 == 'a' || jawab5 == 'A'){
       poin5 = poin + 10;
     }else{
       poin5 = 0;
     }
       if(jawab6 == 'c' || jawab6 == 'C'){
       poin6 = poin + 10;
     }else{
       poin6 = 0;
     }
      if(jawab7 == 'a' || jawab7 == 'A'){
       poin7 = poin + 10;
     }else{
       poin7 = 0;
     }
      if(jawab8 == 'd' || jawab5 == 'D'){
       poin8 = poin + 10;
     }else{
       poin8 = 0;
     }
       if(jawab9 == 'a' || jawab9 == 'A'){
       poin9 = poin + 10;
     }else{
       poin9 = 0;
     }
       if(jawab10 == 'b' || jawab10 == 'B'){
       poin10 = poin + 10;
     }else{
       poin10 = 0;
     }
     total = poin1 + poin2 + poin3 + poin4 + poin5 + poin6 + poin7 + poin8 + poin9 + poin10;
     printf("\nWah Kamu Berhasil Mendapatkan Poin Sebanyak %d", total);
     printf("\n\n------------Kuis Telah Selesai--------------");
//   hadiah();
  if(total == 100){
       printf("\n\nSELAMAT! KAMU MEMBAWA PULANG UANG DENGAN NOMINAL Rp100.000.000,-\nDAN MOBIL, PAJAK DITANGGGUNG PEMENANG YAA :)");
     }
     else if(total >= 81 && total < 100){
       printf("\n\nLUAR BIASA! SELAMAT KAMU MEMBAWA PULANG UANG DENGAN NOMINAL Rp75.000.000,-\nPAJAK DITANGGUNG PEMENANG YAA :)");
     }
     else if(total >= 61 && total <= 80 ){
       printf("\n\nADUH SEDIKIT LAGI, TAPI SELAMAT KAMU JUGA MEMBAWA PULANG UANG DENGAN\nNOMINAL Rp45.000.000,-\nPAJAK DITANGGUNG PEMENANG YAA :)");
     }
     else if(total >= 41 && total <= 60 ){
       printf("\n\nJANGAN BERSEDIH, TETAP SEMANGAT YAA :). BTW, KAMU JUGA MENDAPATKAN UANG\nDENGAN NOMINAL Rp10.000.000,-\nPAJAK DITANGGUNG PEMENANG YAA :)");
     }
     else if(total >= 21 && total <= 40 ){
       printf("\n\nHUHU, KAMU SUDAH BERUSAHA KOK, JANGAN SEDIH YAA.. KAMU JUGA MENDAPATKAN UANG\nSEBESAR Rp2.500.000,- ,PAJAK DITANGGUNG PEMENANG YAA :)");
     }
     if(total <= 20){
       printf("\n\nYAHHH, KAMU KURANG BERUNTUNG :(\nMAAF YAA... SILAHKAN MENCOBA LAGI DI LAIN KESEMPATAN!");
     }
   //fungsi nilai untuk menghitung poin kuis

  return 0;
}
