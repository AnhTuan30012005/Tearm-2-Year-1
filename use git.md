I. Các bước sử dụng Git hub mà bạn nên biết:
1. Sử dụng với Terminal: Repository (Repo)
+ Đưa code hoặc tài liệu lên GitHUb:
- Vào trong thư mục và clone nó xuống;
- cú pháp clone: git clone <đường link git hub>
- commit -m "Tên gợi nhớ"
- git push hoặc git push -u origin main

- git clone <tên thư mục github> 
- cd: <trỏ đến thư mục đó>
- ls để xem danh sách
- code . (để tự động vào visuacode và nó sẽ xuất hiện code chúng ta cần)

- Đồng bộ code trên Github và máy tính lại với nhau: (những trường hợp bạn có
thay đổi thì bạn cần có cú pháp đồng bộ nó xuống)
+ II. Các từ khóa Git mà bạn nên biết
- git --version
- git config --global user.name "My Name"
- git config --global user.email "myemail@example.com"
- git init 
- git status 
- git add <file> or . or * to add all
- git reset <Không lưu file và đưa thư mục trở về ban đầu trước khi lưu>
- git commit -m "<my note>" nó tượng trưng cho việc lưu lại từng thời điểm, mỗi thời điểm có thay đổi gì.
<mỗi lần file có thay đổi, bạn phải git add lại từ đầu;
và mỗi lần bạn commit là nói sẽ lưu từng thời điểm, từng note khác nhau, nên việc bạn dùng lại commmit cũ là sai hoàn toàn >
- git log <coi những thời điểm mà chúng ta đã lưu file> <trong đó có bao gồm các id mà bạn đã commit>
- git log --oneline ngắn gọn hơn git log, nó dùng để tóm tắt các thay đổi mà bạn đã thay đổi trong git 
dùng để chỉ các thời gian mà bạn đã thay đổi, và các -m mà bạn đã commit
- git checkout + id của các lần bạn đã commit, nó xuất hiện đầu hàng bạn có thể tìm thấy nó.
- git checkout {branch name} branch name là để trở về thực tại nếu bạn không muốn trở lại về ban đầu 
vd: git checkout master ; <nó có thể đem ta qua từ branch này đến branch khác>
- git checkout -b {branch name new} tạo ra một branch mới
- git merge + <tên branch bạn muốn tổng hợp lại> tổng hợp lại các branch
vd: bạn đang ở trên master và bạn muốn tổng hợp dev lại thì bạn làm theo cú pháp như trên 
- git branch -d <tên branch hiện có> xóa các branch hiện có

+ conflict: có nghĩa là xung đột

- git push <link kho github>  + <tên branch>
- chúng ta có thể thay thế đường link dài ngoằng bằng một cái tên:
cú pháp: 
- git remote add origin <đường link kho lưu trữ>
git push origin <tên branch>
- nếu trên kho lưu trữ chưa thấy thì hãy push cổ điển, là push theo cú pháp ban đầu


- ! trường hợp tạo thêm một branch mới và bạn muốn push nó lên:
git push -u origin <tên branch mới đó>

- git clone {repo url}
III. Lấy một brach có sẵn
- chúng ta cũng có thể tạo một branch có sẵn trên github
- git fetch origin <để kiểm tra branch mới trên git>
- git checkout -b <tên branch trên git> origin/<tên branch trên git> kéo branch trên git xuống
IV. Muốn merge các branch lại với nhau thì chúng ta dùng chức năng có tên là "Pull Request";
làm theo các bước cho đến khi nào nó hiện nhiều màu tím là xong hahah.
- sau đó chúng ta phải pull nó về để mà đồng bộ trên máy: git pull

V. Cách để git không quan tâm tới một thư mục nào đó của ta
- tạo một file có tên là 'git ignore'
- sau đó chúng ta đem tên file k muốn git quan tâm vào đó
- sau đó push lên bth
- chúng ta thấy; file đó git sẽ không đẩy lên cho chúng ta 

VI. Chỉnh đoạn code của ai đó
- CHúng ta vào kho của họ  
- Ấn fork (góc trên cùng phải màn hình)
- nếu chúng ta muốn cho tác giả thấy đoạn commit đó, chúng ta hãy "Pull request"
- Tạo merge và ấn gửi cho tác giả, chờ tác giả accept

