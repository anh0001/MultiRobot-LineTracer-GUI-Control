![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.001.png) ![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.002.png)

Mechatronics System Design Journal. ![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.003.png)

A Technician’s Journal is a short and concise summary of the team’s journey from the initial task analysis through the final design solution. 

The documentation should include enough detail for another person to look at your notebook and be able to build your system, or to at least follow the steps your team took to get to your final design solution. 

[LINE FOLLOWER AND OBSTACLE AVOIDING] 

Team Information 

Abstract 

Robot line tracer merupakan jenis robot yang dirancang khusus untuk mengikuti garis yang telah ditentukan sebelumnya. Robot yang dilengkapi dengan sensor yang mampu mendeteksi garis, seperti sensor cahaya atau sensor infra-merah, yang digunakan untuk mengontrol gerakan roda agar tetap berada di atas garis tersebut. Melalui pemahaman dan implementasi robot line tracer, para pembuat dapat  memperoleh  wawasan  mendalam  tentang  penggunaan  sensor  dalam mengendalikan gerakan robot dan memecahkan masalah navigasi sederhana, seperti mengikuti jalur yang telah ditentukan sebelumnya.

Ramadhan Tegar Imansyah 

[ramadhantegar.i@gmail.com]  Muhammad Irfan Habib 

[muh.irfanh473@gmail.com] 

![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.004.png)

Table of Contents 

