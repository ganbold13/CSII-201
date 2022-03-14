#include <stdio.h>
int main(){
    int answer;
    printf("Тийм бол 1, үгүй бол 0-г оруулаарай!\nСонголттой асуултанд сонголтын дугаарыг оруулаарай!\n");
    printf("Шөлтэй, устай хоол идэх үү?\n");
    scanf("%d", &answer);
    if(answer){
        printf("Цайтай бол тийм, үгүй бол шөлтэй байх нь\n");
        scanf("%d", &answer);
        if(answer){
            printf("Будаатай бол тийм, үгүй бол банштай байх нь\n");
            scanf("%d", &answer);
            if(answer){
                printf("Будаатай цай\n");
            } else {
                printf("Банштай цай\n");
            }
        } else{
            printf("Юутай шөл идмээр байна?\n1. Гурилтай\n2. Пүнтүүзтэй\n3. Гоймонтой\n4. Банштай\n5. Махтай\n6. Ногоотой\n");
            scanf("%d", &answer);
            switch (answer)
            {
            case 1:
                printf("лапша\n");
                break;
            case 2:
                printf("хуйцаа\n");
                break;
            case 3:
                printf("гоймонтой шөл\n");
                break;
            case 4:
                printf("банштай шөл\n");
                break;
            case 5:
                printf("хар шөл\n");
                break;
            case 6:
                printf("ногоотой шөл\n");
                break;
            
            default:
                break;
            }
        }
    } else {
        printf("Мах нь татсан уу?\n");
        scanf("%d", &answer);
        if (answer)
        {
            printf("Гуриланд ороосон уу?\n");
            scanf("%d", &answer);
            if (answer)
            {
                printf("Яаж болгосон?\n1. Шарсан\n2. Жигнэсэн\n");
                scanf("%d", &answer);
                if(answer==1){
                    printf("Яаж шарсан?\n1. Хөөлгөн шарсан\n2. Шууд шарсан\n");
                    scanf("%d", &answer);
                    switch (answer)
                    {
                    case 1:
                        printf("Пирошки"); 
                        break;
                    case 2:
                        printf("Хуушуур");
                        break;
                    default:
                        break;
                    }
                if (answer == 2){
                    printf("Яаж жигнэсэн\n1. Хөөлгөн жигнэсэн\n2. Шууд жигнэсэн\n");
                    scanf("%d", &answer);
                    switch (answer)
                    {
                    case 1:
                        printf("Мантуун бууз\n");
                        break;
                    case 2:
                        printf("Бууз\n");
                    default:
                        break;
                    }
                }
                
                }
            } else{
                printf("Будаатай юү?\n1. Өндгөнд ороосон.\n2. Махаа бөөрөнхийлсөн\n");
                scanf("%d", &answer);
                    switch (answer)
                    {
                    case 1:
                        printf("Өндөгтэй пифштекс\n");
                        break;
                    case 2:
                        printf("Тефтель\n");
                    default:
                        break;
                    }
            }
            
        } else {
            printf("Юутай хольсон?\n1. Гурилтай\n2. Өндөгтэй\n3. Будаатай\n4. Ногоотой\n");
            scanf("%d", &answer);
                    switch (answer)
                    {
                    case 1:
                        printf("Цуйван\n");
                        break;
                    case 2:
                        printf("Өндөгтэй хуурга\n");
                        break;
                    case 3:
                        printf("Хооронд нь холих уу?\n");
                        scanf("%d", &answer);
                        if (answer)
                            printf("Гулиаш\n");
                        else
                            printf("Будаатай хуурга\n");
                        break;
                    case 4:
                        printf("Ногоотой хуурга\n");
                        break;    
                    default:
                        break;
                    }
        }
        
    }
}