#pragma once
#include "CoreMinimal.h"
#include "EHbkNp0900_BoardType.h"
#include "EHbkNp0900_IdleType.h"
#include "HbkAnimInstance.h"
#include "HbkNp0900_AnimInstanceBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class HIBIKI_API UHbkNp0900_AnimInstanceBase : public UHbkAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNp0900_BoardType BoardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNp0900_IdleType IdleType;
    
public:
    UHbkNp0900_AnimInstanceBase();

};

