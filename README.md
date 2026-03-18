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
Releases kısmından exe'yi indirin yada

Terminal veya komut satırını açın ve kodun bulunduğu dizinde şu komutu çalıştırın:
```bash
gcc Bn2ch.c -o converter
