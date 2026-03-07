Ring Buffer (hay còn gọi là Circular Buffer) là một cấu trúc dữ liệu dạng hàng đợi (queue) sử dụng một mảng có kích thước cố định. Hoạt động theo nguyên tắc FIFO-Fist In Fist Out, chỉ khác là khi dữ liệu đầy nó sẽ ghi đè lên dữ liệu cũ nếu không được đọc kịp thời.

Thuật toán được triển khai trên mảng với các thao tác:
### 1.Khởi tạo rb
- Tham số chính để thực hiện Ring Buffer: 
  + Tail vị trí thêm phần tử vào Buffer
  Head vị trí lấy phần tử khỏi Buffer
- Ngoài ra còn 1 số tham số khác như:
  + Buffer: Con trỏ tới vùng nhớ dùng để lưu trữ dữ liệu.
  + Size: Kích thước tối đa của buffer.
  + Count: Số phần tử hiện đang có trong buffer (dùng để xác định buffer đầy hay rỗng).
### 2.Thêm dữ liệu 
### 3.Lấy dữ liệu
### 4.Kiểm tra rb 



