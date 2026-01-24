#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "HbkCoinBlockerCollisionInfo.h"
#include "HbkAnimNotifyState_SetCoinBlockerCollision.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UHbkAnimNotifyState_SetCoinBlockerCollision : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionInfoName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCoinBlockerCollisionInfo CollisionInfo;
    
    UHbkAnimNotifyState_SetCoinBlockerCollision();

};

