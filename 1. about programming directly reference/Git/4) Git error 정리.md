## gitignore
* git hub에 파일을 업로드할 때, 무의미한 파일들을 제거하는 역할
* 생성 방법 2가지 <br>
  (1) 레파지토리를 생성할 때 "gitingonre"를 생성하도록 설정 <br>
  (2) 레파지토리를 이미 생성했다면, Create file을 한 뒤, 파일 이름을 ".gitignore"하면, 우측에 어떤 파일에 대한 gitingore인지 선택할 수 있다.

## git error
* error message : Updates were rejected because the remote contains work that you do not have locally.
  + 원인 : local에서 conflict 발생하는 경우. 즉, 최신 버전을 pull하지 않고 push하려고 해서 에러 발생
  + 해결 방법 : 
  
<code>

    git remote add origin [// your github url]
    git pull origin master
    // 여기서 pull하는 이유를 작성하라는 ui 생성됨 -> 그냥 대충 끄적이고 "Ctrl + ZZ" 하면 됨
    git push origin master

</code>

* error message : warning: CRLF will be replaced by LF in some/file.file. The file will have its original line endings in your working directory.
  + 원인 : window 개발자와 linux 개발자가 Git으로 협업할 때 발생하는 문제. 
     - 유닉스 시스템에서는 한 줄의 끝이 LF(Line Feed)로 이루어지는 반면, 
     - 윈도우에서는 줄 하나가 CR(Carriage Return)와 LF(Line Feed), 즉 CRLF로 이루어지기 때문이다.
  + 해결 방법 : 아래 코드로 설정을 바꿔준다. 
     - 설정 바꿔줘도 발생할 수 있는데 warning으로, 조금 기다리면 해결된다.
  
<code>
  
    git config --global core.autocrlf true
  
</code>

* error message : Please make sure you have the correct access rights and the repository exists.
   + 원인 : 지정한 remote 경로는 ssh형식인데, git 생성을 https형식으로 경로를 설정했으므로 문제 발생
   + 해결 방법 : git remote rm origin을 통해 기존 remote 경로를 지우고 https형식으로 다시 설정하여 해결
   + reference url : https://recoveryman.tistory.com/282
   
* error message : You have not concluded your merge (MERGE_HEAD exists)
  + 원인 : 병합 중 충돌
  + 해결 방법 : git merge --abort 하고 다시 pull 한 다음에 git push
  + ref url : https://gutmate.github.io/2018/04/18/git-pull-fail/
