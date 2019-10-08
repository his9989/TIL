#### License
* SW는 기본적으로 지식재산권에 의해 저작권, 특허권, 상표권을 보호받게 된다.
* 하지만, 발전적인 SW를 위해 요즘 공개SW가 활성화되고 있다.
* 이러한 공개SW환경에서 권리자가 다른 사람에게 일정한 조건으로 특정 행위를 할 수 있는 권한을 부여하는 것을 라이선스라 한다.
* 즉, 라이선스는 공개SW를 활용할 수 있는 범위를 명시하여 원 제작자의 권리를 지키는 역할을 수행한다.

#### License 종류
* GNU : General Public License
  + 자유로운 사용, 복제, 배포, 수정 허용
  + SW 배포하는 경우 저작권 표시, 보증 책임은 없고 GPL에 의해 배포된다는 사실을 명시할 필요는 있다.
  + SW를 수정하고나 새로운 SW를 링크하는 경우 전체 소스 코드를 공개해야한다.
  + 적용 사례 : 모질라 파이어폭스 v2.0, 리눅스 커널, 마리아DB, Git, 워드프레스

* LGPL : GNU Lesser General Public License
  + 새로운 SW를 링크하는 경우 전체 소스 코드를 공개할 필요는 없다.
  + 그 외에는 GNU와 거의 같은 듯
  + 적용 사례 : 모질라 파이어폭스 v2.1

* Apache 2.0
  + 아파치 소프트웨어 재단 ASF에서 만든 규정.
  + 누구든 아파치 SW 재단에 있는 SW를 다운받아 전체 혹은 부분을 개인적 혹은 상업적 목적으로 사용할 수 있다.
  + 재배포할 경우 아파치 라이선스 2.0을 포함시키고, 아파치 SW 재단에서 개발된 SW임을 밝혀야한다.
  + 적용 사례 : Apache HTTP Server, Android, Hadoop, Tomcat 등

* MIT

* BSD
  + 저작권 표시, 무보증의 표시만 한다면 누구나 자유로이 사용, 복제, 배포, 수정이 가능하다.
  + 재탄생된 프로그램에 대해 소스 코드 공개를 요구하지 않는다. 즉, 상용 SW에 무제한 사용이 가능하다.
  + openCV, NGINX

* ISC

* PSF

* ZPL

* PIL

* MPL
  + 모질라 재단에서 규정한 라이선스.
  + BSD, GPL이 혼합적인 성격을 보인다.

#### License 특징 한 눈에 비교하기!
라이선스|무료 이용|배포|소스코드 취득 및 수정|2차적 저작물 소스코드 공개|독점 SW와 결합
|:---:|:---:|:---:|:---:|:---:|:---:|
|GPL|O|O|O|O|X|
|LGPL|O|O|O|O|O|
|BSD|O|O|O|X|O|
|Apache|O|O|O|X|O|
|MPL|O|O|O|O|O|
|MIT|O|O|O|X|O|
 
#### License 목록 : 대체로 비공개로 작성된다.
공개 SW 이름|공개 SW 라이선스|라이선스 사용 방법|
|:---:|:---:|:---:|
|tensorflow|Apache 2.0|pip install tensorflow|

* ex) https://github.com/allcle/JCP/blob/master/1.%20Document/6.%20%EB%9D%BC%EC%9D%B4%EC%84%A0%EC%8A%A4%20%EB%AA%A9%EB%A1%9D.md
