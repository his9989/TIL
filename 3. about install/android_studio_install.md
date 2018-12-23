## 안드로이드 스튜디오 다운로드
* 필요한 것 
  - 안드로이드 스튜디오
  - Java JDK 8.0(스튜디오에 포함)
  - 안드로이드 SDK (build tools, android sdk version(1~28))
    + sdk 버전은 보통 15버전을 사용한다. 너무 낮은건 구리고, 높은건 배포가 제한적이다.
  - 애뮬레이터

* 설치 방법
  + exe 프로그램 다운로드
    - https://developer.android.com/studio/ 접속, 가운데의 "DOWNLOAD ANDROID STUDIO" 버튼 클릭. -> exe프로그램 다운로드

  + exe 프로그램 실행
    - 설치 프로그램 실행 -> next 2번 누르고, 설치 위치를 "C:\Android\Android Studio" 으로 바꿔준 뒤 next -> install 누르고 설치 진행
    - Android Stuio를 실행하면 "Complete Installation"이 뜬다. "Do not import settings"하고 OK 한다.
    - wizard는 그냥 cnacel하고 꺼버린다. (여기서 설정하면 나중에 골때려진다. 밑에서 직접 설치할 것 임)

  + SDK 다운로드
    - "Welcome to Android Studio"라는 exe 프로그램이 실행되면, 우측 하단의 configure를 누른다. -> SDK Manager를 클릭
    - Android SDK Location 의 우측에 Edit 클릭
    - Android SDK Location 의 우측의 <...> 클릭
    - SDK 설치 위치를 "C:\Android\Android_sdk"로 바꿔준다. (Android_sdk 폴더는 직접 만들어준다.)
    - next-install 해주면 sdk를 우리가 설정한 폴더에 설치해준다.
    - 설치 완료되면 finish 클릭
    - Android API 28, Android 8.1(Oreo), Android 7.1.1(Nougat), Android 4.4(KitKat), Intel x86 Emulator Accelerator (HAXM installer) 5개 선택하고 계속 Next Click~~

  + 직접 실행해보기
    - Start a new Android Project 클릭해서 환경 설정하고 시작하면 최초 시작할 때 필요 데이터를 또 설치한다. 기다리기~

  + 애뮬레이터 설치
    - 우측 위에 AVD Manager 클릭 (애뮬레이터 생성)
    - create virtual device 클릭
    - 3.2HVGA 선택 (3.2인치, 작은 화면) - next 클릭
    - Oreo 8.1의 Download(파란색) 클릭

  + 안드로이드 환경 구축
    - C:\Android\Android Studio\bin 폴더에 들어가서 studio64 실행. (바로가기 만들어서 배경에 두기)
    - 처음 안드로이드 스튜디오를 오픈할 때, 기본 데이터 등을 다운로드해서 시간이 오래 걸림. 3일 정도 사용하면 빨라진다.

  + 애뮬레이터 실행
    - 우측 위에 AVD Manager 클릭 (애뮬레이터 실행)
    - 위의 13~16에서 선택한 3.2HVGA, Oreo8.1 선택해서 finish하면 애뮬레이터 설정됨.
    - 여기서 세모 모양 실행 버튼 누르면 애뮬레이터 켜짐
        (웬만하면 폰 쓰자)
        
  + 모바일 연결 방법
    - SDK Manager 클릭
    - 2번 째 tap SDK Tools 클릭
    - Google USB Driver 체크해서 설치

## Android 단축키, 기능
1. Ctril + B : 상속받은 클래스, 메소드, 변수 등의 상위 위치로 이동하는 단축키
2. art+Enter : import 해주거나, Error 해결 방안을 추천해준다.
3. 어플리케이션의 언어를 바꾸는 방법
  - 탐색기에서 "values"를 선택한 뒤
  - File->new->values resource file->Lacale 선택
  - 단, File name은 기존의 strings.xml과 동일하게 한다.
  - 한국말 선택//코드 환경 설정 완료
  - 애뮬레이터에서 환경설정-language-한국말로 변경
      -> 언어 변경 완료. 
