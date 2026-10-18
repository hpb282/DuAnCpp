 UC05 VA UC06

1. Mo ca thu muc NOC_Project bang VS Code.
2. Mo Terminal tai thu muc nay. Can co g++ trong PATH.
3. Tren Windows chay:
   .\build.bat
   .\NOC_Bac.exe

Lenh bien dich truc tiep (Windows hoac Linux):
   g++ -std=c++11 main.cpp src/menus/Bac.cpp -o NOC_Bac
Tren Linux chay: ./NOC_Bac

DOC CODE
- src/menus/Bac.cpp: hai chuc nang cua Bac, nen doc dau tien.
- src/menus/Bac.h: khai bao hai ham de menu chung goi.
- src/entities/: cac lop du lieu dung chung.
- src/repository/Repository.h: mang, bien dem, tim, them, xoa, doc/ghi file.
- src/utils/KiemTra.h: kiem tra dau vao va cac ngoai le.
- main.cpp: chuong trinh ho tro chay rieng hai chuc nang.

GHEP NHOM
Gui ca bo code va bao cao. Main nay la main chay rieng, khong chep them
vao du an da co main. Hai ham can goi tu menu chung:
   xoaNode(dsNode, dsCanhBao);
   themCanhBao(dsNode, dsCanhBao);
Can thong nhat ten lop/ham voi code cua nhom truoc khi ghep. Khung chung
kem theo la phien ban toi gian, khong phai toan bo cac UC cua nhom.

LUU Y DU LIEU
Moi dong la mot ban ghi, cac truong cach nhau boi |. Khong tron du lieu
voi ban luyen tap mot file truoc day. Chay tu thu muc NOC_Project.
Moi danh sach toi da 100 ban ghi. Thay doi duoc luu ngay khi thanh cong.
Sao chep thu muc data truoc khi demo; chi mo mot phien chuong trinh.
Ban nay ghi file truc tiep: loi giua luc ghi co the lam file bi thieu.
Neu loi ghi, chuong trinh dung; phuc hoi tu ban sao luu sau khi sua loi.

Dien ho ten/MSSV trong code va bao cao theo nguoi thuc hien thuc te.
