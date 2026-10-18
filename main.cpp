
#include "src/menus/Bac.h"

// Goi ham ao qua lop cha: day la cach the hien tinh da hinh.
void hienThi(const Entity& doiTuong) {
    doiTuong.display();
}


int main() {
    try {
        Repository<NetworkNode> dsNode("data/nodes.txt");
        Repository<Alarm> dsCanhBao("data/alarms.txt");
        for (int i = 0; i < dsCanhBao.size(); i++) {
            if (!dsNode.exists(dsCanhBao.at(i).getNodeId()))
                throw runtime_error("File canh bao tham chieu node khong ton tai.");
        }
        while (true) {
            cout << "\n===== NOC - PHAN BAC =====\n"
                 << "1. Xem node (ho tro)\n2. Xem canh bao (ho tro)\n"
                 << "5. Xoa node - UC05\n6. Them canh bao - UC06\n0. Thoat\n";
            try {
                string chon = nhapDong("Lua chon: ");
                if (chon == "0") break;
                if (chon == "1") {
                    for (int i = 0; i < dsNode.size(); i++) hienThi(dsNode.at(i));
                    cout << "Tong so node: " << dsNode.size() << '\n';
                } else if (chon == "2") {
                    for (int i = 0; i < dsCanhBao.size(); i++) hienThi(dsCanhBao.at(i));
                    cout << "Tong so canh bao: " << dsCanhBao.size() << '\n';
                } else if (chon == "5") xoaNode(dsNode, dsCanhBao);
                else if (chon == "6") themCanhBao(dsNode, dsCanhBao);
                else cout << "Lua chon khong hop le.\n";
            } catch (const HetDuLieu&) {
                break;
            } catch (const invalid_argument& loi) {
                cout << loi.what() << '\n';
            } catch (const LoiThamChieu& loi) {
                cout << loi.what() << '\n';
            }
            
        }
    } catch (const exception& loi) {
        cerr << "LOI: " << loi.what() << "\nDung chuong trinh; kiem tra file va ban sao luu.\n";
        return 1;
    }
    return 0;
}
