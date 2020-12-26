public int countStudents(int[] students, int[] sandwiches) {
        boolean picked;
        int sand = 0; //current sandwich
        int stud = 0; //current student
        int sum = students.length;
        
        do{
            picked = false;
            short rotations_done = 0;
            int prev_stud = 0;
            while(true){
                if(prev_stud == stud) {
                    rotations_done++;}
                if(rotations_done > 2) {
                    break;}
                if(students[stud] == 2) {stud = (stud+1)%students.length; continue;}
                if(students[stud] == sandwiches[sand]){
                    sum--;
                    sand++;
                    students[stud] = 2;
                    picked = true;
                    if(sand >= sandwiches.length){break;}
                }
                stud = (stud+1)%students.length;
            }
        }while(picked && sand < sandwiches.length);
        return sum;
    }
