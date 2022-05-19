if (pilih > 2) {
      printf("\nMaaf, input anda tidak sesuai!\n");
      printf("Pilihan anda : ");
      scanf("%d", &pilih);
      getchar();
    }
    switch (pilih){
      case 1:
     printf("\t\t--- Aturan Main ---\n");
     printf("- Soal yang akan anda jawab ada 10 soal\n");
     printf("- Bobot per soal adalah 10, jika jawaban anda salah maka anda tidak mendapatkan poin dari soal tersebut\n");
     printf("- Jika anda mendapatkan 100 poin, maka anda akan mendapatkan hadiah uang sebesar Rp. 100.000.000 dan mobil\n");
     printf("- Jika anda mendapatkan 81 hingga 99 poin, maka anda mendapatkan hadiah uang sebesar Rp. 75.000.000\n");
     printf("- Jika anda mendapatkan 61 hingga 80 poin, maka anda mendapatkan hadiah uang sebesar Rp. 45.000.000\n");
     printf("- Jika anda mendapatkan 41 hingga 60 poin, maka anda mendapatkan hadiah uang sebesar Rp. 10.000.000\n");
     printf("- Jika anda mendapatkan 21 hingga 40 poin, maka anda mendapatkan hadiah uang sebesar Rp.  2.500.000\n");
     printf("- Jika anda mendapatkan 20 poin ke bawah, maka anda tidak mendapatkan hadiah apapun\n");
     printf("- Pajak hadiah yang anda dapatkan ditanggung masing-masing peserta\n");
     printf("\n\nApakah anda sudah siap untuk memulai?");
     printf("\nTekan Enter jika anda siap untuk mulai...");
     getch();
     
     printf("\n\n\t\tREADY");
     getch();
     printf("\n\n\t\t SET");
     getch();
     printf("\n\n\t\tGO!!!");
     getch();

     printf("\n\n------------Kuis Dimulai--------------\n\n");
     printf("\n\nSoal 1.\nRangka tersusun dari?\n");
     printf("a. Tulang dan daging\nb. Tulang dan otot\nc. Tulang dan kulit\nd. Tulang saja\n");
     printf("Input jawaban (huruf) : ");
     scanf(" %c",&jawab1);
     if(jawab1 == 'b'){
       printf("Hore! Jawaban Anda Benar! >.<\n");
     } else {
       printf("Ups, Jawaban Anda Kurang Tepat :(\n");
     }
       getch();

     printf("\nSoal 2.\nPadi di sawah pak Didi dimakan burung,");
     printf("lalu burung tersebut\nditangkap untuk menjadi makanan ular. Urutan ini disebut?\n");
     printf("a. Siklus Kehidupan\nb. Jaring Makanan\nc. Rantai Makanan\nd. Rantai Kehidupan\n");
     printf("Input jawaban (huruf) : ");
     scanf(" %c",&jawab2);
     if(jawab2 == 'c'){
       printf("Hore! Jawaban Anda Benar! >.<\n");
     } else {
       printf("Ups, Jawaban Anda Kurang Tepat :(\n");
     }
       getch();

     printf("\nSoal 3.\nHubungan antara benalu dan pohon mangga membentuk simbiosis?\n");
     printf("a. Mutualisme\nb. Parasitisme\nc. Komensalisme\nd. Netralisme\n");
     printf("Input jawaban (huruf) : ");
     scanf(" %c",&jawab3);
     if(jawab3 == 'b'){
       printf("Hore! Jawaban Anda Benar! >.<\n");
     } else {
       printf("Ups, Jawaban Anda Kurang Tepat :(\n");
     }
       getch();

     printf("\nSoal 4.\nBenda yang bentuknya berubah-ubah mengikuti wadah,tetapi\nvolumenya tetap disebut?\n");
     printf("a. Padat\nb. Cair\nc. Gas\nd. Semua benar\n");
     printf("Input jawaban (huruf) : ");
     scanf(" %c",&jawab4);
     if(jawab4 == 'b'){
       printf("Hore! Jawaban Anda Benar! >.<\n");
     } else {
       printf("Ups, Jawaban Anda Kurang Tepat :(\n");
     }
       getch();

    printf("\nSoal 5.\nTelur kupu-kupu menetas menjadi?\n");
    printf("a. Ulat\nb. Kepompong\nc. Berudu\nd. Pupa\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab5);
    if(jawab5 == 'a'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
       getch();
      
    printf("\nSoal 6.\nHewan yang memiliki metamorfosis sempurna adalah?\n");
    printf("a. Ular\nb. Kuda\nc. Kupu-kupu\nd. Kucing\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab6);
    if(jawab6 == 'c'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
       getch();
      
    printf("\nSoal 7.\nYang termasuk hewan omnivora adalah?\n");
    printf("a. Beruang\nb. Kupu-kupu\nc. Domba\nd. Sapi\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab7);
    if(jawab7 == 'a'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
       getch();
      
    printf("\nSoal 8.\n2 + 2 x 0?\n");
    printf("a. 0\nb. 4\nc. a dan d benar\nd. 2\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab8);
    if(jawab8 == 'd'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
      getch();
    printf("\nSoal 9.\nIbu Kota Sulawesi Tenggara?\n");
    printf("a. Kendari\nb. Banda Aceh\nc. Kupang\nd. Ambon\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab9);
    if(jawab9 == 'a'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
      getch();
      
    printf("\nSoal 10.\nTokoh di Attack on Titan?\n");
    printf("a. Upin\nb. Levi\nc. Nobita\nd. Saitama\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab10);
    if(jawab10 == 'b'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
        //   soal();
          break;
      default:
            exit(0);
    }
