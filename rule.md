# Quy tắc đặt tên biến (Variable Naming Rules)

### 1. Ngôn ngữ và Định dạng
- **Ngôn ngữ**: Sử dụng tiếng Việt không dấu.
- **Định dạng**: Sử dụng **camelCase** (chữ cái đầu viết thường, các chữ cái đầu của từ tiếp theo viết hoa).
  - *Ví dụ*: `soBoTest`, `giaTriPhanThuc`, `tongHaiSo`.

### 2. Ý nghĩa tên biến
- Tên biến phải phản ánh đúng chức năng hoặc nội dung mà nó lưu trữ.
- Tránh đặt tên biến quá ngắn hoặc vô nghĩa (trừ các biến đếm trong vòng lặp như `i`, `j`).

### 3. Quy ước cho các trường hợp phổ biến
- **Số bộ test**: Luôn dùng `soBoTest`.
- **Dữ liệu nhập vào**:
  - Số nguyên: `soNguyen`, `n`, `a`, `b`.
  - Số thực: `soThuc`, `c`, `x`, `y`.
- **Kết quả**: `ketQua`, `tong`, `hieu`, `tich`, `thuong`.

### 4. Hạn chế
- Không sử dụng ký tự đặc biệt trong tên biến (trừ dấu gạch dưới `_` nếu thực sự cần thiết, nhưng ưu tiên camelCase).
- Không bắt đầu tên biến bằng số.
