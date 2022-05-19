#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main ()
{
 // deklarasi variabel soal

    int pilih,total;
    int poin = 0;
    int poin1, poin2, poin3, poin4, poin5, poin6, poin7, poin8, poin9, poin10, poin11, poin12, poin13, poin14, poin15, poin16, poin17, poin18, poin19, poin20;
    char jawab1, jawab2, jawab3, jawab4, jawab5, jawab6, jawab7, jawab8, jawab9, jawab10, jawab11, jawab12, jawab13, jawab14, jawab15, jawab16, jawab17, jawab18, jawab19, jawab20;


  //tampilan awal
  printf("\n\n================ !QUIZ BERHADIAH! ===============\n");
  printf("<3 AYO MENJAWAB KUIS---AGAR SEMAKIN PINTAR <3\n\n");

//   welcome();
    printf("1. Kuis\n");
    printf("2. Keluar\n");

    printf("Input Pilihan Anda : ");
    scanf("%d", &pilih);
    getchar();

    printf("\n\n------------Kuis Dimulai--------------\n\n");
    printf("\nSoal 1.\nSiapakah yang menjadi khalifah pertama setelah wafatnya Nabi Muhammad SAW?\n");
    printf("a. Umar bin Khattab\nb. Abu Bakar Ash-Shiddiq\nc. Ali bin Abi Thalib\nd. Ustman bin Affan\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab1);
    if(jawab1 == 'b'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
        getch();

    printf("\nSoal 2.\nSiapakah yang menjadi khalifah terakhir dan juga keponakan Nabi Muhammad SAW??\n");
    printf("a. Ustman bin Affan\nb. Abu Bakar Ash-Shiddiq\nc. Ali bin Abi Thalib\nd. Umar bin Khattab\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab2);
    if(jawab2 == 'c'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
        getch();

    printf("\nSoal 3.\nSiapakah khalifah yang paling lama pemerintahannya?\n");
    printf("a. Ali bin Abi Thalib\nb. Ustman bin Affan\nc. Umar bin Khattab\nd. Abu Bakar Ash-Shiddiq\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab3);
    if(jawab3 == 'b'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
        getch();

    printf("\nSoal 4.\nManakah berikut ini yang termasuk ke dalam kelompok hewan ovipar?\n");
    printf("a. Kucing\nb. Ayam\nc. Beruang\nd. Panda\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab4);
    if(jawab4 == 'b'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
        getch();

    printf("\nSoal 5.\nManakah berikut ini yang termasuk ke dalam kelompok hewan karnivora?\n");
    printf("a. Kucing\nb. Ayam\nc. Beruang\nd. Panda\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab5);
    if(jawab5 == 'a'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
        getch();

    printf("\nSoal 6.\nApakah nama ilmiah atau latin dari padi?\n");
    printf("a. Zea mays\nb. Felix domesticus\nc. Oryza sativa\nd. Rosa hybrida\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab6);
    if(jawab6 == 'c'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
        getch();

    printf("\nSoal 7.\nYang manakah salah satu contoh benda bersifat basa?\n");
    printf("a. Sabun\nb. Jeruk nipis\nc. Tomat\nd. Cuka\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab7);
    if(jawab7 == 'a'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
        getch();

    printf("\nSoal 8.\nApakah nama senyawa kimia untuk garam dapur?\n");
    printf("a. HCl\nb. KCl\nc. CO2\nd. NaCl\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab8);
    if(jawab8 == 'd'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
        getch();

    printf("\nSoal 9.\nYang manakah salah satu contoh dari singkatan?\n");
    printf("a. DPR\nb. Humas\nc. Timnas\nd. Tekkom\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab9);
    if(jawab9 == 'a'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
        getch();
        
    printf("\nSoal 10.\nYang manakah salah satu contoh dari akronim ?\n");
    printf("a. USK\nb. Porseni\nc. BEM\nd. UIN\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab10);
    if(jawab10 == 'b'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
         getch();

    printf("\n\nSoal 11.\nRangka tersusun dari?\n");
    printf("a. Tulang dan daging\nb. Tulang dan otot\nc. Tulang dan kulit\nd. Tulang saja\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab11);
    if(jawab11 == 'b'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
        getch();

    printf("\nSoal 12.\nPadi di sawah pak Didi dimakan burung,");
    printf("lalu burung tersebut\nditangkap untuk menjadi makanan ular. Urutan ini disebut?\n");
    printf("a. Siklus Kehidupan\nb. Jaring Makanan\nc. Rantai Makanan\nd. Rantai Kehidupan\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab12);
    if(jawab12 == 'c'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
        getch();

    printf("\nSoal 13.\nHubungan antara benalu dan pohon mangga membentuk simbiosis?\n");
    printf("a. Mutualisme\nb. Parasitisme\nc. Komensalisme\nd. Netralisme\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab13);
    if(jawab13 == 'b'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
        getch();

    printf("\nSoal 14.\nBenda yang bentuknya berubah-ubah mengikuti wadah,tetapi\nvolumenya tetap disebut?\n");
    printf("a. Padat\nb. Cair\nc. Gas\nd. Semua benar\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab14);
    if(jawab14 == 'b'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
       getch();

    printf("\nSoal 15.\nTelur kupu-kupu menetas menjadi?\n");
    printf("a. Ulat\nb. Kepompong\nc. Berudu\nd. Pupa\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab15);
    if(jawab15 == 'a'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
        getch();

    printf("\nSoal 16.\nHewan yang memiliki metamorfosis sempurna adalah?\n");
    printf("a. Ular\nb. Kuda\nc. Kupu-kupu\nd. Kucing\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab16);
    if(jawab16 == 'c'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
        getch();

    printf("\nSoal 17.\nYang termasuk hewan omnivora adalah?\n");
    printf("a. Beruang\nb. Kupu-kupu\nc. Domba\nd. Sapi\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab17);
    if(jawab17 == 'a'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
        getch();

    printf("\nSoal 18.\n2 + 2 x 0?\n");
    printf("a. 0\nb. 4\nc. a dan d benar\nd. 2\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab18);
    if(jawab18 == 'd'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
        getch();

    printf("\nSoal 19.\nIbu Kota Sulawesi Tenggara?\n");
    printf("a. Kendari\nb. Banda Aceh\nc. Kupang\nd. Ambon\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab19);
    if(jawab19 == 'a'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
        getch();

    printf("\nSoal 20.\nTokoh di Attack on Titan?\n");
    printf("a. Upin\nb. Levi\nc. Nobita\nd. Saitama\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab20);
    if(jawab20 == 'b'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }

    //   soal();
          break;
      default:
            exit(0);

    

