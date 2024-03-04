<!-- Ngày 4 tháng 3 năm 2024 -->
**BÀI HỌC VỀ CSS CỞ BẢN**

Css(viết tắt của Cascading style Sheet): Là ngôn ngữ được sử dụng để quy định cách thức trình bày các thẻ HTML trên web.

-Lợi ích: 
+ Tiết kiệm thời gian
+ Linh hoạt trong thiết kế giao diện 
+ Tăng tốc độ tải trang web
+ Dễ dàng bảo trì các trang web
+ Thiết kế trang web tương thích nhiều thiết bị     

-Cú pháp: Được tạo nên bởi ba thành phần:
+ Bộ chọn(selector): dùng để xác định thẻ HTML được áp dụng quy tắc định dạng
+ Thuộc tính (property)
+ Giá trị thuộc tính (value)

*Cách sử dụng CSS:
+ Inline CSS: Viết trực tiếp trong thuộc tính style của thẻ HTML
Viết trực tiếp vào trong thẻ 
!!! Viết tắt thẻ màu: VD: color: #ff0000 có thể thay thế bằng color:#f00

+ External CSS: Viết trong file có phần mở rộng là css và liên kết vào file HTML bằng <link>
!!! Không có thẻ style trong các phần đó 

***MỨC ĐỘ ƯU TIÊN TRONG CSS: ***
        
        <1.Giữa hai cái này không có sự ưu tiên, cái nào xuất hiện mới hơn thì lấy cái đó>
        <li>Internal and External</li> 
        <!-- 2. Từ hàng Inline đến tag mức độ ưu tiên dựa vào điểm của nó -->
        <li>Inline - 1000</li>
        <li>#id - 100</li>
        <li>.class - 10</li>
        <li>tag -1</li>

        <li>Equal specificity ?</li>
        <!-- Cái này là cái chung
        dùng selector là * có nghĩa là tất cả mọi thứ trong thẻ sẽ thay đổi hết 
        nó là 0 điểm và tất các selector khác có thể thay thế nó-->
        <li>Universal seloctor and  inherrited</li>
        <li>!Important</li>
        <!-- Muốn thắng importan mình phải đem nó vào một cái khác để xét điểm
        vd <h1 !important style = "blue"></h1>
        thì khi này cái này sẽ thắng được cái important bên css -->

        !!! Cái nào viết sau cái đó được ưu tiên hơn nếu nó được gọi cùng tên;
-ID và CLASS chỉ là một cái tên:
+ id chỉ có thể đặt một lần
+ class đặt cho nhiều thành phần 


*CSS selector:

các quy tắc css giống nhau có thể gọi cùng một lúc;

- Xác định các phần thử theo thuộc tính
vd: input[type = text]

*CSS Combinators:
- Css Combinator là cách viết kết hợp các Css selector với nhau, được sử dụng để xác định mối quan hệ gữa các phần tử HTML trong selector (dựa trên mối quan hệ)
***Css combinator: ***
        ví dụ:          Đối tượng chịu tác động

        div p           Các thẻ p bên trong thẻ div (ở bất kì cấp độ nào)
        div > p         Các thẻ p là con của thẻ div
        div + p         Thẻ p được đặt kế và ngay sau thẻ div (ví dụ: h1 + p i                 thẻ này được đặt ngay sau và liền kề nhau)
        div ~ p         Các thẻ p đồng cấp nằm sau thẻ div( p là "em" cua thẻ div, nếu
                        div trước thẻ h1 thì nó không chịu ảnh hưởng, vì nó không phải là em của div)

        vd: div > p > ul > li > a { <your code css> }

        !!! Cái viết sau cùng là cái chịu tác động của sự thay đổi
        Còn cái ở trước chỉ là đẻ định dạng 
        Nó giống mối quan hệ cha con



*CSS Compuond selector (Bộ chọn kết hợp- kết hợp "nhiều điều kiện" với nhau) (không có khoảng trắng)
- là một chuỗi các selectỏ đơn giản không được phân cách bởi cách combinator 
***Css Compuond selector***
        ví dụ:                  Đối tượng chịu tác động

        div.content             Các thẻ div có class là content (nó kèm các điều kiện
                                tiếp theo) 
