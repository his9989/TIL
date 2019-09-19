# OpenSource에 대한 설명. (출처 : 공개 SW 대회 OT 강연)

### OpenSource : 여러 명의 개발자들이 함께 만드는 프로젝트
* 저작권이 라이선스 형태로 존재한다.
* 다만, 누구나 복제, 설치, 사용, 변경, 재배포 가능하다.
* 그냥 코드를 Github에 업로드한게 오픈소스가 아니다
  + Github에 올린 프로젝트를 여러 명과 함께 발전적인 방향으로 토론하면서 PR 및 Merge하면서 version을 높이는 것이 OpenSource
  + 이 떄, 저작권법적으로 원작자를 보호해주는게 라이선스.
* 비즈니스를 할 거면 특허 & 저작권 & 라이선스 등록은 필수다.

### 라이선스 보호 범위 별 구분
* 고지 의무 : BSD, MIT
  + 원본 소스 코드 공개
* 수정 코드에 대한 공개 : MPL, EPL, LGPL
  + 오픈 소스 코드를 추가하거나 수정한 부분 공개
* 결합된 모든 코드에 대한 공개 : GPL
  + GPL로 보호된 소스코드를 사용한 프로젝트는 코드 전문을 공개
* 실제 예시
  + https://www.oss.kr/oss_license_qna/show/d1ab68a0-48f8-4d67-b7d9-a23a0665845c

### 라이선스 사용 시 주의사항
* 서로 다른 라이선스의 오픈소스를 사용했는데 각각의 라이선스 의무사항이 상충되는 경우, 배포가 불가하다.
  + 서로 다른 라이선스에 대한 결합 제약 조건을 확인해야한다.

### 오픈소스 프로젝트 예시
* Non-Github
  + Apache : http://git.apache.org
  + Linux kernel : http://git.kernel.org
  + GNU : http://git.savannah.gnu.org/cgit/
  + Webkit : git://git.webkit.org/WebKit.git
* Github
  + Node.js : https://github.com/nodejs/node
  + Tensorflow : https://github.com/tensorflow/tensorflow
  + Spring-boot : https://github.com/spring-projects/spring-boot
  + React : https://github.com/facebook/react
  + Elasticsearch : https://github.com/elastic/elasticsearch
  + Flask : https://github.com/mitsuhiko/flask
  
### Github 외 오픈 소스 사이트
* https://www.openhub.net/

### 오픈소스는 협업이다
* 단순히 PR받고 에러 없으면 Merge해주는게 아니다.
* 제안자는 PR을 보내면서 message에 상세하게 내용을 보내고
* 원작자는 PR message를 상세히 읽고 더 좋은 방향에 대해 역제안하며 merge 거부할 수 있다.
* 이러한 소통을 통해 더 좋은 방향으로 merge하는게 좋은 오픈소스 협업
* Issue & Discussion도 마찬가지로 이렇게 소통하면서 하는게 좋은 방향이다.
  + 심지어 원작자가 다른 Contributer들에게 Issue 올리면서 물어보는 경우도 있다.

### Commit : 코드 수정 내역이랑 수정한 내용 메시지를 의미한다.
* 하나의 커밋을 3개로 쪼갤 수 있다.?
* 단, 나누더라도 쪼갠 단위의 커밋에서 에러가 나면 안된다.
* 나누는 단위 = 리뷰하기 좋은 단위. 라인 수가 많아도 같은 내용을 다루면 한 커밋 가능, 그런데 다루는 내용의 종류가 다르면 커밋을 나눠주는게 좋다.
	+ ★ 커밋 나눈다는게 무슨 말인지 확인해볼 필요가 있다.
