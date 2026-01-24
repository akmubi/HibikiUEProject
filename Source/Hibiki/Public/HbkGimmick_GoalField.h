#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "DownStartDelegate.h"
#include "HbkGimmick_GoalFieldAction.h"
#include "HbkGimmick_GoalField.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_GoalField : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownStartDelegate OnDownEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_GoalFieldAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bDown;
    
public:
    AHbkGimmick_GoalField(const FObjectInitializer& ObjectInitializer);

};

