<div align="center">
  <h1 style="text-align: center;font-weight: bold">Praktikum Minggu 2<br>Sistem Operasi</h1>
  <h4 style="text-align: center;">Dosen Pengampu : Dr. Ferry Astika Saputra, S.T., M.Sc.</h4>
</div>
<br/>
<div align="center">
  <img src="https://upload.wikimedia.org/wikipedia/id/4/44/Logo_PENS.png" alt="Logo PENS">
  <h3 style="text-align: center;">Disusun Oleh : <br>Kelompok 4</h3>
  <p style="text-align: center;">
    <strong>Muhammad Yafi Rifdah Zayyan (3123500001)</strong><br>
    <strong>Muhammad Daffa Erfiansyah (3123500006)</strong><br>
    <strong>Maula Shahihah Nur Sa'adah (3123500008)</strong>
  </p>

<h3 style="text-align: center;line-height: 1.5">Politeknik Elektronika Negeri Surabaya<br>Departemen Teknik Informatika Dan Komputer<br>Program Studi Teknik Informatika<br>2024/2025</h3>
  <hr><hr>
</div>

<div>
<h2 align="center">Perbaikan Minggu 1</h2>
<p> <b>Menjalankan bootstrap loader</b></p>
<p>Setelah pengecekan Power-On Self-Test (POST) adalah melakukan proses meload program ke dalam memori komputer yang bertanggung jawab untuk mengaktifkan proses selanjutnya dalam booting.</p>

<p><b>Inisialisasi Perangkat Keras</b></p>
<p>Komputer melakukan pengenalan terhadap perangkat keras yang tersambung untuk memastikan semua perangkat dapat beroperasi dengan baik.</p>

<h2 align="center">Contoh Gambar pada Proses Bootloader</h2>
<div align="center">

![App Screenshot](https://github.com/daffaerfiansyah/SysOp24-3123500006/blob/main/Minggu%202/Assets/bootloader.jpg?raw=true)

![App Screenshot](https://github.com/daffaerfiansyah/SysOp24-3123500006/blob/main/Minggu%202/Assets/07-bootorder.jpg?raw=true)
</div>
</div>
<br>
<div>
<h2 align="center">Perbedaan Legacy dan UEFI</h2>
<h3>Legacy Bios</h3>

<p><b>Legacy Bios</b> adalah proses boot yang digunakan oleh firmware BIOS. Legacy ini akan menyimpan daftar perangkat penyimpanan yang dapat di boot meliputi Floopy Disk Drives, Hard Disk Drives, Optical Disk Drives, dan sebagainya. Ketika Anda menyalakan komputer, BIOS akan melakukan Power On Self-Test (POST), kemudian sebuah speaker dari sistem internal mengeluarkan bunyi bip pendek sekali untuk menunjukkan bahwa booting berjalan normal. Bunyi bip ini membantu untuk mengidentifikasi kode dan dapat bertindak untuk memecahkan masalah lanjutan.

Setelah proses POST selesai, firmware akan memuat sektor pertama dari setiap target perangkat penyimpanan ke dalam memori. Firmware di sini juga memindai MBR (Master Boot Record) yang valid. Setelah ditemukan MBR yang valid, maka firmware akan melanjutkan eksekusi ke bootloader untuk pemilihan partisi tempat booting. Ketika salah satu bagian valid tidak ditemukan, firmware akan meneruskan ke perangkat berikutnya sesuai prioritas urutan yang dapat di boot.</p>

<h3>UEFI</h3>

<p>sedangkan <b>UEFI (Unified Extensible Firmware Interface)</b> adalah proses boot yang digunakan oleh firmware UEFI. Firmware UEFI akan menyimpan daftar volume boot yang valid atau disebut dengan Partisi Layanan EFI. Firmware UEFI merupakan penerus dari BIOS. UEFI menggunakan GUID Partition Table (GPT) sedangkan BIOS menggunakan skema partisi Master BOOT Record (MBR). Kedua format MBR dan GPT ini akan menentukan informasi partisi fisik pada Hard Disk.

Adapun saat prosedur POST (Power On Self-Test), firmware UEFI akan memindai semua perangkat penyimpanan yang dapat di boot dan terhubung ke sistem untuk menemukan GUID Partition Table (GPT) yang valid. Berbeda dengan MBR di Legacy, GPT di sini tidak berisi bootloader, firmware ini sendiri akan memeriksa GPT untuk menemukan Partisi Layanan EFI untuk boot.

Dengan mode boot UEFI, Anda dimungkinkan melakukan pengontrolan antarmuka menggunakan perangkat mouse, sedangkan di BIOS biasanya menggunakan keyboard untuk mengontrol opsi. UEFI termasuk mode boot yang modern dan dijamin aman, ini juga dapat mencegah perangkat lunak berbahaya.</p>
<br>
<h2 align="center">Perbedaan Spesifikasi Legacy dan UEFI</h2>

| <p align="center">Spesifikasi</p>   | <p align="center">Legacy</p>  | <p align="center">UEFI</p>  |
| ----------- | ---------- | --------- |
| Skema Pemeriksaan Partisi | Master Boot Record (MBR) | GUID Partition Table (GPT) |
| Proses Booting | Proses booting komputer menggunakan firmware BIOS. | Proses booting pada komputer modern yang menyediakan kemampuan lebih canggih daripada BIOS. |
| Jumlah maksimum partisi primer | 4 partisi | Tidak terbatas (tergantung pada sistem operasi; pada Windows dapat digunakan hingga 128 partisi). |
| Ukuran partisi maksimum | 2 terabyte (2.000 Gigabyte) | 18 exabyte (18 miliar Gigabyte) |
| Ukuran hard drive maksimum | 2 terabyte (2.000 Gigabyte) | 18 exabyte (18 miliar Gigabyte) |
| Keamanan | Sektor data tidak menggunakan checksum | Sektor data menggunakan checksum CRC32 dan tabel partisi GUID cadangan. |
| Keramahan Pengguna | Kurang ramah pengguna | UEFI lebih ramah pengguna daripada Legacy Boot. |
| Nama partisi | Tersimpan pada partisi | ID GUID unik disertai dengan nama 36 karakter. |
| Dukungan multi boot | Kurang mumpuni | Bagus, dengan entri boot loader dalam partisi terpisah. |
 
<br>
</div>

## Referensi

[Bootloader](https://bukuedu.id/pengertian-booting-adalah)

[Legacy dan UEFI](https://dianisa.com/perbedaan-legacy-bios-dan-uefi/#google_vignette)
