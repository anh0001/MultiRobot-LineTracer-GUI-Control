# Table of Contents

1. [Introduction and Initial Analysis](#1-introduction-and-initial-analysis)
   1.1 [Project Context](#11-project-context)
   1.2 [Initial Thought Process](#12-initial-thought-process)
2. [Requirement Analysis and Specification](#2-requirement-analysis-and-specification)
   2.1 [User Requirements](#21-user-requirements)
   2.2 [System Requirements](#22-system-requirements)
   2.3 [Tools and Technologies](#23-tools-and-technologies)
3. [Conceptual Design](#3-conceptual-design)
   3.1 [System Architecture](#31-system-architecture)
   3.2 [Interface Design](#32-interface-design)
   3.3 [Control Algorithm Design](#33-control-algorithm-design)
4. [Detailed Design and Development](#4-detailed-design-and-development)
   4.1 [Component Design](#41-component-design)
   4.2 [Coding and Implementation](#42-coding-and-implementation)
   4.3 [Integration](#43-integration)
   4.4 [Unique Features](#44-unique-features)
5. [Testing, Evaluation, and Optimization](#5-testing-evaluation-and-optimization)
   5.1 [Testing Strategy](#51-testing-strategy)
   5.2 [Performance Evaluation](#52-performance-evaluation)
   5.3 [Optimization](#53-optimization)
6. [Collaboration and Project Management](#6-collaboration-and-project-management)
   6.1 [Teamwork Dynamics](#61-teamwork-dynamics)
   6.2 [Project Management](#62-project-management)
7. [Conclusion and Reflection](#7-conclusion-and-reflection)
   7.1 [Project Summary](#71-project-summary)
   7.2 [Future Work](#72-future-work)
   7.3 [Personal and Group Reflections](#73-personal-and-group-reflections)
8. [Appendices](#8-appendices)
   8.1 [Bill of Materials](#81-bill-of-materials)
   8.2 [Electrical Wiring and System Layout](#82-electrical-wiring-and-system-layout)
   8.3 [Code Repository](#83-code-repository)
   8.4 [Additional Documentation](#84-additional-documentation)
9. [References](#9-references)

# 1 Introduction and Initial Analysis

## 1.1 Project Context
Sistem mekatronika telah menjadi bagian dari berbagai aplikasi otomasi dan kendali dalam berbagai industri. Dalam konteks pengembangan robot, peningkatan kompleksitas dan fungsi dari sistem mekatronika mengharuskan integrasi antarmuka pengguna yang intuitif dan efektif. Salah satu tugas penting dalam pengembangan robot adalah mengatur dan memantau pergerakan dengan akurasi tinggi, seperti pada robot line follower dan obstacle avoiding.
Robot line follower bertujuan untuk mengikuti lintasan atau jalur tertentu dengan memanfaatkan sensor dan kendali yang terintegrasi. Sementara itu, robot obstacle avoiding dirancang untuk menghindari rintangan dan mengubah jalur secara otomatis untuk mencegah tabrakan.
Pengembangan tampilan GUI (Graphical User Interface) memberikan kemampuan untuk memvisualisasikan dan mengontrol robot dengan cara yang lebih intuitif dan efisien bagi pengguna akhir. Dengan GUI yang tepat, pengguna dapat memonitor status robot, mengubah parameter operasi, dan memantau hasil sensor dengan mudah.
Dalam proyek ini, kami bertujuan untuk mengintegrasikan sistem mekatronika dengan antarmuka pengguna berbasis GUI untuk meningkatkan fungsionalitas, keterbacaan, dan kontrol dari robot line follower dan obstacle avoiding. Dengan demikian, proyek ini diharapkan dapat membantu memajukan penggunaan sistem mekatronika dalam berbagai aplikasi praktis. dengan menggunakan sistem yang berbasis GUI ini, pengguna tidak perlu lagi merubah hardware saat melakukan pengembangan, pengguna hanya perlu melakukan upgrade pada software GUI.

## 1.2 Initial Thought Process
- Robot dilengkapi dengan sensor ultrasonic sebagai pendeteksi jarak antara robot dan lingkungan sekitar robot sehingga dapat menghindari obstacle 
- Robot juga dilengkapi dengan sensor IMU untuk navigasi pergerakan dari robot 
- Pada GUI ditampilkan berbagai fitur seperti connect, monitoring, drive, dan kalibrasi

# 2 Requirement Analysis and Specification

## 2.1 User Requirements
Graphical User Interface (GUI) atau Antarmuka Pengguna Grafis merujuk pada suatu bentuk antarmuka pengguna yang memungkinkan interaksi antara pengguna dan perangkat lunak atau sistem menggunakan elemen-elemen grafis seperti ikon, tombol, jendela, dan menu. GUI dirancang untuk membuat pengguna dapat berinteraksi dengan perangkat lunak atau sistem dengan lebih mudah dan intuitif, tanpa perlu mengingat perintah-perintah teks atau sintaks khusus. GUI menggunakan metode interaksi pada peranti elektronik secara grafis (bukan perintah teks) antara pengguna dan komputer.
Sistem kontrol merujuk pada proses yang digunakan untuk mengelola, mengatur, dan mengawasi berbagai jenis aktivitas dalam berbagai konteks. Sistem kontrol multi line follower merujuk pada teknologi yang digunakan dalam robotika untuk mengontrol gerakan sebuah robot agar dapat mengikuti atau mengikuti lintasan multi-garis yang telah ditentukan sebelumnya. Sistem ini umumnya menggunakan sensor-sensor yang terpasang pada robot untuk mendeteksi lintasan atau jalur yang harus diikuti. Sensor-sensor ini dapat berupa sensor inframerah, sensor ultrasonik, sensor garis, atau sensor lainnya yang dapat mendeteksi perubahan warna atau pola tertentu di lintasan.
Sistem kontrol multi line follower dengan GUI (Graphical User Interface) dapat memberikan antarmuka yang lebih intuitif dan mudah digunakan untuk mengontrol robot yang mengikuti lintasan multi-garis. GUI memungkinkan untuk berinteraksi dengan robot, memberikan perintah, dan memantau pergerakan robot secara visual melalui antarmuka grafis.

## 2.2 System Requirements
Dari hasil perancangan, pembuatan serta pengujian sistem didapatkan beberapa kesimpulan dijelaskan sebagai berikut:
- Sensor garis dapat mendeteksi garis yang terdapat pada lantai. Data tersebut akan tersimpan pada array data garis.
- Sensor ultrasonik dapat mendeteksi obstacle dan mengetahui jarak yang terdapat antara robot dengan lingkungan sekitar. Data sensor ultrasonik akan tersimpan pada array data ultrasonic 
- Robot dapat bergerak sesuai dengan garis yang terdapat pada lantai. Pergerakan robot akan berhenti jika terdapat obstacle di depan robot.
- Pada GUI dapat digunakan sebagai indicator penampil sehingga dapat berinteraksi dengan robot untuk menampilkan dan memonitor state robot sesuai dengan perintah yang terdeteksi.

## 2.3 Tools and Technologies
Daftar komponen yang digunakan pada Multi-Line Follower
No | Komponen | Keterangan
--- | --- | ---
1 | Arduino Nano | 
2 | Sensor Ultrasonik | 
3 | Baterai Lippo | 7,4V / 1500mAh
4 | Driver Motor | 
5 | Step-Down | 
6 | IR Sensor | 
7 | Dip Switch | 
8 | Kabel Jumper | 
9 | Sensor IMU | 

## 2.4 Target specification
**Tabel 1. Tabel caption.**
| Feature | Description | Measurement Metric | Target Value |
| --- | --- | --- | --- |
| GUI untuk indicator penampilan | ... | Indikator Tampilan | ... |
| Robot dapat berhenti jika ada rintangan atau hambatan | | | |

# 3 Conceptual Design

## 3.1 System Architecture
Illustrate the high-level architecture of the system, including the GUI and control logic.

## 3.2 Interface Design
Sketch the preliminary design of the GUI, focusing on user interaction and experience.

## 3.3 Control Algorithm Design
Outline the design of control algorithms and data processing workflows.

# 4 Detailed Design and Development

## 4.1 Component Design
Delve into the design of individual components, modules, and functionalities.

## 4.2 Coding and Implementation
Document the coding process, adopted standards, and implementation challenges.

## 4.3 Integration
Discuss the integration of GUI with the control system, and among different system components.

## 4.4 Unique Features
Highlight any novel features, optimizations, or technologies employed.

# 5 Testing, Evaluation, and Optimization

## 5.1 Testing Strategy
Describe the testing methodologies, cases, and tools used. Emphasize on how the testing validates the targets specified in Section 2.4.

## 5.2 Performance Evaluation
Evaluate the system performance against the defined requirements and objectives. Include a comparative analysis with the targets specified in Section 2.4, illustrating how well the system meets or exceeds these targets.

## 5.3 Optimization
Discuss any optimizations made to enhance system performance and user experience.

# 6 Collaboration and Project Management

## 6.1 Teamwork Dynamics
Reflect on the collaborative endeavor, roles, and contributions of team members.

## 6.2 Project Management
Document the project timeline, milestones, and management practices adopted.

# 7 Conclusion and Reflection

## 7.1 Project Summary
Summarize the key achievements, learnings, and outcomes.

## 7.2 Future Work
Propose further enhancements, applications, and research directions.

## 7.3 Personal and Group Reflections
Reflect on the experience, challenges, and acquired knowledge.

# 8 Appendices

## 8.1 Bill of Materials
Detail the parts, costs, and sources.

## 8.2 Electrical Wiring and System Layout
Provide diagrams, schematics, and layout information.

## 8.3 Code Repository
Include links to the code repository, version control, and change logs.

## 8.4 Additional Documentation
Include any other relevant documentation, photos, or supporting materials.

# 9 References
Cite all references, tools, libraries, and external resources used in the project.
