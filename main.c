//   nilai();
     if(jawab1 == 'b' || jawab1 == 'B'){
       poin1 = poin + 5;
     }else{
       poin1 = 0;
     }
     if(jawab2 == 'c' || jawab2 == 'C'){
       poin2 = poin + 5;
     }else{
       poin2 = 0;
     }
     if(jawab3 == 'b' || jawab3 == 'B'){
       poin3 = poin + 5;
     }else{
       poin3 = 0;
     }
     if(jawab4 == 'b' || jawab4 == 'B'){
       poin4 = poin + 5;
     }else{
       poin4 = 0;
     }
     if(jawab5 == 'a' || jawab5 == 'A'){
       poin5 = poin + 5;
     }else{
       poin5 = 0;
     }
       if(jawab6 == 'c' || jawab6 == 'C'){
       poin6 = poin + 5;
     }else{
       poin6 = 0;
     }
      if(jawab7 == 'a' || jawab7 == 'A'){
       poin7 = poin + 5;
     }else{
       poin7 = 0;
     }
      if(jawab8 == 'd' || jawab8 == 'D'){
       poin8 = poin + 5;
     }else{
       poin8 = 0;
     }
       if(jawab9 == 'a' || jawab9 == 'A'){
       poin9 = poin + 5;
     }else{
       poin9 = 0;
     }
       if(jawab10 == 'b' || jawab10 == 'B'){
       poin10 = poin + 5;
     }else{
       poin10 = 0;
     }
     if(jawab11 == 'b' || jawab11 == 'B'){
       poin11 = poin + 5;
     }else{
       poin11 = 0;
     }
     if(jawab12 == 'c' || jawab12 == 'C'){
       poin12 = poin + 5;
     }else{
       poin12 = 0;
     }
     if(jawab13 == 'b' || jawab13 == 'B'){
       poin13 = poin + 5;
     }else{
       poin13 = 0;
     }
     if(jawab14 == 'b' || jawab14 == 'B'){
       poin14 = poin + 5;
     }else{
       poin14 = 0;
     }
     if(jawab15 == 'a' || jawab15 == 'A'){
       poin15 = poin + 5;
     }else{
       poin15 = 0;
     }
       if(jawab16 == 'c' || jawab16 == 'C'){
       poin16 = poin + 5;
     }else{
       poin16 = 0;
     }
      if(jawab17 == 'a' || jawab17 == 'A'){
       poin17 = poin + 5;
     }else{
       poin17 = 0;
     }
      if(jawab18 == 'd' || jawab18 == 'D'){
       poin18 = poin + 5;
     }else{
       poin18 = 0;
     }
       if(jawab19 == 'a' || jawab19 == 'A'){
       poin19 = poin + 5;
     }else{
       poin19 = 0;
     }
       if(jawab20 == 'b' || jawab20 == 'B'){
       poin20 = poin + 5;
     }else{
       poin20 = 0;
     }
     total = poin1 + poin2 + poin3 + poin4 + poin5 + poin6 + poin7 + poin8 + poin9 + poin10 + poin11 + poin12 + poin13 + poin14 + poin15 + poin16 + poin17 + poin18 + poin19 + poin20;
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
