# Program Bahasa G

# masukkan kata yang ingin di konversi
kata = input('Input Kalimat :')

# setelah di input maka kata yang tadi akan dikonversi menjadi bahasa G
g = kata.replace('a', 'aga').replace('i','igi').replace('u','ugu').replace('e','ege').replace('o','ogo')

# print bahasa G yang telah dikonversi tadi
print('Output Bahasa G :' + g)