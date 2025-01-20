int* solution(int score[], int score_len) {
    int* answer = (int*) malloc(sizeof(int) * score_len);
	for(int i=0;i<score_len;i++){
		answer[i] = 1;
		for(int j=0;j<score_len;j++){
			if(score[i] < score[j])
				answer[i]++;
	  }
  }
	  
    return answer;
}
