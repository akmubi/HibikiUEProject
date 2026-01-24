#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkPartnerActionBasicInfo.h"
#include "HbkPartnerAttackBasicInfo.h"
#include "HbkPartnerAttackSelectInfo.h"
#include "HbkPartnerAttackInfo.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class UHbkPartnerAttackInfo : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkPartnerAttackBasicInfo> BasicInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkPartnerAttackSelectInfo> SelectInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkPartnerActionBasicInfo> ActionBasicInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AppearAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* InvertAppearAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DisappearAnim;
    
    UHbkPartnerAttackInfo();

};

