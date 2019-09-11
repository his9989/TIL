## Git Hub version 관리

#### 브랜치는 로컬 브랜치와 원격 브랜치로 나뉜다.
* 로컬 브랜치 : 컴퓨터 파일의 버전관리에 사용되는 브랜치
* 원격 브랜치 : GitHub에서 버전관리에 사용되는 브랜치.
* 당연한 얘기지만, GitHub에서 Clone받은 후 GitHub에 새로운 브랜치(원격)을 추가하면 Clone받은 파일의 브랜치(로컬)에는 추가되지 않는다.
  
#### 브랜치 관련 명령어 (로컬 브랜치 관련. 원격 브랜치는 나는 그냥 컴퓨터로 한다.)
* Git Branch 목록 조회
  + git branch : 로컬 저장소 브랜치 목록 (Clone받은 파일의 브랜치 목록)
  + git branch -r : 원격 저장소 브랜치 목록 (Clone에 의해 파일과 연결된 Gihub Repositories의 브랜치 목록)
  + git branch -a : 로컬과 원격 모든 브랜치 목록 조회
  
#### Local Branch 기본 동작
* 브랜치 생성
  + git branch br1 : local의 master 브랜치에서 분기되는 br1 생성.
  + git branch br1_1 br1 : local의 br1에서 분기되는 br1_1 생성.

* 브랜치 삭제
  + git branch -D br1 : br1 브랜치 삭제

* 브랜치 변경
  + git branch -m br1 brnch1 : br1이라는 브랜치를 brnch1이라는 이름으로 변경한다.

* 브랜치 이동
  + git checkout br1 : 현재 master브랜치에서 br1 브랜치로 이동한다.
  
* 브랜치 생성과 체크아웃 동시에
  + git checkout -b br2 : master 브랜치에서 분기되는 br2라는 브랜치를 생성하며 동시에 br2로 이동한다.
  
#### Local Branch 관리
* 현재 local에서 선택된 브랜치 확인
  + git branch : 단순히 local의 모든 브랜치 출력 및 선택된 브랜치 표시해준다.
  + git branch -v : 선택된 브랜치의 상세 정보를 출력한다.
