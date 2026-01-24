#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_SetBeatHitPos.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_SetBeatHitPos : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGround;
    
public:
    UHbkAnimNotify_SetBeatHitPos();

};

