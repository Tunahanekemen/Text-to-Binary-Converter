# Text-to-Binary Converter (C)

Bu proje, C dilinde bit düzeyinde işlemler (bitwise operations) kullanılarak yazılmış basit bir metin şifreleme ve çözme (encode/decode) aracıdır. Kullanıcıdan alınan metni ikili (binary) formata çevirip bir metin dosyasına kaydeder ve aynı dosyadan okuyarak tekrar orijinal metne dönüştürebilir.

Bu proje, C dilinde dosya okuma/yazma (File I/O) ve bit kaydırma (bit shifting) mantığını öğrenmek ve pekiştirmek amacıyla geliştirilmiştir.

## Özellikler

* **Metni İkili (Binary) Formata Çevirme (Encode):** Girilen metindeki her bir karakteri 8-bitlik binary dizisine dönüştürür ve `code.txt` dosyasına kaydeder.
* **İkili Formatı Metne Çevirme (Decode):** `code.txt` dosyasındaki 0 ve 1'lerden oluşan binary verisini okur ve orijinal karakterlere dönüştürerek ekrana yazdırır.
* **Basit Konsol Arayüzü:** Kullanıcı dostu, döngüsel bir terminal menüsü içerir.

## Nasıl Çalışır?

Proje temel olarak şu bitwise (bit düzeyinde) operatörleri kullanır:
* **Şifrelerken (Encode):** Karakterin bitlerini sağa kaydırıp (`>>`) 1 ile VE (`&`) işlemine sokarak her bir biti tek tek elde eder.
* **Çözerken (Decode):** Okunan bitleri sola kaydırıp (`<<`) VEYA (`|`) işlemi uygulayarak 8-bitlik (char) orijinal karakteri yeniden oluşturur.

## Kurulum ve Kullanım

### Gereksinimler
* C derleyicisi (GCC, Clang vb.)

### Derleme
Terminal veya komut satırını açın ve kodun bulunduğu dizinde şu komutu çalıştırın:```bash
# Text-to-Binary Converter (C)

This project is a simple text encoding and decoding tool written in the C language using bitwise operations. It converts text received from the user into binary format, saves it to a text file, and can read from the same file to convert it back to the original text.

This project was developed to learn and reinforce the concepts of file reading/writing (File I/O) and bit shifting in the C language.

## Features

* **Converting Text to Binary Format (Encode):** Converts each character in the input text into an 8-bit binary sequence and saves it to the `code.txt` file.
* **Converting Binary Format to Text (Decode):** Reads the binary data consisting of 0s and 1s from the `code.txt` file, converts it back to the original characters, and prints them to the screen.
* **Simple Console Interface:** Includes a user-friendly, looping terminal menu.

## How Does It Work?

The project primarily uses the following bitwise operators:
* **Encoding:** It shifts the character’s bits to the right (`>>`) and performs a bitwise AND (`&`) operation with 1 to extract each bit individually.
* **Decoding:** Reconstructs the original 8-bit (char) character by shifting the read bits to the left (`<<`) and applying a bitwise OR (`|`) operation.

## Installation and Usage

### Requirements
* A C compiler (GCC, Clang, etc.)

### Compilation
Open a terminal or command line and run the following command in the directory containing the code:
```bash
