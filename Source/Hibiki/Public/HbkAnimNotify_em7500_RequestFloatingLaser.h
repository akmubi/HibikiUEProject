#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EHbkDifficultyType.h"
#include "HbkEm7500FloatingLaserInfo.h"
#include "HbkAnimNotify_em7500_RequestFloatingLaser.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_em7500_RequestFloatingLaser : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAdjustNextNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCustomRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500FloatingLaserInfo CustomRequestInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCustomUseDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, bool> DifficultyFlags;
    
public:
    UHbkAnimNotify_em7500_RequestFloatingLaser();

};

