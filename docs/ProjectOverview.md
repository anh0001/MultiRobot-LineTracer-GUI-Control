# Table of Contents
1. [Introduction and Initial Analysis](#introduction-and-initial-analysis)
    1. [Project Context](#project-context)
    2. [Initial Thought Process](#initial-thought-process)
2. [Requirement Analysis and Specification](#requirement-analysis-and-specification)
    1. [User Requirements](#user-requirements)
    2. [System Requirements](#system-requirements)
    3. [Tools and Technologies](#tools-and-technologies)
    4. [Target Specification](#target-specification)
3. [Conceptual Design](#conceptual-design)
    1. [System Architecture](#system-architecture)
    2. [Interface Design](#interface-design)
    3. [Control Algorithm Design](#control-algorithm-design)
4. [Detailed Design and Development](#detailed-design-and-development)
    1. [Component Design](#component-design)
    2. [Coding and Implementation](#coding-and-implementation)
    3. [Integration](#integration)
    4. [Unique Features](#unique-features)
5. [Testing, Evaluation, and Optimization](#testing-evaluation-and-optimization)
    1. [Testing Strategy](#testing-strategy)
    2. [Performance Evaluation](#performance-evaluation)
    3. [Optimization](#optimization)
6. [Collaboration and Project Management](#collaboration-and-project-management)
    1. [Teamwork Dynamics](#teamwork-dynamics)
    2. [Project Management](#project-management)
7. [Conclusion and Reflection](#conclusion-and-reflection)
    1. [Project Summary](#project-summary)
    2. [Future Work](#future-work)
    3. [Personal and Group Reflections](#personal-and-group-reflections)
8. [Appendices](#appendices)
    1. [Bill of Materials](#bill-of-materials)
    2. [Electrical Wiring and System Layout](#electrical-wiring-and-system-layout)
    3. [Code Repository](#code-repository)
    4. [Additional Documentation](#additional-documentation)
9. [References](#references)

# Introduction and Initial Analysis

## Project Context
Multi-line follower dengan sensor ultrasonik yang dilengkapi dengan antarmuka pengguna grafis (GUI) adalah proyek yang lebih kompleks dan melibatkan pemrograman tambahan. Antarmuka pengguna grafis dapat digunakan untuk mengontrol robot, memantau sensornya, dan melihat data jalur yang diikuti dalam format yang lebih intuitif. Tujuannya untuk memberikan pemahaman yang lebih baik mengenai penggunaan sensor dan kontroler dalam pengembangan robotika. Robot ini dapat digunakan dalam aplikasi logistik, seperti pengiriman otomatis di pabrik atau Gudang, berupa membantu dalam mengangkut barang-barang secara otomatis dengan mengikuti jalur yang telah ditentukan.

Multi-line follower dengan sensor ultrasonik adalah sebuah jenis robot yang dirancang untuk mengikuti garis-garis pada permukaan. Robot ini menggunakan Sensor ultrasonik untuk mendeteksi rintangan di sekitar robot dan memungkinkan robot untuk menghindari atau mengikuti garis dengan lebih akurat dan menggunakan photodiode sebagai sensor cahaya yang mana hasil pembacaan sensor kemudian dikirim ke mikrokontroller. Robot line follower di masukkan dalam jenis robot yang memiliki prinsip kerja sederhana. Robot ini mendeteksi garis dengan menggunakan sensor infrared yang terpasang padanya. Data hasil pembacaan sensor dikirim ke mikrokontroler, kemudian mikrokontroler akan menggunakan data tersebut untuk memutuskan arah gerak robot.

Penggunaan GUI memiliki banyak keuntungan bagi robot Multi-line follower dengan sensor ultrasonik yaitu berupa penggunaan lebih intuitif dan mudah digunakan, menampilkan data sensor dan status sistem secara visual, memantau data dalam waktu nyata, memberikan fleksibilitas yang lebih besar dalam penggunaan sistem sehingga mempermudah untuk menyesuaikan pengaturan, mengubah parameter, dan mengatur preferensi sesuai kebutuhan. Dalam industri, robot ini di manfaatkan untuk mengangkut barang dalam jumlah kecil maupun besar dalam satu jalur yang tidak memiliki percabangan. Desain dan spesifikasi robot line follower di buat dengan menyesuaikan fungsi yang akan di jalankannya. Jika robot line follower di rancang untuk mengangkut barang yang berat, maka kapasitas motor yang di gunakan juga harus besar agar robot ini dapat menjalankan tugasnya dengan baik. kontrol yang lebih sederhana dan intuitif, emantau data dalam waktu nyata emampuan untuk menyesuaikan pengaturan, mengubah parameter, dan mengatur preferensi sesuai kebutuhan mereka, Ini memberikan fleksibilitas yang lebih besar dalam penggunaan sistem.

## Initial Thought Process
Pada proses awal kami melakukan pencarian data terkait fungsi kerja tiap komponen pada Multi-Line follower dengan melakukan pengecekan komponen apa saja yang ada pada robot tersebut, kemudian melakukan peninjauan terkait dengan skematik robot yang bertujuan untuk mengetahui pengkabelan sistem robot. Membuat dan melakukan trial and error untuk program kerja robot sesuai dengan fitur yang diingikan. Merancang tampilan GUI sesuai dengan fitur yang diinginkan dimana bertujuan untuk indikator tampilan. Konsep mobile robot ini terdiri dari sebuah penggerak, yaitu motor DC yang tersambung dengan driver motor sebagai penggerak roda pada robot. Selain itu terdapat sensor ultrasonik sebagai pendeteksi jarak antara robot dan lingkungan sekitar. Untuk navigasi dari robot ini, robot menggunakan sensor pendeteksi garis. Pada lantai karena akan terdapat garis sebagai jalur pergerakan dari robot. Untuk control robot menggunakan mikrokontroller Arduino nano yang berfungsi mensinkronisasi semua komponen pada robot.

**Tantangan Pengerjaan**
- Pembuatan GUI yang masih baru dan belum sepenuhnya dikuasai sehingga kelompok kami mulai mempelajari dan memahami pembuatan GUI, sistem kerja, dan penggunaannya dengan Multi-Line Follower.
- Pembuatan program pada robot belum teratasi sesuai dengan yang ditujukan sehingga kami melakukan trial and error untuk menyesuaikan program yang dibuat dengan keinginan yang diharapkan.

**Peluang Pengerjaan**
- Penguasaan pada setiap Hardware dan paham akan kerja tiap komponen sehingga mempermudah dalam menganalisa fungsi kerja tiap komponen.
- Penguasaan pada Bahasa pemrograman Phyton sehingga mempermudah kami dalam pengerjaan program robot Multi-Line Follower.

# Requirement Analysis and Specification

## User Requirements
Graphical User Interface(GUI) atau Antarmuka Pengguna Grafis merujuk pada suatu bentuk antarmuka pengguna yang memungkinkan interaksi antara pengguna dan perangkat lunak atau sistem menggunakan elemen-elemen grafis seperti ikon, tombol, jendela, dan menu. GUI dirancang untuk dapat berinteraksi dengan perangkat lunak atau sistem dengan lebih mudah dan intuitif, tanpa perlu mengingat perintah-perintah teks atau sintaks khusus. GUI menggunakan metode interaksi pada peranti elektronik secara grafis (bukan perintah teks) antara pengguna dan komputer. Sistem kontrol merujuk pada proses yang digunakan untuk mengelola, mengatur, dan mengawasi berbagai jenis aktivitas dalam berbagai konteks. Sistem kontrol multi line follower merujuk pada teknologi yang digunakan dalam robotika untuk mengontrol gerakan sebuah robot agar dapat mengikuti atau mengikuti lintasan multi-garis yang telah ditentukan sebelumnya. Sistem ini umumnya menggunakan sensor-sensor yang terpasang pada robot untuk mendeteksi lintasan atau jalur yang harus diikuti. Sensor-sensor ini dapat berupa sensor inframerah, sensor ultrasonik, sensor garis, atau sensor lainnya yang dapat mendeteksi perubahan warna atau pola tertentu di lintasan. Sistem kontrol multi line follower dengan GUI (Graphical User Interface) dapat memberikan antarmuka yang lebih intuitif dan mudah digunakan untuk mengontrol robot yang mengikuti lintasan multi-garis. GUI memungkinkan untuk berinteraksi dengan robot, memberikan perintah, dan memantau pergerakan robot secara visual melalui antarmuka grafis.

## System Requirements
Detail the technical and functional requirements. dari hasil perancangan, pembuatan serta pengujian sistem didapatkan beberapa kesimpulan yang dijelaskan sebagai berikut:
1. Sensor garis dapat mendeteksi garis yang terdapat pada lantai. Data tersebut akan tersimpan pada array data garis.
2. Sensor ultrasonik dapat mendeteksi obstacle dan mengetahui jarak yang terdapat antara robot dengan lingkungan sekitar. Data sensor ultrasonik akan tersimpan pada array data ultrasonic.
3. Robot dapat bergerak sesuai dengan garis yang terdapat pada lantai. Pergerakan robot akan berhenti jika terdapat obstacle di depan robot.
4. Pada GUI dapat digunakan sebagai indicator penampil sehingga dapat berinteraksi dengan robot untuk menampilkan dan memonitor state robot sesuai dengan perintah yang terdeteksi.
5. IMU sebagau Menyusun kecepatan.

## Tools and Technologies
Daftar komponen yang digunakan pada Multi-Line Follower
No | Komponen           | Keterangan
---|-------------------|-------------------------------------
1  | Arduino Nano      |
2  | Sensor Ultrasonik |
3  | Baterai Lippo     | 7,4V / 1500mAh
4  | Driver Motor      |
5  | Step-Down          |
6  | IR Sensor          |
7  | Dip Switch         |
8  | Kabel Jumper      |
9  | Sensor IMU         |

## Target Specification
| Feature                              | Description                        | Measurement Metric | Target Value       |
|--------------------------------------|------------------------------------|--------------------|--------------------|
| GUI untuk indicator penampilan       | ...                                | Indikator Tampilan |                    |
| Robot dapat berhenti jika ada rintangan atau hambatan |                                |                    |                    |

# Conceptual Design

## System Architecture
Illustrate the high-level architecture of the system, including the GUI and control logic.
Mengilustrasikan arsitektur sistem tingkat tinggi, termasuk GUI dan logika kontrol.

## Interface Design
Sketch the preliminary design of the GUI, focusing on user interaction and experience.
Buat sketsa desain awal GUI, dengan fokus pada interaksi dan pengalaman pengguna.

## Control Algorithm Design
Outline the design of control algorithms and data processing workflows.
Buat sketsa desain awal GUI, dengan fokus pada interaksi dan pengalaman pengguna.

# Detailed Design and Development

## Component Design
Delve into the design of individual components, modules, and functionalities.
Selidiki desain masing-masing komponen, modul, dan fungsionalitas.

## Coding and Implementation
Document the coding process, adopted standards, and implementation challenges.

## Integration
Discuss the integration of GUI with the control system, and among different system components.

## Unique Features
Highlight any novel features, optimizations or technologies employed.

# Testing, Evaluation, and Optimization

## Testing Strategy
Describe the testing methodologies, cases, and tools used. Emphasize on how the testing validates the targets specified in Section 2.4.

## Performance Evaluation
Evaluate the system performance against the defined requirements and objectives. Include a comparative analysis with the targets specified in Section 2.4, illustrating how well the system meets or exceeds these targets.

## Optimization
Discuss any optimizations made to enhance system performance and user experience.

# Collaboration and Project Management

## Teamwork Dynamics
Reflect on the collaborative endeavor, roles, and contributions of team members.

## Project Management
Document the project timeline, milestones, and management practices adopted.

# Conclusion and Reflection

## Project Summary
Summarize the key achievements, learnings, and outcomes.

## Future Work
Propose further enhancements, applications, and research directions.

## Personal and Group Reflections
Reflect on the experience, challenges, and acquired knowledge.

# Appendices

## Bill of Materials
Detail the parts, costs, and sources.

## Electrical Wiring and System Layout
Provide diagrams, schematics, and layout information.

## Code Repository
Include links to the code repository, version control, and change logs.

## Additional Documentation
Include any other relevant documentation, photos, or supporting materials.

# References
Cite all references, tools, libraries, and external resources used in the project.
