## oracle database 설치방법
- OracleXEUniv 설치 프로그램
  + 첨부한 exe 설치 프로그램 실행
  + 데이터베이스 암호 지정에서 암호 입력하기

- oracle web site 접속
  + 홈페이지 열기 클릭하면 로그인할 수 있는 웹사이트가 열린다.
  + 로그인. admin 계정은 아이디는 "system", 비밀번호는 아까 설정한 비밀번호.
  + 위의 계정은 admin. 관리자다. 실질적으로 사용할 때는 계정 권환을 주거나 해야한다.

- 계정 설정
(DBA는 조심해야됨. 다음에 할때는 찾아보기)
  + 관리-데이터베이스사용자-사용자관리-HR 클릭
  + 아이디 hr, 비밀번호 hr, 잠금을 잠금 해제로 변환, DBA 클릭->사용자 변경 하면 잠금 해제 됨
  + 생성->아이디/비밀번호 설정, DBA 클릭 -> 계정 생성 완료

- 압축파일 (sqldeveloper-18.2.0.183.1748-x64) 설정
  + 첨부된 압축 파일 해제는 한글이나, 공백이 없는 경로에 해라.
  + 파일 최하단에 sqldeveloper.exe 실행해보기 
  + (이 전 데이터 불러오겠습니까?는 아니오! 클릭)

- Oracle sql Developer 만져보기
  + 접속란의 초록색 + 버튼 클릭. 만든 계정에 따라서 로그인. 테스트해서 좌측 하단에 성공이라고 뜨면 접속 완료.
  + 실습 내용은 하단 참고

## 단축키, 용어 등
- handler : main Thread의 것
- Thread의 메소드
  + onPreExecute : main Thread 작업 전에 실행할 것
  + onPostExecute : main Thread 작업 후에 실행할 것
  + onCancelled : main Thread 작업이 취소대면 실행할 것
  + onProgressUpdate : main Thread가 수행하는 본문.
  + doInBackground : user Thread 작업하는 곳. user Thread에서는 화면 편집이 불가능하다. <br>
    그러므로, publishProgress() 명령어를 통해, onProgressUpdate를 호출해서 화면 편집해야한다. <br>
    이 때, 상단 class의 인자 타입에 따라, publishProgress(value) 처럼 main Thread에게 인자를 보낼 수 있다. <br>  
- shared preferences : 간단한 data를 지속성 있게 모바일에 저장하기 위한 기능. (ex. 자동 로그인)
