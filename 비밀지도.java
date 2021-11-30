public String[] solution(int n, int[] arr1, int[] arr2) {
    int[] map = new int[n];
    String[] answer = new String[n];

    for (int i = 0; i < n; i++) {
        map[i] = arr1[i] | arr2[i];
    }

    for (int i = 0; i < map.length; i++) {
        String temp = Integer.toBinaryString(map[i]);
        if (temp.length() < n) {
            int cha = n - temp.length();
            for (int j = 0; j < cha; j++) {
                temp = "0" + temp;
            }
        }
        temp = temp.replaceAll("1", "#");
        temp = temp.replaceAll("0", " ");
        answer[i] = temp;
    }
    return answer;
}