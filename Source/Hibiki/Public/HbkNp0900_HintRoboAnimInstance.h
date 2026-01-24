#pragma once
#include "CoreMinimal.h"
#include "HbkNp0900_AnimInstanceBase.h"
#include "HbkNp0900_HintRoboAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class HIBIKI_API UHbkNp0900_HintRoboAnimInstance : public UHbkNp0900_AnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsComboMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMoveAnimFlow;
    
public:
    UHbkNp0900_HintRoboAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetMoveAnimFlow(bool bMoveFlow);
    
};

