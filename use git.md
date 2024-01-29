I. Các bước sử dụng Git hub mà bạn nên biết:
1. Sử dụng với Terminal: Repository (Repo)
+ Đưa code hoặc tài liệu lên GitHUb:
- Vào trong thư mục và clone nó xuống;
- cú pháp clone: git clone <đường link git hub>
- commit -m "Tên gợi nhớ"
- git push hoặc git push -u origin main

+ Đồng bộ code trên Github và máy tính lại với nhau: (những trường hợp bạn có
thay đổi thì bạn cần có cú pháp đồng bộ nó xuống)
II. Các từ khóa Git mà bạn nên biết
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
- {branch name} branch name là để trở về thực tại nếu bạn không muốn trở lại về ban đầu 
vd: git checkout master