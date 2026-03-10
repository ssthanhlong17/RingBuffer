Ring Buffer (hay còn gọi là Circular Buffer) là một cấu trúc dữ liệu dạng hàng đợi (queue) sử dụng một mảng có kích thước cố định. Hoạt động theo nguyên tắc FIFO-Fist In Fist Out, chỉ khác là khi dữ liệu đầy nó sẽ ghi đè lên dữ liệu cũ nếu không được đọc kịp thời.

Thuật toán được triển khai trên mảng với các thao tác:
### 1.Khởi tạo Ring Buffer(rb)
- Tham số chính để thực hiện rb: 
  + Tail vị trí thêm phần tử vào rb ban đầu bằng 0.
  + Head vị trí lấy phần tử khỏi rb ban đầu bằng 0.
- Ngoài ra còn 1 số tham số khác như:
  + Buffer: Con trỏ tới vùng nhớ dùng để lưu trữ dữ liệu.
  + Size: Kích thước tối đa của rb.
  + Count: Số phần tử hiện đang có trong rb (dùng để xác định số phần tử đang có trong rb) ban đầu bằng 0.
### 2.Thêm dữ liệu
- Khi thêm dữ liệu Tail sẽ tăng lên 1. Khi count(số phần tử đang có trong rb) bằng với kích thước size(số phần tử tối đa trong rb) Tail sẽ quay về vị trí đầu tiên của rb và dữ liệu mới sẽ ghi đè lên dữ liệu cũ nếu có. Ví dụ khi rb tối đa có size = 8 và có 7 giá trị (count=7) và tail=8(do là vị trí thêm phần tử vào). Khi thêm phần tử vào count=8, tail=0 và tiếp tục thêm tail=1, head=1(do dữ liệu cũ bị ghi đè).  
### 3.Lấy dữ liệu
- Khi lấy dữ liệu head sẽ tăng lên 1 và tương tự như thêm dữ liệu khi head=7 mà ta lấy dữ liệu thì head=0.
### 4.Kiểm tra rb 
- Kiểm tra số phần tử có trong trong rb.


