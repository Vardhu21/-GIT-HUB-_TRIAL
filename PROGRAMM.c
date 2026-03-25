#include<stdio.h>
#include<string.h>
int main(){
    int s;
    int characters=0;
    int vowels=0;
    int constants=0;
    int digit=0;
    int space =0;
    int sp=0;
    char c[50];
    fgets(c,50,stdin);
    s=strlen(c)-1;
    for(int i=0;i<s;i++){
        if(c[i]!='\n'){
        if(c[i]>='a'&& c[i]<='z'||c[i]>='A'&& c[i]<='Z'){
            characters+=1;
        
            if((c[i]=='a'||c[i]=='A')||(c[i]=='E'||c[i]=='e')||(c[i]=='I'||c[i]=='i')||(c[i]=='O'||c[i]=='o')||(c[i]=='U'||c[i]=='u')){
                vowels+=1;
                
            }
                
            
            else{
                constants+=1;
                
            }
        }
        else if(c[i]>='0'&&c[i]<='9'){
    
            digit+=1;
        }
        else if(c[i]==' '){
          space=space+1;
        }
        else{
            sp=sp+1;
        }}
    }
    
    printf("TOTAL LENGTH :%d\n",s);
    printf("NUMBER OF CHARACTERS:%d\n",characters);
    printf("NUMBER OF VOWELS :%d\n",vowels);
    printf("NUMBER OF CONSTANTS :%d\n",constants);
    printf("NUMBER OF DIGITS :%d\n",digit);
    printf("NUMBER OF SPACE :%d\n",space);
    printf("NUMBER OF SPECIAL CHARACTER:%d\n",sp);
    return 0;
}
