#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_em0570_ShotLaser.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_em0570_ShotLaser : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName_LaserBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRhythmParryOpt;
    
public:
    UHbkAnimNotify_em0570_ShotLaser();

};

