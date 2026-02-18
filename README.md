Libft - Sizin Yazacağınız İlk Kütüphane
📝 Proje Hakkında
Bu proje, 42 okulunun temel müfredatının ilk projesidir. Amacı, C dilindeki standart kütüphane (libc) fonksiyonlarını ve bazı ek yardımcı fonksiyonları sıfırdan yazarak kendi C kütüphanemizi oluşturmaktır. Bu kütüphane, ilerleyen süreçteki diğer C projelerinde temel bir araç kutusu olarak kullanılacaktır.

Proje kapsamındaki fonksiyonlar, bellek yönetimi, string manipülasyonu ve karakter kontrolü gibi temel işlemleri gerçekleştirmek üzere tasarlanmıştır.

🛠️ İçerik
1. Bölüm - Libc Fonksiyonları
Aşağıdaki standart fonksiyonlar, orijinal davranışlarına ve prototiplerine sadık kalınarak ft_ önekiyle yeniden yazılmıştır:

Karakter Kontrolü: ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint

String Manipülasyonu: ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr, ft_strdup

Bellek Yönetimi: ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc

Dönüştürme: ft_toupper, ft_tolower, ft_atoi

2. Bölüm - Ek Fonksiyonlar
Standart kütüphanede bulunmayan veya farklı işlevsellik sunan ek fonksiyonlar:

ft_substr: Bir stringden alt string (substring) oluşturur.

ft_strjoin: İki stringi birleştirerek yeni bir string oluşturur.

ft_strtrim: Bir stringin başındaki ve sonundaki belirli karakterleri temizler.

ft_split: Bir stringi belirli bir ayırıcı karaktere göre bölerek bir dizi oluşturur.

ft_itoa: Bir tam sayıyı (integer) stringe dönüştürür.

ft_strmapi & ft_striteri: Stringin her karakterine belirli bir fonksiyonu uygular.

ft_put..._fd: Belirli bir dosya tanımlayıcısına (file descriptor) karakter, string veya sayı yazdırır.

🚀 Kullanım
Derleme
Kütüphaneyi derlemek ve libft.a arşiv dosyasını oluşturmak için terminalde projenin kök dizinine gidin ve şu komutu çalıştırın:

Bash

make

Makefile Kuralları
Makefile aşağıdaki standart kuralları desteklemektedir:

make: Kaynak dosyaları derler ve libft.a dosyasını oluşturur.

make clean: Sadece obje dosyalarını (.o) temizler.

make fclean: Obje dosyalarını ve derlenen libft.a dosyasını temizler.

make re: Tüm dosyaları silip kütüphaneyi yeniden derler.

📌 Teknik Kısıtlamalar
Tüm dosyalar Norm kurallarına uygun olarak yazılmıştır.

Bellek sızıntıları (memory leaks) tamamen önlenmiştir; malloc ile ayrılan tüm alanlar gerektiğinde serbest bırakılır.

Derleme işlemi -Wall -Wextra -Werror flagleri ile gerçekleştirilir.