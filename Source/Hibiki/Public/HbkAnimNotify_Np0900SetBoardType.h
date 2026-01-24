#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EHbkNp0900_BoardType.h"
#include "HbkAnimNotify_Np0900SetBoardType.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_Np0900SetBoardType : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNp0900_BoardType BoardType;
    
public:
    UHbkAnimNotify_Np0900SetBoardType();

};