[1 Introduction and Initial Analysis ................................................................................................................ 3 ](#_page3_x69.00_y72.00)

1. [Project Context ............................................................................................................................. 3 ](#_page3_x69.00_y94.00)
1. [Initial Thought Process ........................................................................................................................ 3 ](#_page3_x69.00_y443.00)

[2 Requirement Analysis and Specification .................................................................................................... 4 ](#_page4_x69.00_y95.00)

1. [User Requirements ............................................................................................................................. 4 ](#_page4_x69.00_y120.00)
1. [System Requirements ......................................................................................................................... 4 ](#_page4_x69.00_y479.00)
1. [Tools and Technologies ....................................................................................................................... 4 ](#_page4_x202.00_y479.00)
1. [Target specification ............................................................................................................................. 6 ](#_page6_x69.00_y72.00)

[3 Conceptual Design ..................................................................................................................................... 6 ](#_page6_x69.00_y348.00)

1. [System Architecture ............................................................................................................................ 6 ](#_page6_x69.00_y381.00)
1. [Interface Design .................................................................................................................................. 7 ](#_page7_x69.00_y130.00)
1. [Control Algorithm Design .................................................................................................................. 10 ](#_page10_x69.00_y72.00)

[4 Detailed Design and Development .......................................................................................................... 11 ](#_page11_x69.00_y72.00)

1. [Component Design............................................................................................................................ 11 ](#_page11_x69.00_y94.00)
1. [Coding and Implementation ............................................................................................................. 13 ](#_page13_x69.00_y149.00)
1. [Integration ........................................................................................................................................ 17 ](#_page17_x69.00_y385.00)
4. [Unique Features ................................................................................................................................ 18 ](#_page18_x69.00_y72.00)

[5 Testing, Evaluation, and Optimization ..................................................................................................... 18 ](#_page18_x69.00_y90.00)

1. [Testing Strategy ................................................................................................................................ 18 ](#_page18_x69.00_y274.00)
1. [Performance Evaluation.................................................................................................................... 18 ](#_page18_x69.00_y325.00)
1. [Optimization ..................................................................................................................................... 18 ](#_page18_x69.00_y345.00)

[6 Collaboration and Project Management.................................................................................................. 19 ](#_page19_x69.00_y72.00)

1. [Teamwork Dynamics ......................................................................................................................... 19 ](#_page19_x69.00_y94.00)
1. [Project Management ........................................................................................................................ 19 ](#_page19_x69.00_y193.00)

[7 Conclusion and Reflection........................................................................................................................ 19 ](#_page19_x69.00_y386.00)

1. [Project Summary ............................................................................................................................... 19 ](#_page19_x69.00_y412.00)
1. [Future Work ...................................................................................................................................... 19 ](#_page19_x69.00_y431.00)
1. [Personal and Group Reflections........................................................................................................ 20 ](#_page20_x69.00_y166.00)

[8 Appendices ............................................................................................................................................... 21 ](#_page21_x69.00_y200.00)

1. [Bill of Materials ................................................................................................................................. 21 ](#_page21_x69.00_y226.00)
1. [Electrical Wiring and System Layout ................................................................................................. 22 ](#_page22_x69.00_y292.00)
3. [Code Repository ................................................................................................................................ 24 ](#_page24_x69.00_y72.00)
3. [Additional Documentation................................................................................................................ 24 ](#_page24_x69.00_y90.00)

[9 References ............................................................................................................................................... 24 ](#_page24_x75.00_y128.00)

<a name="_page3_x69.00_y72.00"></a>1 Introduction and Initial Analysis 

1. Project<a name="_page3_x69.00_y94.00"></a> Context 

Sistem mekatronika telah menjadi bagian dari berbagai aplikasi otomasi dan kendali dalam berbagai industri. Dalam konteks pengembangan robot, peningkatan kompleksitas dan fungsi dari  sistem  mekatronika  mengharuskan  integrasi  antarmuka  pengguna  yang  intuitif  dan efektif. Salah satu tugas penting dalam pengembangan robot adalah mengatur dan memantau pergerakan dengan akurasi tinggi, seperti pada robot line follower dan obstacle avoiding. 

Robot  line  follower  bertujuan  untuk  mengikuti  lintasan  atau  jalur  tertentu  dengan memanfaatkan sensor dan kendali yang terintegrasi. Sementara itu, robot obstacle avoiding dirancang untuk menghindari rintangan dan mengubah jalur secara otomatis untuk mencegah tabrakan. 

Pengembangan tampilan GUI (Graphical User Interface) memberikan kemampuan untuk memvisualisasikan dan mengontrol robot dengan cara yang lebih intuitif dan efisien bagi pengguna akhir. Dengan GUI yang tepat, pengguna dapat memonitor status robot, mengubah parameter operasi, dan memantau hasil sensor dengan mudah. 

Dalam proyek bertujuan untuk mengintegrasikan sistem mekatronika dengan antarmuka pengguna berbasis GUI untuk meningkatkan fungsionalitas, keterbacaan, dan kontrol dari robot line follower dan obstacle avoiding. Dengan demikian, proyek ini diharapkan dapat membantu  memajukan  penggunaan  sistem  mekatronika  dalam  berbagai  aplikasi  praktis. dengan menggunakan sistem yang berbasis GUI ini, pengguna tidak perlu lagi merubah hardware saat melakukan pengembangan, pengguna hanya perlu melakukan upgrade pada software GUI. 

2. Initial<a name="_page3_x69.00_y443.00"></a> Thought Process 

   Pada proses awal kami melakukan pencarian data terkait fungsi kerja tiap komponen pada Multi-Line follower dengan melakukan pengecekan komponen apa saja yang ada pada robot tersebut, kemudian melakukan peninjauan terkait dengan skematik robot yang bertujuan untuk mengetahui pengkabelan sistem robot. Membuat dan melakukan trial dan error untuk program kerja robot sesuai dengan fitur yang diingikan. Merancang tampilan GUI sesuai dengan fitur yang diinginkan dimana bertujuan untuk indikator tampilan. 

- Robot dilengkapi dengan sensor ultrasonic sebagai pendeteksi jarak antara robot dan lingkungan sekitar robot sehingga dapat menghindari obstacle  
- Robot juga dilengkapi dengan sensor IMU untuk navigasi pergerakan dari robot  
- Pada GUI ditampilkan berbagai fitur seperti connect, monitoring, drive, dan kalibrasi  

<a name="_page4_x69.00_y95.00"></a>2 Requirement Analysis and Specification 

1. User<a name="_page4_x69.00_y120.00"></a> Requirements 

Graphical User Interface (GUI) atau Antarmuka Pengguna Grafis merujuk pada suatu bentuk antarmuka pengguna yang memungkinkan interaksi antara pengguna dan perangkat lunak atau sistem menggunakan elemen-elemen grafis seperti ikon, tombol, jendela, dan menu. GUI dirancang untuk membuat pengguna dapat berinteraksi dengan perangkat lunak atau sistem dengan lebih mudah dan intuitif, tanpa perlu mengingat perintah-perintah teks atau sintaks khusus. GUI menggunakan metode interaksi pada peranti elektronik secara grafis (bukan perintah teks) antara pengguna dan komputer. 

Sistem kontrol merujuk pada proses yang digunakan untuk mengelola, mengatur, dan mengawasi  berbagai  jenis  aktivitas  dalam  berbagai  konteks.  Sistem  kontrol  multi  line follower merujuk pada teknologi yang digunakan dalam robotika untuk mengontrol gerakan sebuah robot agar dapat mengikuti atau mengikuti lintasan multi-garis yang telah ditentukan sebelumnya. Sistem ini umumnya menggunakan sensor-sensor yang terpasang pada robot untuk mendeteksi lintasan atau jalur yang harus diikuti. Sensor-sensor ini dapat berupa sensor  inframerah,  sensor  ultrasonik,  sensor  garis,  atau  sensor  lainnya  yang  dapat mendeteksi perubahan warna atau pola tertentu di lintasan. 

Sistem  kontrol  multi  line  follower  dengan  GUI  (Graphical  User  Interface)  dapat memberikan antarmuka yang lebih intuitif dan mudah digunakan untuk mengontrol robot yang mengikuti lintasan multi-garis. GUI memungkinkan untuk berinteraksi dengan robot, memberikan perintah, dan memantau pergerakan robot secara visual melalui antarmuka grafis. 

2. System<a name="_page4_x69.00_y479.00"></a> Requirements<a name="_page4_x202.00_y479.00"></a> 

Dalam pembuatan sistem multi line tracer dengan GUI melibatkan berbagai komponen yaitu : 

1. Sensor  garis  dapat  mendeteksi  garis  yang  terdapat  pada  lantai.  Data  tersebut  akan tersimpan pada array data garis. 
1. Sensor ultrasonik dapat mendeteksi obstacle dan mengetahui jarak yang terdapat antara robot dengan lingkungan sekitar. Data sensor ultrasonik akan tersimpan pada array data ultrasonic.  
1. Robot dapat bergerak sesuai dengan garis yang terdapat pada lantai. Pergerakan robot akan berhenti jika terdapat obstacle di depan robot. 
1. Pada GUI dapat digunakan sebagai indicator penampil sehingga dapat beinteraksi dengan 

   robot   untuk  menampilkan  dan  memonitor  state  robot  sesuai  dengan  perintah  yang terdeteksi. 

5. Motor digunakan sebagai penggerak roda pada line tracer berdasarkan informasi atau data yang diinformasikan oleh mikrokontroler. 
6. Mikrokontroler digunakan sebagai pengontrol sistem pada multi line tracer, mengambil data dari sensor garis, mengontrol motor dan memproses informasi. 
3. Tools and Technologies 

Software yang digunakan pada project Pemrograman Sistem Mekatronik yaitu *Visual Studio Code*(Platform IO)/Arduino IDE dan pyqt.  

Adapun komponen yang digunakan pada Multi-Line Follower yaitu : 

**Tabel 1.** Daftar komponen 



|No |Komponen |
| - | - |
|1 |Arduino Nano  |
|2 |Sensor Ultrasonik HC-SR04 |
|3 |Battery  |
|4 |Driver Motor TB6612FNG |
|5 |Buck converter |
|6 |ESP 01 |
|7 |Line sensor |
|8 |Motor DC |
|9 |MPU 6050 |

Berikut adalah library yang digunakan pada Multi-Line Follower dengan GUI yaitu : 

**Tabel 2.** Daftar library 

**No  Tool Atau Library  Keterangan ![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.005.png)![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.006.png)**

**1**  #include <Wire.h>  Digunakan  pada  Arduino  untuk 

komunikasi antar perangkat menggunakan I2C seperti mengirim dan menerima data 

**2**  #include <NewPing.h>  Untuk memasukkan pengukuran jarak dasi 

sensor ultrasonik 

**3**  #include  Untuk menampilkan data pada layer LCD 

<LiquidCrystal\_I2C.h> 

4. Target<a name="_page6_x69.00_y72.00"></a> specification 

**Tabel 3.** Target specification 



|**Feature** |**Description** |**Measurement Metric** |**Target Value** |
| - | - | - | - |
|Tampilan GUI |Robot  dapat dimonitoring  dan di  kontrol  melalui GUI. |Mengukur  seberapa  akurat  antara tampilan dari GUI dan robot. |Tampilan GUI sesuai dengan robot  |
|Obstacle avoidance |Robot  dapat berhenti  atau berubah arah  jika ada rintangan atau hambatan |<p>Mengukur  seberapa  akurat  sensor ultrasonik  dalam  mengukur  jarak antara robot dan objek di sekitarnya. Memastikan  bahwa  robot  dapat merespons  dengan  benar  terhadap perubahan  kondisi  lintasan  atau </p><p>keberadaan rintangan. </p>|<p>Robot  berjalan  maju kemudian  berhenti atau  berubah  arah jika  ada  objek  yang </p><p>menghalangi. </p>|
|Line sensor |Robot  dapat mengikuti  sesuai arah line yang telah dibuat |<p>Mengukur  seberapa  akurat  sensor   dalam  mendeteksi  line  sehingga </p><p>robot  dapat  terus  mengikuti  line </p><p>tanpa  keluar  dari  line  yang  telah </p><p>dibuat. </p>|Robot  berjalan  maju sesuai  jalur  yang telah dibuat |

<a name="_page6_x69.00_y348.00"></a>3 Conceptual Design 

1. System<a name="_page6_x69.00_y381.00"></a> Architecture 

Berikut adalah penjelasan komponen-komponen utama dalam ilustrasi level tinggi ini: 

- **Graphical User Interface (GUI)** 

  Pada bagian ini, merupakan bagian yang menghubungkan antara pengguna dan sistem, dimana GUI dikembangkan dengan desain dari QT Designer dan memungkinkan pengguna untuk memberikan input dan menerima data dari sistem. Dalam projek ini, GUI didesain untuk dapat memantau nilai ketiga sensor ultrasonik, data sensor garis, dan data dari IMU, serta dapat memberikan input nilai PID pada sistem dan input jarak stop dari sensor ultrasonik. 

- **Logika Kontrol** 

  Logika kontrol dari sistem ini adalah robot bisa diimplementasikan sekitar 30% untuk sistem deteksi atau menghindar dari halangan yang ada disekitarnya.  

- **Komunikasi antar komponen** 

  Komunikasi antara ESP 01 dan GUI dapat dilakukan melalui protokol komunikasi yang sesuai dengan kebutuhan aplikasi, seperti HTTP/HTTPS, MQTT, WebSocket, RESTful API, dan Serial Communication 

- **Hardware** 

  Pada bagian ini, perangkat keras yang digunakan yaitu arduino nano, ESP 01, Sensor ultrasonik HC-SR04, line sensor, IMU, serta motor dan driver. 

- **koneksi** 

  Koneksi jaringan yang digunakan adalah menggunakan koneksi wireless berupa wifi antara GUI dan dan ESP 01 

2. Interface<a name="_page7_x69.00_y130.00"></a> Design 

**Tabel 4.** Daftar tampilan GUI 



|No ||Tampilan GUI |Keterangan |
| - | :- | - | - |
|1 |||Halaman  pertama  yang  akan  tertampil  adalah menu untuk login menuju halaman utama dari GUI.  Dimana  pada  halaman  ini  user diperintahkan untuk memasukkan username dan password untuk mengakses halaman selanjutnya (NB: username: user | password: 123) |
|||||
|2 |||Halaman berikut yaitu adalah halaman loading menuju halaman utama |
|||||
|3 ||![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.007.png)|Halaman berikut adalah halaman utama Dimana tersedia  beberapa  menu  utama  dimana didalamya  terdapat  connect  page,  monitoring page, drive page, mode page, dan calibrate page. Selain itu juga terdapat notification page, user page, rating page, about us page, dan helpdesk page. |
|4 ||![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.008.png)|Halaman berikut adalah halaman calibrate page Dimana  pada  menu  ini  robot  melakukan calibrasi dengan berputar selama beberapa detik. |

5  Halaman  berikutnya  adalah  menu  connect ![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.009.png)![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.010.png)![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.011.png)

Dimana ini adalah menu untuk menghubungkan antara robot dan GUI 

6  Halaman  berikut  adalah  halaman  yang  berisi ![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.012.png)

menu  monitoring  Dimana  didalam  menu tersebut  terdapat  fitur  untuk  monitoring  line sensor, ultrasonic sensor, dan imu sensor. 

![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.013.png)

![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.014.png)

7  Halaman  berikut  adalah  menu  drive  Dimana ![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.015.png)

nantinya  menu  ini  berfungsi  untuk mengendalikan robot sesuai keinginan user. 

8  Halaman berikut merupakan tampilan dari menu ![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.016.png)

mode Dimana ada 2 pilihan yaitu line tracer dan obstacle avoidance.  

||![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.017.png)||
| :- | - | :- |
|9 |![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.018.png)|Halaman  berikut  adalah  tampilan  dari  profile page Dimana halaman ini berisi profil dari user dan beberapa informasi tentang user. |
|10 |![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.019.png)|Halaman berikut adalah tampilan untuk rating page  Dimana  halaman  ini  berfungsi  sebagai penilaian user terhadap GUI yang dibuat baik dari tampilan atau fiturnya. |
|11 |![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.020.png)|Halaman  berikut  adalah  halaman  notification page  Dimana  halaman  ini  berfungsi  untuk menampilkan notifikasi untuk user. |
|12 |![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.021.png)|Berikut adalah halaman about us page Dimana halaman berisi informasi tentang GUI.  |
|13 |![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.022.png)|Berikut adalah halaman helpdesk page Dimana halaman  ini  berisi  bantuan  untuk  user  jika mengalami kendala pada saat menjalankan GUI. |

3. Control<a name="_page10_x69.00_y72.00"></a> Algorithm Design 

Alur pemrosesan data dilakukan melalui komunikasi antara GUI dan Hardware. Dalam hal ini pada GUI dapat memberikan nilai input dari PID line sensor dan juga input penentuan jarak untuk stop. Selain itu pada hardware akan mengirim data dimana data tersebut dapat dipantau melalui GUI yaitu data nilai sensor ultrasonic, nilai sensor garis, dan juga nilai dari IMU berupa pitch, roll, dan yaw.  

![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.023.jpeg)

<a name="_page11_x69.00_y72.00"></a>4 Detailed Design and Development 

1. Component<a name="_page11_x69.00_y94.00"></a> Design 

**Tabel 5.** Desain Komponen 



|components |Module ||Fungsional ||**Components picture**|
| - | - | :- | - | :- | - |
|Arduino Nano |<p>Sensor Infrared (IR) Array </p><p>Motor dan roda Motor driver Baterai atau sumber daya eksternal </p>||<p>Membaca  data  dari  senso infrared  untuk  memberika informasi posisi robot terhada garis. </p><p>Mengontrol  moto menggunakan motor driver. Mengimplementasikan algoritma  sederhana  untu mengontrol  pergerakan  robot berdasarkan  pembacaa sensor. </p><p>Menerapkan  loop  kontrol untuk mengoreksi pergeraka</p><p>robot. </p>|<p>` `r n p </p><p>` `r</p><p>k n </p><p>n </p>|![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.024.png)|
|Sensor Ultrasonik HC-SR04 |<p>Transmitter (pengirim). Receiver (penerima). </p><p>Trig (trigger) pin. Echo pin. </p><p>VCC dan GND. </p>||<p>Mengukur  jarak  dan  obje dengan  menggunaka gelombang ultrasonik. Mengukur  jarak  tanpa  harus bersentuhan  dengan  obje yang hendak diukur. Mendeteksi objek atau dindin di  sekitar  robot, menghindar tabrakan,  dan  menjaga  jarak</p><p>dengan objek tertentu. </p>|<p>k n </p><p>k </p><p>g i </p>|![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.025.png)|
|Driver TB6612FNG |Kanal motor Input tegangan Pin kontrol Proteksi termal Mode sleep Indikator LED ||<p>Memungkinkan  pengendalia perputaran  arah  motor  DC secara independen Mengendalikan motor stepper dua fase </p><p>Perlindungan  termal  yan rusak akibat suhu tinggi Mengkonfigurasikan  pi sesuai kebutuhan project </p>|<p>n </p><p>g n </p>|![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.026.png)|
|MPU 6050 |<p>Akselerometer Gyroscope </p><p>DMP (Digital Motor Processor) Tegangan operasional Komunikasi  I2C (Inter-Integrated Circuit) </p><p>Pin VCC dan GND Pin  ADO  (Alamat I2C pilihan) </p>||Modul  sensor  inertial  yang menyatukan  accelerometer dan  gyroscope  dalam  sat chip.  Dengan  demikian MPU6050  dapat  memberika informasi  tentang  percepatan dan  kecepatan  sudut  suat objek  dalam  tiga  dimensi (sumbu X, Y, dan Z). |<p>u , n </p><p>u </p>|![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.027.png)|

Buck Converter  Step-Down  (Buck)  Mengubah  tegangan  listrik  ![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.028.png)![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.029.png)![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.030.png)Xl-4005  Converter  dari  satu  tingkat  ke  tingkat  

Step-Up  (Boost)  yang berbeda.  

Converter  ![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.031.png)Step-Up/Step-Down  (Buck-Boost)  Converter  

Inventer Converter  Adjustable  Converter  

Isolated  DC  to  DC 

Converter  ![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.032.png)![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.033.png)![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.034.png)

ESP 01  Mikrokontroler   Modul WiFi berbasis ESP8266  

Antarmuka WiFi  yang populer digunakan untuk  RAM  (RAndom  proyek  IoT  (Internet  of  ![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.035.png)Access Memory)  Things).  ESP-01  dapat  Flash Memory  digunakan untuk terhubung ke  GPIO  (General  jaringan WiFi, memungkinkan  Purpose  perangkat  untuk  Input/Output)  berkomunikasi secara nirkabel  UART  (Universal  dengan server atau perangkat  Asynchronous  lain.  

Receiver- 

Transmitter) 

Motor DC  N20  DC  Motor  Perangkat  elektronik  yang  ![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.036.png)bertegangan  dirancang  untuk  

operasional  mengendalikan  motor  DC  umumnya  berkisar  (Direct  Current).  Motor  DC  antara  3V  hingga  adalah jenis motor listrik yang  12V.  beroperasi dengan arus searah.  Modul  motor  DC  

menyediakan  berbagai  fitur  dan  kontrol  untuk  mengatur  

daya dan arah putaran motor. Line Sensor  Array sensor  Mendeteksi jalur atau garis  ![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.037.png)![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.038.png)![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.039.png)

Inframerah  atau  Mendeteksi tingkat perbedaan  fotodioda  warna guna menentukan garis  

Emisor  cahaya  Memberikan  kontrol  yang  ![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.040.png)inframerah  lebih presisi  

Tuning  Sistem  dapat  mengukur  empfindlichkeit  kecepatan  dan  perubahan  (sensitivitas  posisi robot selama bergerak.  penyesuaian) Digital  

atau analog output  

Battery  Mencakup fitur-fitur  Menyimpan  tegangan  listrik 

seperti perlindungan  yang  digunakan  untuk baterai  (overcharge,  menggerakkan  perangkat over-discharge,  elektronik. 

over-current),  Melindungi  termal  dari koneksi  untuk  kerusakan 

pengisian,  dan  Mencegah  polusi  lingkungan  ![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.041.png)![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.042.png)![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.043.png)![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.044.png)mungkin  indikator  karena kandungan kimia yang  tingkat daya.  ada di dalamnya  

2. Coding<a name="_page13_x69.00_y149.00"></a> and Implementation 

Berikut ini adalah tautan program GUI dan Line Tracer: 

[https://github.com/tegarRTI24/LineTracerKelompok1MKB_45_53 ](https://github.com/tegarRTI24/LineTracerKelompok1MKB_45_53)Penjelasan program line tracer : 

1. Program line tracer dikerjakan pada dua arduino yang mana arduino pertama untuk program pembacaan line sensor dan pemutaran motor pada robot. Dimulai dari melakukan definisi variabel 

![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.045.png)

2. Melakukan pendefinisian setup program dengan mendefinisikan setiap pin yang dipakai pada arduino pertama 

![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.046.png)

3. Melakukan  pembacaan  data  dari  arduino  kedua  untuk  pembacaan  sensor  dengan memprogramnya di void loop, serta mengirim data ke PyQt melalui serial print 

   ![ref1]

4. Lalu pada arduino dua akan dilakukan pembacaan sensor oleh arduino dua dan akan dilakukan proses pengiriman data sebagai paramater kontrol motor di arduino pertama dengan program sebagai berikut 

   ![ref1]

5. Semua data yang dihasilkan oleh program arduino dua akan diteruskan dan dibaca oleh arduino pertama. Kemudian dari arduino pertama data akan ditransmisikan ke PyQt sebagai aplikasi GUI melalui serial dengan program sebagai berikut  

   ![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.048.jpeg)

6. PyQT GUI akan mengirimkan perintah juga pada arduino untuk menggerakkan motor melalui program sebagai berikut  

   ![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.049.png)

7. Semua  data  yang  terkoneksi  akan  dilakukan  pemrosesan  data  untuk  menggerakan  motor berdasarkan perintah yang diinginkan sebagai contoh untuk melakukan obstacle avoidance berdasarkan pembacaan data dari sensor di arduino kedua dan akan diteruskan kepada arduino pertama untuk menggerakan motor sesuai jarak yang dibaca oleh arduino kedua  
3. Integration<a name="_page17_x69.00_y385.00"></a> 

Integrasi dari GUI dan sistem kontrol pada multi line tracer merupakan aspek penting dalam mengoperasikan dan mengontrol robot tersebut dengan cara yang lebih intuitif dan efisien. Integrasi ini memungkinkan GUI untuk menyajikan informasi dari sensor secara visual dan memberikan pemahaman yang lebih baik terhadap kondisi sistem. Hal tersebut bertujuan untuk memudahkan penggunaan, pemantauan, dan pengaturan robot secara efisien. Adapun integrasi GUI dan sistem Kontrol yang terdapat pada multi line tracer ini ialah : 

1. Apabila sensor ultrasonik mendeteksi ada hambatan didepan maka data yang dibaca oleh sensor ultrasonik akan dikirimkan ke GUI untuk menampilkan ke tampilan GUI, sehingga kita dapat mengetahui bahwa sensor ultrasonik mendeteksi sesuatu, dimana hal tersebut dapat mempengaruhi kerja motor agar bisa berhenti.. 
1. Apabila line sensor mendeteksi garis hitam maka data dari pembacaan dari line sensor akan dikirimkan  pada  GUI  untuk  menampilkan  ke  tampilan  GUI.  Dengan  itu  kita  bisa mengetahui LED pada line sensor mana yang mendeteksi garis hitam sehingga motor bisa berjalan, sedangkan jika LED pada line sensor mendeteksi tidak adanya garis hitam maka data dari pembacaan dari line sensor yang dikirimkan pada GUI dan yang telihat pada tampilan GUI bahwa tidak mendeteksi sehingga menyebabkan pengurangan kecepatan pada salah satu motor atau membuat keadaan motor menjadi berhenti bila line sensor tidak mendeteksi adanya garis hitam. 
4. Unique<a name="_page18_x69.00_y72.00"></a> Features 

<a name="_page18_x69.00_y90.00"></a>Pengimplementasian IoT pada line tracer yang memperluas kemampuan robot, sperti dapat terkkoneksi secara jarak jauh  saat terhubung ke internet, memungkinkan pengumpulan data secara terus menerus, memudahkan interaksi dengan operator atau pengguna salah satunya dengan menerapkan GUI. Penggunaan GUI pada multi line tracer dapat dioptimalkan dengan berbagai fitur yang memungkinkan seperti mengawasi, dan memahami cara kerja robot. Untuk fitur yang digunakan oleh multi line tracer ini yaitu sensor ultrasonik sebagai pendeteksi jarak dan objek yang terdapat disekitar robot dan sensor line sebagai pengidentifikasi garis pada jalur yang  dilalui  robot.  Pengaplikasian  algoritma  kontrol  PID  dapat  membantu  robot  dalam menyesuaikan kecepatan dan arah motor berdasarkan umpan balik sensor. Kemampuan line tracer dalam mendeteksi navigasi otonom juga akan mempermudah sensor dalam mendeteksi rintangan secara real-time.    

5 Testing, Evaluation, and Optimization 

1. Testing<a name="_page18_x69.00_y274.00"></a> Strategy 

Metode yang digunakan pada pengujian ini yaitu metode eksperimen dimana dilakukan trial and error pada program yang diujikan pada robot uji coba. 

2. Performance<a name="_page18_x69.00_y325.00"></a> Evaluation 

<a name="_page18_x69.00_y345.00"></a>Untuk  cara  kerja  robot  yang  telah  di  program  memiliki  beberapa  aspek  kekurangan sehingga  tidak  mencapai  target  dan  belum  berfungsi  dengan  maksimal,  hal  tersebut  bisa disebabkan  oleh  sistem  yang  belum  bekerja  sesuai  fungsinya  ataupun  karena  kondisi kompponen  yang  tidak  optimal.  Pada  sensor  ultrasonik  yang  kadang  tidak  akurat  dalam membaca objek yang ada disekitarnya, sensor line yang tidak bekerja mengikuti garis yang ditentukan, komunikasi antar mikro yang masih terdapat bug pada saat melakukan komunikasi serial. Hal tersebut menyebabkan robot tidak dapat mengetahui objek yang ada disekitarnya serta adanya beberapa data yang terlewatkan dan dapat mempersulit proses monitoring terhadap robot. 

3. Optimization 

Optimasi yang dilakukan untuk meningkatkan performa sistem berupa melakukan uji coba terus menerus sehingga jika adanya kendala dapat melakukan *Trial and error* lagi. Dilakukan juga pergantian komponen dengan robot lain yang serupa dimana bertujuan agar mengurangi kesalahan akibat kerusakan komponen. Optimasi GUI pada robot line tracer dengan berbagai jenis sensor bertujuan untuk meningkatkan pengalaman pengguna, mempermudah pemantauan, dan memungkinkan pengaturan yang efisien. 

<a name="_page19_x69.00_y72.00"></a>6 Collaboration and Project Management 

1. Teamwork<a name="_page19_x69.00_y94.00"></a> Dynamics 

**Tabel 6.** Pembagian Kerja 



|No |Nama |Peran |
| - | - | - |
|1 |Muhammad Irfan Habib |Membuat  design  GUI  dan laporan |
|2 |Ramadhan Tegar imansyah |Membuat kontrol robot dan GUI |

2. Project<a name="_page19_x69.00_y193.00"></a> Management

**Tabel 7.** Projek Manajemen 



|No |Minggu |Pencapaian |
| - | - | - |
|1 |Minggu 1 |Menentukan target dari projek  |
|2 |Minggu 2 |Komunikasi antar  mikrokontroller |
|3 |Minggu 3 |Dapat mengakses sensor ultrasonik |
|4 |Minggu 4  |Membuat tampilan dari GUI |
|5 |Minggu 5 |Mengakses sensor garis |
|6 |Minggu 6 |Membuat tampilan GUI |
|7 |Minggu 7 |*Trial and error* |
|8 |Minggu 8 |Penyusunan laporan |

<a name="_page19_x69.00_y386.00"></a>7 Conclusion and Reflection 

1. Project<a name="_page19_x69.00_y412.00"></a> Summary 

<a name="_page19_x69.00_y431.00"></a>Pencapaian yang didapatkan dalam mengerjakan projek ini ialah menciptakan algoritma untuk  mengidentifikasi  dan  mengikuti  garis  secara  akurat,  dapat  mengimplementasikan program kedalam robot line tracer, dan mampu mengatasi rintangan yang ada pada lintasan garis.  

Pembelajaran dalam projek ini mengenai cara kerja dan fungsi tiap fitur pada GUI serta bisa mengakses sesuai dengan apa yang diinginkan melalui pengekstrakan GUI ke program dengan bahasa python, kemudian mencari cara mengakses tiap fitur sehingga bisa sesuai dengan yang diinginkan. Untuk robot line tracaer sendiri kita mempelajari bagaimana prinsip kerja  setiap  komponen  yang  ada  pada  line  tracaer  tersebut,  kemudian  bagaiamana  cara mengkoneksikan tiap komponen agar robot tersebut bisa berjalan sesuai dengan ketentuan. Hal  tersulit  ialah  ketika  memprogram  robot,  dimana  sulit  untuk  mengintegrasikan  tiap komponen agar bisa terkoneksi satu sama lain.  

Hasil dari pembelajaran ini yaitu bisa mengetahui apa itu GUI dan fungsinya serta apa itu robot line tracaer, sensor yang terpasang memiliki fungsi apa saja, dan cara memprogram robot tersebut sehingg robot mampu mengikuti jalur secara konsisten dan presisi, memiliki respons  yang  baik  terhadap  lintasan  dan  sensor  jarak  danemampuan  untuk  mengatasi rintangan dalam lintasan. 

2. Future Work 

<a name="_page20_x69.00_y166.00"></a>Untuk peningkatan lebih lanjut robot multi line tracer ini dapat dikembangkan dengan peningkatan fitur yang ada pada GUI seperti, pengontrolan robot dengan menggunakan GUI, adanya pemantauan lintasan, pengaturan parameter, pemantauan sensor, dan adanya fitur-fitur tambahan lainnya. Kemudian GUI bisa menyimpan data dari hasil pembacaan sensor yang ada pada robot sehingga pemantauan robot dapat lebih optimal. Untuk peningkatan lebih lanjut dari robot ialah ditambahkannya fitur kendali manual yang bisa dikontrol menggunakan joystick agar pengguna bisa mendapatkan 2 sensasi yang berbeda dalam mengontrol robot tersebut.  Untuk  peningkatan  penelitian  dan  aplikasi  robot  secara  lebih  jauh,  yang menyebabkan robot ini bisa di aplikasikan pada industri ataupun rumah sakit dimana ini akan membantu manusia dalam memudahkan pekerjaan sehari sehari. 

3. Personal and Group Reflections 

Berdasarkan pengerjaan multi line tracer dengan GUI (Graphical User Interface) merupakan suatu pengerjaan yang melibatkan pengembangan dan pemrograman robot atau perangkat yang mampu mengikuti  atau  melacak  beberapa  lintasan  atau  garis.  Dalam  proses  pengerjaan  ini  memberikan pengalaman, tantangan dan pengetahuan yang didapat selama melakukan pengerjaan multi line tracer dengan GUI (Graphical User Interface) yaitu : 

- Pengalaman  
1. Dapat mengetahui dan menerapkan konsep pemrograman robotika serta sensor-sensor yang digunakan untuk melacak garis-garis 
1. Meningkatkan  pemahaman  tentang  bagaimana  memecahkan  masalah  dan mengoptimalkan kinerja sistem yang dibuat. 
1. Mengetahui  kompleksitas  pengembangan  sistem  navigasi  robotika  yang  mampu mengikuti lintasan yang mana tidak hanya membutuhkan keterampilan teknis yang kuat, tetapi juga kreativitas dalam menemukan solusi untuk mengatasi berbagai kendala yang mungkin  muncul.  Serta  kreativitas  mengenai  design  dan  layout  yang  sesuai  dengan tampilan GUI  
- Tantangan 

Adanya pengerjaan multi line tracer ini memiliki tantangan yang cukup berat yaitu  

1. Pembuatan program untuk kerja robot yang harus menyesuaikan dengan tujuan yang diinginkan, 
1. Adanya trial dan error pada program robot yang memakan waktu cukup banyak dalam mengintegrasikan tiap sensornya 
1. Perlunya pengindetifikasian tiap fitur dalam membuat GUI dan melakukan pengkoneksi- an dengan robot sehingga bisa mejadi satu kesatuan 
- Pengetahuan 
1. Mendapatkan pengalaman yang lebih mendalam mengenai pengerjaan multi line tracer dengan GUI (Graphical User Interface) 
1. Dapat mengetahui  
1. Dapat memahami dan menerapkan cara untuk melakkukan koneksi dan komunikasi antara multi line tracer dengan GUI.  
1. Melakukan Trial dan error terutama dalam mempelajari dan membuat GUI pada multi line tracer. 

<a name="_page21_x69.00_y200.00"></a>8 Appendices 

1. Bill<a name="_page21_x69.00_y226.00"></a> of Materials 

Robot Line Tracer ini merupakan fasilitas yang telah disediakan dari Lab Vehicle sebagai modul pembelajaran untuk mahasiswa sehingga kelompok kami tidak mengeluarkan biaya. 

**Tabel 8.** Daftar Biaya 



|**No** |**Komponen** ||**Cost** |**No** |**Komponen** ||**Cost** |
| - | - | :- | - | - | - | :- | - |
|1 |Arduino Nano||Rp. 40.000 |6 |Line sensor||Rp. 50.000 |
|||||||||
|||||||||
|2 |Sensor Ultrasonik HC-SR04||Rp. 12.000 |7 |Dip Switch||Rp. 2000 |
|||||||||
|||||||||
|3 |Baterai Lippo 7,4V||Rp.150.000 |8 |ESP 01||Rp. 15.000 |
|||||||||
|||||||||
|||||||||
|||||||||
|||||||||

|4 |<p>Driver Motor TB6612FNG</p><p>![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.050.png)</p>|Rp. 35.000 |9 |<p>MPU 6050</p><p>![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.051.png)</p>|Rp. 20.000 |
| - | - | - | - | - | - |
|5 |<p>Back Converter XL4005</p><p>![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.052.png)</p>|Rp. 11.000 |10 |<p>Motor DC Gearbox</p><p>![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.053.png)</p>|Rp. 12.000 |

2. Electrical<a name="_page22_x69.00_y292.00"></a> Wiring and System Layout 
- Schematics Main Board 

![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.054.jpeg)

- Schematics Line Sensor 

![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.055.png)

- Wiring Line Sensor 

![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.056.png)

3. Code<a name="_page24_x69.00_y72.00"></a> Repository <a name="_page24_x69.00_y90.00"></a><https://github.com/tegarRTI24/LineTracerKelompok1MKB_45_53> 
3. Additional Documentation 

|&emsp;![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.057.png)|![](Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.058.png)|
| - | - |

9<a name="_page24_x75.00_y128.00"></a> References 

Fahmi,  D.  2016.  RANCANG  BANGUN  ROBOT  LINE  FOLLOWER  BERBASIS  CAHAYA 

TAMPAK, 13-20. 

Jansen, B. 1998. THE GRAPHICAL USER INTERFACE. SIGCHI Bulletin, 30(2) : 2-10  

Floch, K, dkk. 2023. Motion Tracker Beta: A GUI based open-source motion tracking application. 5(2) 

: 1-10. 
24 

[ref1]: Aspose.Words.039a06a6-c2a7-4e7c-9985-e56fb9d71dc4.047.jpeg
