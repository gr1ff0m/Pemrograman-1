def decode_message(code, message):
    decoded_message = ""
    star_count = 0
    hash_count = 0

    for i in range(len(code)):
        if code[i] == message[i]:
            decoded_message += '*'
            star_count += 1
        else:
            decoded_message += '#'
            hash_count += 1

    result_message = "Rangkaian Karakter: " + decoded_message
    result_star_count = "Jumlah Bintang: " + str(star_count)
    result_hash_count = "Jumlah Pagar: " + str(hash_count)

    if star_count >= hash_count:
        result_status = "Pesan Asli"
    else:
        result_status = "Pesan Palsu"

    return result_message, result_star_count, result_hash_count, result_status


# Meminta input dari pengguna
code = input("Masukkan kode Shikamaru: ")
message = input("Masukkan pesan yang diterima: ")

# Memanggil fungsi dan menampilkan hasil
result_message, result_star_count, result_hash_count, result_status = decode_message(
    code, message)

print(result_message)
print(result_star_count)
print(result_hash_count)
print(result_status)
